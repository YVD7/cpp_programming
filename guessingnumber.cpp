#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Initialized random seed
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess = 0;

    cout << "I have chosen n number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    while (guess != secretNumber) {
        cout << "Enter your guess: "<< endl;
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high ! Try agian." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations ! You guessed my number!" << endl;
        }
    }
    return 0;
}