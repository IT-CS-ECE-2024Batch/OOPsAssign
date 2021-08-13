#include <iostream>

using namespace std;

int pow(int base, int exp)
{
  if (exp == 1)
    return base;
  else if (exp == 0)
      return 1;
  base *= pow(base, exp - 1);
  return base;
}

int32_t main()
{
  int base, exp;
  cout << "Base : ";
  cin >> base;
  cout << "Exponent : ";
  cin >> exp;
  cout << pow(base, exp)<<endl;
  return 0;
}
