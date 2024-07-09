// Simple Calculator

// Create a console-based calculator program that can perform basic arithmetic operations such as addition, subtraction, multiplication, and division.

// You can implement this using functions for each operation and handle user input to perform calculations.

#include <bits/stdc++.h>

using namespace std;

int choice;
double num1, num2, result;
char c;

double selectoperation(double num1, double num2, char c)
{
    if (c == '+')
        return num1 + num2;
    else if (c == '-')
        return num1 - num2;
    else if (c == '*')
        return num1 * num2;
    else
    {
        if (num2 == 0)
            cout << "Error!" << endl;
        else
            return num1 / num2;
    }
}

void showMenu()
{
    cout << "Enter 1 for add " << endl;
    cout << "Enter 2 for sub " << endl;
    cout << "Enter 3 for mutiply " << endl;
    cout << "Enter 4 for divide " << endl;
    cout << "Enter 5 to clear All" << endl;
    cout << "Enter 6 for exit " << endl;
}

void doafterchoice()
{
    cout << "Enter second number" << endl;
    cout << num1 << c;
    cin >> num2;
    result = selectoperation(num1, num2, c);
    cout << result << endl;
    num1 = result;
    showMenu();
    cin >> choice;
}

int main()
{

    cout << "Simple Console Calculator" << endl;
    cout << "Enter first number" << endl;
    cin >> num1;
    result = num1;
    showMenu();
    cin >> choice;
    bool running = true;
    while (running)
    {
        switch (choice)
        {
        case 1:
            c = '+';
            doafterchoice();
            break;

        case 2:
            c = '-';
            doafterchoice();
            break;

        case 3:
            c = '*';
            doafterchoice();
            break;

        case 4:
            c = '/';
            doafterchoice();
            break;
        case 5:
            num1 = 0;
            num2 = 0;
            main();
            break;

        case 6:
            running = false;
            break;

        default:
            cout << "Please make a choice between 1 and 5 " << endl;
            showMenu();
            cin >> choice;
            break;
        }
    }
    cout << "Your final result is " << result << endl;
    return 0;
}