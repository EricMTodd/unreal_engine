#include <iostream>

void PrintIntroduction(int Difficulty)
{
    // Print welcom messages to the terminal
    std::cout << "\nYou've just stolen a pricelss artifact worth untold riches, you can hear the guards running towards you just around the corner.";
    std::cout << "\nYou are desperately trying pick a lock with " << Difficulty;
    std::cout << " tumblers that bars your escape.";
    std::cout << "\nYou reach for the note torn from the scientist's journal and it all comes together...";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // Declare 3 number code
    const int CodeA = rand();
    const int CodeB = rand();
    const int CodeC = rand();

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print sum and product to the terminal
    std::cout << "\n\nThere are three numbers in the code";
    std::cout << "\nThe numbers in the code add up to " << CodeSum;
    std::cout << "\nThe product of the numbers in the code is " << CodeProduct;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cout << "\n\nPlease guess the code: ";
    std::cin >> GuessA >> GuessB >> GuessC;

    std::cout << "Your guess: " << GuessA << GuessB << GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    // std::cout << "\n\nThe sum of your guess is " << GuessSum;
    // std::cout << "\nThe product of your guess is " << GuessProduct;

    // Check to see if the player's guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n\nYou feel a tumbler slide into place, on to the next!\n";
        return true;
    }
    else
    {
        std::cout << "\n\nThe lock appears to be stuck, keep trying!\n";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    const int MaxLevel = 5;

    while (LevelDifficulty <= MaxLevel) // Loop game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    std::cout << "\nYou pop the lock, and throw open the door at a dead sprint into the night!\n";
    return 0;
}
