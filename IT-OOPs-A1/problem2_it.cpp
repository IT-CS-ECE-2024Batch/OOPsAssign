#include <iostream>
using namespace std;
int main()
{
   int a;
   cin >> a;
   int fact=1;
   for (int i = 1; i <= a; i++)
   {
       if (i == 0 || i == 1)
       {
           fact = 1;
       }
       else {
           fact *= i;
       }
   }
   cout << fact << endl;
}
