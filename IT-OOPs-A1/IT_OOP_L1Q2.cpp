// 2.  Write  a  program  that  prints  the  following  diamond  shape.  You  may
// use output statements that print a single asterisk (*), a single blank or a single newline. Maximize
// your use of repetition (with nested for statements) and minimize the number of output statements.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, k = 0;
    cout << "enter diagonal width: ";
    cin >> n;
    cout << "\n";
    for (i = 1; i <= n; ++i, k = 0)
    {
        for (j = 1; j <= n - i; ++j)
        {
            cout << "  ";
        }

        while (k != 2 * i - 1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }

    for (i = n; i >= 1; --i)
    {
        for (j = 0; j < n - i + 1; ++j)
        {
            cout << "  ";
        }

        for (j = i; j <= 2 * i - 2; ++j)
        {
            cout << "* ";
        }

        for (j = 0; j < i - 2; ++j)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}