#include <iostream>

using namespace std;

int reversDigits(int n)
{
    int rev_n = 0;
    while (n > 0)
    {
        rev_n = rev_n * 10 + n % 10;
        n = n / 10;
    }
    return rev_n;
}

int main()
{
    int n = 0;
    cout << "Enter Integer value  ::  ";
    cin >> n;
    cout << "\nReverse of Integer value is :: " << reversDigits(n) << endl;

    return 0;
}
