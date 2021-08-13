#include <iostream>
using namespace std;

void tOH(int n, char fromRod, char toRod, char auxRod)
{
    if (n == 1)
    {
        cout << "Moving disk 1 from rod " << fromRod << " to rod " << toRod << endl;
        return;
    }
    tOH(n - 1, fromRod, auxRod, toRod);
    cout << "Moving disk " << n << " from rod " << fromRod << " to rod " << toRod << endl;
    tOH(n - 1, auxRod, toRod, fromRod);
}

int main()
{
    int n = 4;
    cout << "enter no of disks\t :";
    cin >> n;
    tOH(n, 'A', 'C', 'B');
    return 0;
}