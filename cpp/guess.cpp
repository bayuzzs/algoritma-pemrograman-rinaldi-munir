#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    int number = rand() % 100 + 1;
    int guess;
    int count = 0;

    do
    {
        count++;
        std::cout << "Guess a number (1 - 100) : ";
        std::cin >> guess;

        if (guess == number)
        {
            std::cout << "Correct! the number is " << guess << "\n";
            std::cout << "you try to guess " << count << " times\n";
        }
        else if (guess > number)
        {
            std::cout << "Too high!\n";
        }
        else if (guess < number)
        {
            std::cout << "Too low!\n";
        }

    } while (guess != number);
}