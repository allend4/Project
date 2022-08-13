// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "MyGun.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();

	MyGun = GetWorld()->SpawnActor<AMyGun>(MyGunClass);
	GetMesh()->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_None); // hides gun from skeletal mesh
	// Attach new weapons to child socket of original weapon mesh 
	MyGun->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("WeaponSocket"));
	MyGun->SetOwner(this);
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// axis
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AMyCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &APawn::AddControllerPitchInput); // pitch
	PlayerInputComponent->BindAxis(TEXT("MoveLeft"), this, &AMyCharacter::MoveLeft);
	PlayerInputComponent->BindAxis(TEXT("LookLeft"), this, &APawn::AddControllerYawInput); // yaw
	// action
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Shoot"), EInputEvent::IE_Pressed, this, &AMyCharacter::Shoot);
}

// Move forwards + backwards
void AMyCharacter::MoveForward(float AxisValue)
{
	AddMovementInput(GetActorForwardVector() * AxisValue);
}
// Move left + right
void AMyCharacter::MoveLeft(float AxisValue)
{
	AddMovementInput(GetActorRightVector() * AxisValue);
}
// shoot weapon
void AMyCharacter::Shoot()
{
	MyGun->PullTrigger();
}

