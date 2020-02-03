// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to the pasture, lad!"));
    PrintLine(TEXT("Press Tab to type. Go ahead and type something, anything! Then press enter.")); // Magic Number Remove!
    PrintLine(TEXT("Guess the 6 letter word."));
    HiddenWord = TEXT("secret");
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    ClearScreen();
    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You have won!"));
    }
    else
    {
        PrintLine(TEXT("You have lost..."));
    }
}