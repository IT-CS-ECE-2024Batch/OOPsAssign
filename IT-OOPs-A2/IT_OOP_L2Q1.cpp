#include <iostream>
using namespace std;
#define ll long long

bool isPerfect(ll n)
{
    ll sum = 0;
    for (ll i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
        return true;
    return false;
}

void printing(ll n)
{
    cout << n << ": ";
    for (ll i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int32_t main()
{
    ll i = 0;
    for ( i = 1; i <= 1000; i++)
    {
        if (isPerfect(i))
            printing(i);
    }
    cout << "\nEnter number bigger than 1000" << endl;
    cin >> i;
    if (isPerfect(i))
        printing(i);

    return 0;
}
