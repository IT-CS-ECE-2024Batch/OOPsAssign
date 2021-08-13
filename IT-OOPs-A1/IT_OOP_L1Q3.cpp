// 3. Calculate the value of π from the infinite series
// Print a table that shows the approximate value of π after each of the first 1000 terms of this series.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double fraction = 0, pi = 0;
    cout.precision(17);

    // value for pi will be accurate if looped at 100000 steps , this ressult is not accurate
    for (int n = 1; n <= 1000; n++)
    {
        fraction = (4 * pow(-1, n + 1)) / (2 * n - 1);
        pi = pi + fraction;
        cout << "The current value of pi is: \t " << fixed << pi << endl;
    }

    cout << "The Final value of pi is: \t" << fixed << pi << endl;

    return 0;
}