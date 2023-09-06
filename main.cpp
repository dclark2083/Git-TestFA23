#include <iostream>

using namespace std;

int sum(int number);



int main(){
  cout << "Hello World!" << endl;
  cout << "Please enter a number." << endl;
  int number = 0;
  cin >> number;
  cout <<  sum(number);


  return 0;
}

int sum(int number){
  int x = number;
  for (int i = 0; i < number; i++) {
    x += i;
  }

  return x;

}
