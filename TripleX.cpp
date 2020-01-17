#include <iostream>

int main()
{

    // Print welcom messages to the terminal
    std::cout << std::endl;
    std::cout << "You are desperately trying to undo the lock to the door that bars your only escape from imminent doom.";
    std::cout << std::endl;
    std::cout << "You reach for the note torn from the scientist's journal and it all comes together...";

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "There are three numbers in the code" << std::endl;
    std::cout << "The numbers in the code add up to " << CodeSum << std::endl;
    std::cout << "The product of the numbers in the code is " << CodeProduct << std::endl;

    int PlayerGuess;

    return 0;
}
