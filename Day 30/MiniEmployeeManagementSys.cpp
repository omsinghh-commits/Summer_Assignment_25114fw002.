#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int MAX = 100;

    int empId[MAX];
    string name[MAX], department[MAX];
    float salary[MAX];

    int n = 0, choice;

    do
    {
        cout << "\n===== EMPLOYEE MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Employee";
        cout << "\n5. Delete Employee";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                if(n == MAX)
                {
                    cout << "Employee Record Full!";
                    break;
                }

                cout << "Enter Employee ID: ";
                cin >> empId[n];

                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, name[n]);

                cout << "Enter Department: ";
                getline(cin, department[n]);

                cout << "Enter Salary: ";
                cin >> salary[n];

                n++;

                cout << "Employee Added Successfully!";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Employee Records Found!";
                }
                else
                {
                    cout << "\nID\tName\t\tDepartment\tSalary\n";
                    for(int i = 0; i < n; i++)
                    {
                        cout << empId[i] << "\t"
                             << name[i] << "\t\t"
                             << department[i] << "\t\t"
                             << salary[i] << endl;
                    }
                }
                break;

            case 3:
            {
                int id, found = 0;

                cout << "Enter Employee ID to Search: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(empId[i] == id)
                    {
                        cout << "\nEmployee Found";
                        cout << "\nID: " << empId[i];
                        cout << "\nName: " << name[i];
                        cout << "\nDepartment: " << department[i];
                        cout << "\nSalary: " << salary[i];
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "Employee Not Found!";
                break;
            }

            case 4:
            {
                int id, found = 0;

                cout << "Enter Employee ID to Update: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(empId[i] == id)
                    {
                        cin.ignore();

                        cout << "Enter New Name: ";
                        getline(cin, name[i]);

                        cout << "Enter New Department: ";
                        getline(cin, department[i]);

                        cout << "Enter New Salary: ";
                        cin >> salary[i];

                        cout << "Employee Record Updated!";
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "Employee Not Found!";
                break;
            }

            case 5:
            {
                int id, found = 0;

                cout << "Enter Employee ID to Delete: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(empId[i] == id)
                    {
                        for(int j = i; j < n - 1; j++)
                        {
                            empId[j] = empId[j + 1];
                            name[j] = name[j + 1];
                            department[j] = department[j + 1];
                            salary[j] = salary[j + 1];
                        }

                        n--;
                        cout << "Employee Deleted Successfully!";
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "Employee Not Found!";
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