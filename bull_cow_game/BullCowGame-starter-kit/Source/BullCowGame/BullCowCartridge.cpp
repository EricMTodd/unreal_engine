// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    // Welcome the Player
    PrintLine(TEXT("Welcome to the pasture, lad!"));
    PrintLine(TEXT("Press Tab to type. Go ahead and type something, anything! Then press enter.")); // Magic Number Remove!
    PrintLine(TEXT("Guess the 6 letter word."));

    // Setting up the game
    HiddenWord = TEXT("secret");
    // Set lives

    // Prompt player for guess
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    ClearScreen();

    // Checking PlayerGuess

    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You have won!"));
    }
    else
    {
        PrintLine(TEXT("You have lost..."));
    }
    // Check if isogram
    // Check right number of characters

    // Remove life

    // Check if lives > 0
    // If True, play again
    // Show lives left
    // If False, show game over and HiddenWord
    // Prompt to play again, press enter to play again?
    // Check user input
    // Play again or quit
}