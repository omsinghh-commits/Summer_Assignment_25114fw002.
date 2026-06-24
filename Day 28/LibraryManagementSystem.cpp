#include <iostream>
#include <vector>
using namespace std;

class Book {
public:
    int id;
    string title;
    bool issued;

    Book(int i, string t) {
        id = i;
        title = t;
        issued = false;
    }
};

int main() {
    vector<Book> books;
    int choice, id;
    string title;

    do {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {
        case 1:
            cout << "Enter Book ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Book Title: ";
            getline(cin, title);

            books.push_back(Book(id, title));
            cout << "Book Added Successfully!\n";
            break;

        case 2:
            cout << "\nBooks List:\n";
            for(auto b : books) {
                cout << "ID: " << b.id
                     << " | Title: " << b.title
                     << " | Status: "
                     << (b.issued ? "Issued" : "Available")
                     << endl;
            }
            break;

        case 3:
            cout << "Enter Book ID to Issue: ";
            cin >> id;

            for(auto &b : books) {
                if(b.id == id && !b.issued) {
                    b.issued = true;
                    cout << "Book Issued Successfully!\n";
                    break;
                }
            }
            break;

        case 4:
            cout << "Enter Book ID to Return: ";
            cin >> id;

            for(auto &b : books) {
                if(b.id == id && b.issued) {
                    b.issued = false;
                    cout << "Book Returned Successfully!\n";
                    break;
                }
            }
            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}