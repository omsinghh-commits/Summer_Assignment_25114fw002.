#include <iostream>
using namespace std;

class Contact {
public:
    string name;
    string phone;
};

int main() {
    Contact contacts[100];
    int count = 0, choice;

    do {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Contact\n";
        cout << "2. View Contacts\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Name: ";
                cin >> contacts[count].name;

                cout << "Enter Phone Number: ";
                cin >> contacts[count].phone;

                count++;
                cout << "Contact Added Successfully!\n";
                break;

            case 2:
                cout << "\n--- Contact List ---\n";
                for(int i = 0; i < count; i++) {
                    cout << "Name: " << contacts[i].name
                         << " | Phone: " << contacts[i].phone << endl;
                }
                break;

            case 3:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 3);

    return 0;
}