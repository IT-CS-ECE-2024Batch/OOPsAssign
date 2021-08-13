// 4. A  mail  order house  sells  five  different  products  whose  retail  prices  are:  product  1  —  $2.98,
// product 2—$4.50, product 3—$9.98, product 4—$4.49 and product 5— $6.87. Write a program
// that reads a series of pairs of numbers as follows:
// a) product number    b) quantity sold
// Your program should use a switch statement to determine the retail price for each product. Your
// program  should  calculate  and  display  the  total  retail  value  of  all  products  sold.  Use a  sentinel-
// controlled loop to determine when the program should stop looping and display the final results.

#include <iostream>

using namespace std;

int main()
{
    double sum = 0;
    int n = 0, quantity = 0;

    while (true)
    {
        cout << "Enter product number & quantity sold for next product (-1 -1 to exit): ";
        cin >> n >> quantity;
        if (n <= 0 || quantity <= 0)
        {
            cout << "\n .............Sentinal Exit............. \n";
            break;
        }
        switch (n)
        {
        case 1:
            sum += 2.98 * quantity;
            break;
        case 2:
            sum += 4.50 * quantity;
            break;
        case 3:
            sum += 9.98 * quantity;
            break;
        case 4:
            sum += 4.49 * quantity;
            break;
        case 5:
            sum += 6.87 * quantity;
            break;
        }
    }
    cout << "The  total  retail  value  of  all  products  sold: " << sum << endl;
    return 0;
}