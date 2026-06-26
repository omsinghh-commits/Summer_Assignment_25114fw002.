#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int MAX = 100;

    int roll[MAX], marks[MAX];
    string name[MAX];

    int n = 0;
    int choice;

    do
    {
        cout << "\n===== STUDENT RECORD SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                if(n == MAX)
                {
                    cout << "Record Full!";
                    break;
                }

                cout << "Enter Roll No: ";
                cin >> roll[n];

                cin.ignore();

                cout << "Enter Name: ";
                getline(cin, name[n]);

                cout << "Enter Marks: ";
                cin >> marks[n];

                n++;
                cout << "Student Added Successfully!";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Records Found!";
                }
                else
                {
                    cout << "\nRoll\tName\tMarks\n";
                    for(int i = 0; i < n; i++)
                    {
                        cout << roll[i] << "\t"
                             << name[i] << "\t"
                             << marks[i] << endl;
                    }
                }
                break;

            case 3:
            {
                int r, found = 0;

                cout << "Enter Roll No to Search: ";
                cin >> r;

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == r)
                    {
                        cout << "\nRecord Found";
                        cout << "\nRoll No : " << roll[i];
                        cout << "\nName    : " << name[i];
                        cout << "\nMarks   : " << marks[i];
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "Student Not Found!";
                break;
            }

            case 4:
            {
                int r, found = 0;

                cout << "Enter Roll No to Update: ";
                cin >> r;

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == r)
                    {
                        cin.ignore();

                        cout << "Enter New Name: ";
                        getline(cin, name[i]);

                        cout << "Enter New Marks: ";
                        cin >> marks[i];

                        cout << "Record Updated!";
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "Student Not Found!";
                break;
            }

            case 5:
            {
                int r, found = 0;

                cout << "Enter Roll No to Delete: ";
                cin >> r;

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == r)
                    {
                        for(int j = i; j < n - 1; j++)
                        {
                            roll[j] = roll[j + 1];
                            name[j] = name[j + 1];
                            marks[j] = marks[j + 1];
                        }

                        n--;
                        found = 1;
                        cout << "Record Deleted!";
                        break;
                    }
                }

                if(found == 0)
                    cout << "Student Not Found!";
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