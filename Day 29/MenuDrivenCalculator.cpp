#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b, result;

    do {
        cout << "\n===== MENU-DRIVEN CALCULATOR =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus (integers)\n";
        cout << "6. Power\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting calculator. Goodbye!\n";
            break;
        }

        if (choice < 1 || choice > 6) {
            cout << "Invalid choice! Try again.\n";
            continue;
        }

        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch (choice) {
            case 1:
                result = a + b;
                cout << "Result: " << a << " + " << b << " = " << result << "\n";
                break;
            case 2:
                result = a - b;
                cout << "Result: " << a << " - " << b << " = " << result << "\n";
                break;
            case 3:
                result = a * b;
                cout << "Result: " << a << " * " << b << " = " << result << "\n";
                break;
            case 4:
                if (b == 0) {
                    cout << "Error: Division by zero!\n";
                } else {
                    result = a / b;
                    cout << "Result: " << a << " / " << b << " = " << result << "\n";
                }
                break;
            case 5:
                if ((int)b == 0) {
                    cout << "Error: Modulus by zero!\n";
                } else {
                    cout << "Result: " << (int)a << " % " << (int)b << " = " << (int)a % (int)b << "\n";
                }
                break;
            case 6:
                result = 1;
                for (int i = 0; i < (int)b; i++) result *= a;
                cout << "Result: " << a << " ^ " << (int)b << " = " << result << "\n";
                break;
        }

    } while (true);

    return 0;
}