#include <iostream>
#include <vector>
using namespace std;

// Assign numMatches with the number of elements in userValues that equal matchValue. userValues has NUM_VALS elements. Ex: If userValues is {2, 2, 1, 2} and matchValue is 2 , then numMatches should be 3.

// Your code will be tested with the following values : *matchValue : 2, userValues : {2, 2, 1, 2}(as in the example program above)*matchValue : 0, userValues : {0, 0, 0, 0} * matchValue : 50, userValues: { 10, 20, 30, 40 }
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
// Write a for loop to populate vector userGuesses with NUM_GUESSES integers. Read integers using cin. Ex: If NUM_GUESSES is 3 and user enters 9 5 2, then userGuesses is {9, 5, 2}.
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

// Vector testGrades contains NUM_VALS test scores. Write a for loop that sets sumExtra to the total extra credit received. Full credit is 100, so anything over 100 is extra credit. Ex: If testGrades = {101, 83, 107, 90}, then sumExtra = 8, because 1 + 0 + 7 + 0 is 8.
int main()
{
  const int NUM_VALS = 4;
  vector<int> testGrades(NUM_VALS);
  unsigned int i;
  int sumExtra = -9999; // Assign sumExtra with 0 before your for loop

  for (i = 0; i < testGrades.size(); ++i)
  {
    cin >> testGrades.at(i);
  }
  sumExtra = 0;
  for (i = 0; i < testGrades.size(); ++i)
  {
    if (testGrades.at(i) > 100)
    {
      sumExtra += (testGrades.at(i) - 100);
    }
  }
  /* Your solution goes here  */

  cout << "sumExtra: " << sumExtra << endl;
  return 0;
}

// Write a for loop to print all NUM_VALS elements of vector hourlyTemp. Separate elements with a comma and space. Ex: If hourlyTemp = {90, 92, 94, 95}, print:
//  90, 92, 94, 95
//  Your code's output should end with the last element, without a subsequent comma, space, or newline.
int main()
{
  const int NUM_VALS = 4;
  unsigned int i;
  vector<int> hourlyTemp(NUM_VALS);

  for (i = 0; i < hourlyTemp.size(); ++i)
  {
    cin >> hourlyTemp.at(i);
  }

  /* Your solution goes here  */
  for (i = 0; i < hourlyTemp.size(); ++i)
  {
    cout << hourlyTemp.at(i);
    if (i < hourlyTemp.size() - 1)
    {
      cout << ", ";
    }
  }
  // for (i = 0; i < hourlyTemp.size(); i++)
  // {
  //   if (hourlyTemp.at(i) == (hourlyTemp.size() - 1))
  //   {
  //     cout << hourlyTemp.at(i);
  //   }
  //   else
  //   {
  //     cout << hourlyTemp.at(i) << ", ";
  //   }
  // }

  cout << endl;

  return 0;
}
