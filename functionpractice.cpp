/* 
  Program 1. 
  Ask the user to enter in a number between 1-25.
  If the number is less than 1, tell the user they cannot have a number less than 1.
  If the number is greater than 25, tell the user they cannot have a number greater than 25.
*/

/*  
#include <iostream>
using namespace std;

int main() {
  int number;

  cout << "Enter a number within the range (1-25): ";
  getNumber(number);

  if(number < 1) {
    printLess(); 
  } else if(number > 25 {
    printGreater();
  } else {
    printValid();
  }  

  return 0;
}
*/

// -------------------------------------------------------------------------

/*
  Program 2.
  Have the user enter in 5 characters. If it is a palindrome, then print yes.
  If it is not a palindrome, then print no.
*/

/*
#include <iostream>
using namespace std;

int main() {
  char c1, c2, c3, c4, c5;
  
  cout << "Enter 5 characters: ";
  get5Characters(c1, c2, c3, c4, c5);
  
  if(isPalindrome(c1, c2, c3, c4, c5)) {
    cout << "Palindrome." << endl;
  } else if(isNotPalindrome(c1, c2, c3, c4, c5)) {
    cout << "Not a palindrome." << endl;
  }

  return 0; 
}
*/

// ----------------------------------------------------------------

/*
  Program 3.
  Have the user enter in even or odd. If the user enters in even, print all even numbers up to 50.
  If the user enters in odd, print all odd numbers up to 50.
*/

/*
#include <iostream>
using namespace std;

int main() {
  string choice;
  cout << "Do you want to see even numbers or odd numbers? ";  
  choice = getChoice();

  if(choice == "even") {
    printEven();
  } else if(choice == "odd") {
    printOdd();
  }

  return 0;
}
*/

// -----------------------------------------------------------------

/* 
  Program 4.
  Have the user enter in 3 numbers. Return the values in order of least to greatest.
  We will assume each number is different.
  Example 1: 
    input: a = 5, b = 6, c = 2 
    output: a = 2, b = 5, c = 6
  Example 2:
    input: a = 10, b = 1, c = 25
    output: a = 1, b = 10, c = 25
*/

/*
#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  
  cout << "Enter 3 numbers and I will sort them from least to greatest: ";
  get3Numbers(a, b, c);

  sortNumbers(a, b, c);
  printSorted(a, b, c);  

  return 0;
}
*/
