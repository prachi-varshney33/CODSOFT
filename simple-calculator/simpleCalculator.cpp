#include <iostream>
using namespace std;

int main()
{
    int a1, a2;
    char op;
    cout << "Enter two numbers: ";
    cin >> a1 >> a2;
    cout << "Select the operator ( +, -, *, / ) : ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a1 << " + " << a2 << " = " << a1 + a2;

        break;
    case '-':
        cout << a1 << " - " << a2 << " = " << a1 - a2;

        break;

    case '*':
        cout << a1 << " * " << a2 << " = " << a1 * a2;

        break;
    case '/':
        cout << a1 << " / " << a2 << " = " << a1 / a2;

        break;

    default:
        cout << "Invalid operator!";
        break;
    }
    return 0;
}