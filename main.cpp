#include <iostream>

using namespace std;

int sum(int number);
int product(int number);


int main(){
  cout << "Hello World!" << endl;
  cout << "Please enter a number." << endl;
  int number = 0;
  cin >> number;
  cout << "Your number summed is: " << sum(number) << endl;
  cout << "Your number's product is: " << product(number) << endl;


  return 0;
}

int sum(int number){
  int x = number;
  for (int i = 0; i < number; i++) {
    x += i;
  }

  return x;

}

int product(int number){
  int x = number;
  for (int i = 1; i < number; i++){
    x *= i;
  }

  return x;
}

