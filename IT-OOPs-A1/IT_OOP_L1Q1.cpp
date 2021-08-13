// 1. Write a program that uses for statements to print the following patterns separately, one below
// the other. Use for loops to generate the patterns. All asterisks (*) should be printed by a single
// statement of the form cout << '*';

#include <iostream>

using namespace std;

int main()
{
    int i, j, k, n;
    cin >> n;

    cout << endl;
    /* ---------------------- */
    // *
    // **
    // ***
    // ****
    // *****

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    /* ---------------------- */
    // *****
    // ****
    // ***
    // **
    // *

    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    /* ---------------------- */
    // *****
    //  ****
    //   ***
    //    **
    //     *

    for (i = n; i >= 1; --i)
    {
        for (j = 0; j < n - i; ++j)
        {
            cout << " ";
        }

        for (j = i; j <= 2 * i - 1; ++j)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl;

    /* ---------------------- */
    //    *
    //   **
    //  ***
    // ****
    //*****

    i = 0, k = 0, j = 0;
    for (i = 1; i <= n; ++i, k = 0)
    {
        for (j = 1; j <= n - i; ++j)
        {
            cout << " ";
        }

        while (k != i)
        {
            cout << "*";
            ++k;
        }
        cout << endl;
    }

    return 0;
}
