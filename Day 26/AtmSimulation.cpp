#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string correctPin = "1234";
    string enteredPin;
    float balance = 25000.0f;
    int attempts = 0;
    bool loggedIn = false;

    cout << "==============================" << endl;
    cout << "       CLAUDE BANK ATM        " << endl;
    cout << "==============================" << endl;
    // DEMO PIN IS 1234 //

    // PIN verification (max 3 attempts)
    while (attempts < 3) {
        cout << "Enter PIN: ";
        cin >> enteredPin;
        attempts++;

        if (enteredPin == correctPin) {
            loggedIn = true;
            cout << "\nWelcome, Aman! Login successful." << endl;
            break;
        } else {
            cout << "Incorrect PIN. " << (3 - attempts) << " attempt(s) remaining." << endl;
        }
    }

    if (!loggedIn) {
        cout << "\nCard blocked after 3 wrong attempts. Contact your bank." << endl;
        return 0;
    }

    int choice;
    float amount;
    string recipient;

    // ATM main menu loop
    do {
        cout << "\n------------------------------" << endl;
        cout << fixed << setprecision(2);
        cout << "  Balance: Rs. " << balance << endl;
        cout << "------------------------------" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Transfer" << endl;
        cout << "4. Check Balance" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter deposit amount: Rs. ";
            cin >> amount;
            if (amount <= 0) {
                cout << "Invalid amount." << endl;
            } else if (amount > 200000) {
                cout << "Max single deposit is Rs. 2,00,000." << endl;
            } else {
                balance += amount;
                cout << "Rs. " << amount << " deposited. New balance: Rs. " << balance << endl;
            }

        } else if (choice == 2) {
            cout << "Enter withdrawal amount: Rs. ";
            cin >> amount;
            if (amount <= 0) {
                cout << "Invalid amount." << endl;
            } else if ((int)amount % 100 != 0) {
                cout << "Amount must be in multiples of Rs. 100." << endl;
            } else if (amount > 50000) {
                cout << "Max single withdrawal is Rs. 50,000." << endl;
            } else if (amount > balance) {
                cout << "Insufficient balance." << endl;
            } else {
                balance -= amount;
                cout << "Rs. " << amount << " dispensed. New balance: Rs. " << balance << endl;
            }

        } else if (choice == 3) {
            cout << "Enter recipient name: ";
            cin >> recipient;
            cout << "Enter transfer amount: Rs. ";
            cin >> amount;
            if (amount <= 0) {
                cout << "Invalid amount." << endl;
            } else if (amount > 100000) {
                cout << "Max transfer is Rs. 1,00,000." << endl;
            } else if (amount > balance) {
                cout << "Insufficient balance." << endl;
            } else {
                balance -= amount;
                cout << "Rs. " << amount << " transferred to " << recipient << "." << endl;
                cout << "New balance: Rs. " << balance << endl;
            }

        } else if (choice == 4) {
            cout << "Current balance: Rs. " << balance << endl;

        } else if (choice == 5) {
            cout << "\nThank you for using Claude Bank ATM. Goodbye!" << endl;

        } else {
            cout << "Invalid option. Try again." << endl;
        }

    } while (choice != 5);

    return 0;
}