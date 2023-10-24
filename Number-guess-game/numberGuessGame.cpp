#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;

int main()
{
    // Seed the randomnumber generator with the current time
    // srand(static_cast<unsingned>(time(nullptr)));

    int guess;
    int attempts = 0;

    // Generate a random number between 1 and 100
    mt19937 mt(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<int> dist(1, 100);

    int randomNumber = dist(mt);

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I am thinking of a number between 1 and 100" << endl;
    do
    {
        cout << "Guess the number..." << endl;
        cin >> guess;
        attempts++;
        if (guess < randomNumber)
            cout << "Too Low! Guess a higher number..." << endl;
        else if (guess > randomNumber)
            cout << "Too High! Try a lower number..." << endl;
        else
            cout << "Congratulations! You have Guessed the correct Number " << guess << " in " << attempts << " attempts." << endl;
    } while (guess != randomNumber);

    return 0;
}