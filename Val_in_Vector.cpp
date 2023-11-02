#include <iostream>
#include <vector>
using namespace std;

int main()
{
  const int NUM_VALS = 4;
  int matchValue;
  unsigned int i;
  int numMatches = -99; // Assign numMatches with 0 before your for loop
  vector<int> userValues(NUM_VALS);

  cin >> matchValue;

  for (i = 0; i < userValues.size(); ++i)
  {
    cin >> userValues.at(i);
  }
  numMatches = 0;
  for (i = 0; i < userValues.size(); ++i)
  {
    if (userValues.at(i) == matchValue)
    {
      numMatches++;
    }
  }

  cout << "matchValue: " << matchValue << ", numMatches: " << numMatches << endl;

  return 0;
}

int main()
{
  const int NUM_GUESSES = 3;
  vector<int> userGuesses(NUM_GUESSES);
  unsigned int i;

  /* Your solution goes here  */
  for (i = 0; i < userGuesses.size(); ++i)
  {
    int num;
    cin >> num;
    userGuesses.at(i) = num;
  }

  for (i = 0; i < userGuesses.size(); ++i)
  {
    cout << userGuesses.at(i) << " ";
  }

  return 0;
}