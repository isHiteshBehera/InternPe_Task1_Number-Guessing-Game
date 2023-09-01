#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  // Generate a random number
  srand(time(NULL));

  int secret_number = rand() % 100 + 1;

  // Initialize the number of guesses
  int guesses = 1;

  // Start the guessing game
  while (true) {
    // Get the user's guess
    int guess;
    cout <<"Guess " << guesses;
    cout << "\nEnter your guess (1-100): ";
    cin >> guess;

    // Check if the user guessed the correct number
    if (guess == secret_number) {
      cout << "\nCongratulations! The correct number was indeed " << secret_number << ".\n\nYou guessed the correct number in " << guesses << " guesses!" << endl;
      break;
    } else {
      guesses++;

      // Tell the user if their guess is too high or too low
      if (guess < secret_number) {
        cout << guess << " is lower than the correct numeber.\n" << endl;
      } else {
        cout << guess << " is higher than the correct number.\n" << endl;
      }
    }
  }

  system("pause");
  return 0;
}
