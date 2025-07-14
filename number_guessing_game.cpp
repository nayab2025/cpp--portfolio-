#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  srand(time(0));
  int secret = rand() % 100 + 1;
  int guess, tries = 0;

  cout << "🎯 Welcome to the Number Guessing Game!" << endl;

  do {
    cout << "Guess a number between 1 and 100: ";
    cin >> guess;
    tries++;

    if (guess < secret)
      cout << "Too low! Try again.\n";
    else if (guess > secret)
      cout << "Too high! Try again.\n";
    else
      cout << "🎉 Correct! You guessed it in " << tries << " tries.\n";

  } while (guess != secret);

  return 0;
}
