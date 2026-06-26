#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int MAX = 100;

    int bookId[MAX];
    string title[MAX];
    bool issued[MAX];

    int n = 0, choice;

    do
    {
        cout << "\n===== MINI LIBRARY SYSTEM =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                if(n == MAX)
                {
                    cout << "Library Full!";
                    break;
                }

                cout << "Enter Book ID: ";
                cin >> bookId[n];

                cin.ignore();

                cout << "Enter Book Title: ";
                getline(cin, title[n]);

                issued[n] = false;
                n++;

                cout << "Book Added Successfully!";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Books Available!";
                }
                else
                {
                    cout << "\nID\tTitle\t\tStatus\n";
                    for(int i = 0; i < n; i++)
                    {
                        cout << bookId[i] << "\t"
                             << title[i] << "\t\t"
                             << (issued[i] ? "Issued" : "Available")
                             << endl;
                    }
                }
                break;

            case 3:
            {
                int id, found = 0;

                cout << "Enter Book ID: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(bookId[i] == id)
                    {
                        cout << "\nBook Found";
                        cout << "\nID : " << bookId[i];
                        cout << "\nTitle : " << title[i];
                        cout << "\nStatus : "
                             << (issued[i] ? "Issued" : "Available");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "Book Not Found!";
                break;
            }

            case 4:
            {
                int id, found = 0;

                cout << "Enter Book ID to Issue: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(bookId[i] == id)
                    {
                        found = 1;

                        if(issued[i])
                            cout << "Book Already Issued!";
                        else
                        {
                            issued[i] = true;
                            cout << "Book Issued Successfully!";
                        }
                        break;
                    }
                }

                if(found == 0)
                    cout << "Book Not Found!";
                break;
            }

            case 5:
            {
                int id, found = 0;

                cout << "Enter Book ID to Return: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(bookId[i] == id)
                    {
                        found = 1;

                        if(!issued[i])
                            cout << "Book is Already Available!";
                        else
                        {
                            issued[i] = false;
                            cout << "Book Returned Successfully!";
                        }
                        break;
                    }
                }

                if(found == 0)
                    cout << "Book Not Found!";
                break;
            }

            case 6:
                cout << "Exiting Program...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 6);

    return 0;
}