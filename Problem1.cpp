#include <iostream>
using namespace std;
void addition()
{
    int a, b;
    cout << "enter first number ";
    cin >> a;
    cout << "enter second number ";
    cin >> b;
    cout << "sum of 2 numbers is " << a + b << "\n";
}
int subtraction()
{
    int a, b;
    cout << "enter first number ";
    cin >> a;
    cout << "enter second number ";
    cin >> b;
    cout << "subtracted result is " << a - b << "\n";

    return 0;
}

void multiplication(int a, int b)
{
    cout << "product of 2 numbers is " << a * b << "\n";
}
int division(int a, int b)
{
    if (b != 0)
    {

        cout << "division of 2 numbers is " << (float(a) / float(b)) << "\n";
    }
    else
    {
        cout << "division by 0 error";
    }
    return 0;
}
void SwitchCalc()
{
    char op;
    float num1, num2;

    cout << "Enter operator: +, -, *, /: \n";
    cin >> op;

    cout << "Enter first operand: \n";
    cin >> num1;
    cout << "enter second operand: \n";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;

    default:
        // If the operator is other than +, -, * or /, error message is shown
        cout << "Error! operator is not correct";
        break;
    }
}

int main()
{
    cout << "for addition \n ";
    addition();
    cout << "for subtraction \n ";
    subtraction();
    cout << "for multiplication \n ";
    int x, y;
    cout << "enter first number ";
    cin >> x;
    cout << "enter second number ";
    cin >> y;
    multiplication(x, y);

    cout << "for division \n ";
    cout << "enter first number ";
    cin >> x;
    cout << "enter second number ";
    cin >> y;
    division(x, y);
    SwitchCalc();
    return 0;
}