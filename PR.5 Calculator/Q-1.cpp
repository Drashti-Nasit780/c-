//Question:-1
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float div(int a, int b) {
    if (b != 0)
        return (float)a / b;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

int mod(int a, int b) {
    if (b != 0)
        return a % b;
    else {
        cout << "Error: Modulus by zero!" << endl;
        return 0;
    }
}

int main() {
    int choice;
    int num1, num2;

    do {
        cout << "\n===== Calculator Menu =====" << endl;
        cout << " 1 : Addition" << endl;
        cout << " 2 : Subtraction" << endl;
        cout << " 3 : Multiplication" << endl;
        cout << " 4 : Division" << endl;
        cout << " 5 : Modulus" << endl;
        cout << " 6 : Quit" << endl<<endl;
        cout << "Output:-" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice) {
            case '1':
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case '2':
                cout << "Result: " << sub(num1, num2) << endl;
                break;
            case '3':
                cout << "Result: " << mul(num1, num2) << endl;
                break;
            case '4':
                cout << "Result: " << div(num1, num2) << endl;
                break;
            case '5':
                cout << "Result: " << mod(num1, num2) << endl;
                break;
            default:
                if (choice == '6' || choice == 'Q') {
            cout << "Exiting program..." << endl;
            }
        }

    } while (choice!=0);
         return 0;
}

