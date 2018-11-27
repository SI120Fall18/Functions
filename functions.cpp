// Problem 1
/*
#include <iostream> 
using namespace std;

int power(int base, int exp) {
  int num = 1;
  for(int i = 1; i <= exp; i++) {
    num *= base;
  }
  return num;
}

int main() {
  int b, E;
  cout << "Enter the base and exponent separated by spaces): ";
  cin >> b >> E;
  cout << power(b, E) << endl;

  return 0;
}
*/

// Problem 2
/*
#include <iostream>
using namespace std;

void repeat(string var) {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  for(int i = 1; i <= num; i++) {
    cout << var << endl;
  }
}

int main() {
  string var;
  cout << "Enter the word or phrase: ";
  getline(cin, var);
  repeat(var);
  repeat(var);

  return 0;
}
*/

// Problem 3
/*
#include <iostream>
using namespace std;

void updateTotal(int &total, int running) {
  total += num;
}

int main() {
  int student, total;
  cout << "Enter number of students: ";
  cin >> student;
  for(int i = 1; i <= student; i++) {
    int num = 0;
    cout << "Enter total: ";
    cin >> total;
    updateTotal(total, num);
    cout << "total: " << total << endl;
  }

  return 0;
}
*/