// Ivy Loi
// iloi05@csu.fullerton.edu
// @iloi05
// Partners: @Wen-qqi

#include "hilo.h"

#include "rng.h"

GameState::GameState(int secret) : secret_(secret), guesses_left_(4) {}
// complete the definition of this constructor.
// Since this is a constructor, it should use a member initialization list
// to initialize data members.
// When you are done, delete this comment.

int GameState::Secret() const { return secret_; }
// complete the definition of this function.
// Since this is a constructor, it should use a member initialization list
// to initialize data members.
// When you are done, delete this comment.
// replace this return statement with one that actually works

int GameState::GuessesLeft() const { return guesses_left_; }

// write statements to implement this function, and delete this comment
// Hint: This is a simple accessor function. The function definition only
// needs to be a single statement.

bool GameState::GuessCorrect(int guess) const { return guess == secret_; }
// write statements to implement this function, and delete this comment
// Hint: Use an if statement.
// replace this return statement with one that actually works

bool GameState::GuessTooBig(int guess) const { return guess > secret_; }
// write statements to implement this function, and delete this comment
// Hint: Use an if statement.
// replace this return statement with one that actually
// works

bool GameState::GuessTooSmall(int guess) const { return guess < secret_; }
// write statements to implement this function, and delete this comment
// Hint: Use an if statement.
// replace this return statement with one that actually works

void GameState::CountGuess() { guesses_left_--; }
// write statements to implement this function, and delete this comment

bool GameState::GameOver() const { return guesses_left_ == 0; }
// write statements to implement this function, and delete this comment
// replace this return statement with one that actually works

int RandomSecretNumber() {
  // write statements to implement this function, and delete this comment
  // Hint: first seed the random number generator
  // then generate a random number between 1 and 10
  // finally return that random number
  static RandomNumberGenerator rng{1, 10};
  return static_cast<int>(rng.Next());
  // replace this return statement with one that actually works
}
