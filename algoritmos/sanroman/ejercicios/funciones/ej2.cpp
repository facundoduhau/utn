#include <iostream>

using namespace std;

int factorialFunction(int x);

int main()
{
  cout << factorialFunction(5) << endl;
}

int factorialFunction(int x){
  
 int fact = 1;

  for (int i = 1; i <= x; i++)
  {
    fact *= i;
  }
  return fact;
}
