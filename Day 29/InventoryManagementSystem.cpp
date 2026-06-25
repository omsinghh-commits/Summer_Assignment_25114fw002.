#include <iostream>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
};

int main() {
    Item item[100];
    int n = 0, choice, searchId;

    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Item ID: ";
                cin >> item[n].id;
                cout << "Enter Item Name: ";
                cin >> item[n].name;
                cout << "Enter Quantity: ";
                cin >> item[n].quantity;
                n++;
                cout << "Item Added Successfully!\n";
                break;

            case 2:
                cout << "\nID\tName\tQuantity\n";
                for(int i = 0; i < n; i++) {
                    cout << item[i].id << "\t"
                         << item[i].name << "\t"
                         << item[i].quantity << endl;
                }
                break;

            case 3:
                cout << "Enter Item ID to Search: ";
                cin >> searchId;

                for(int i = 0; i < n; i++) {
                    if(item[i].id == searchId) {
                        cout << "Item Found!\n";
                        cout << "ID: " << item[i].id << endl;
                        cout << "Name: " << item[i].name << endl;
                        cout << "Quantity: " << item[i].quantity << endl;
                        break;
                    }
                    if(i == n - 1)
                        cout << "Item Not Found!\n";
                }
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}