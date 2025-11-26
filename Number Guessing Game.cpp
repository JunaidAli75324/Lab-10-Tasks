#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));           
    int secret = rand() % 20 + 1;
    int guess;

    do {
        cout << "Guess the number (1-20): ";
        cin >> guess;

        if (guess > secret) cout << "Too high!\n";
        else if (guess < secret) cout << "Too low!\n";

    } while (guess != secret);

    cout << "Correct! You guessed it.\n";
    return 0;
}
