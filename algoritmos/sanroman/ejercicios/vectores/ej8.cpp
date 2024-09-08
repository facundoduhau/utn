#include <iostream>

using namespace std;

int main()
{
  int a = 6912, uno, diez, cien, mil;
  uno = a / 1 % 10;
  diez = a / 10 % 10;
  cien = a / 100 % 10;
  mil = a / 1000 % 10;
  cout << "Uno: " << uno << endl << "Diez: " << diez << endl << "Cien: " << cien << endl << "Mil: " << mil << endl;
}
