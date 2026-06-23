#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Employee {
    int id;
    string empId, name, dept, role, status;
    double salary;
};

vector<Employee> employees;
int nextId = 1;

void addEmployee() {
    Employee e;
    e.id = nextId++;
    cout << "Employee ID: "; cin >> e.empId;
    cin.ignore();
    cout << "Name: "; getline(cin, e.name);
    cout << "Department: "; getline(cin, e.dept);
    cout << "Role: "; getline(cin, e.role);
    cout << "Salary: "; cin >> e.salary;
    cin.ignore();
    cout << "Status (Active/On Leave/Inactive): "; getline(cin, e.status);
    employees.push_back(e);
    cout << "Employee added with ID: " << e.empId << "\n";
}

void displayAll() {
    if (employees.empty()) { cout << "No records found.\n"; return; }
    cout << "\n--- All Employees ---\n";
    for (auto& e : employees)
        cout << e.empId << " | " << e.name << " | " << e.dept
             << " | " << e.role << " | Rs." << e.salary
             << " | " << e.status << "\n";
}

void searchEmployee() {
    string eid;
    cout << "Enter Employee ID to search: "; cin >> eid;
    for (auto& e : employees) {
        if (e.empId == eid) {
            cout << "Name: " << e.name << "\nDept: " << e.dept
                 << "\nRole: " << e.role << "\nSalary: Rs." << e.salary
                 << "\nStatus: " << e.status << "\n";
            return;
        }
    }
    cout << "Employee not found.\n";
}

void updateEmployee() {
    string eid;
    cout << "Enter Employee ID to update: "; cin >> eid;
    for (auto& e : employees) {
        if (e.empId == eid) {
            cout << "New Salary (current: " << e.salary << "): ";
            cin >> e.salary;
            cin.ignore();
            cout << "New Department (current: " << e.dept << "): ";
            getline(cin, e.dept);
            cout << "New Status (Active/On Leave/Inactive): ";
            getline(cin, e.status);
            cout << "Record updated.\n";
            return;
        }
    }
    cout << "Employee not found.\n";
}

void deleteEmployee() {
    string eid;
    cout << "Enter Employee ID to delete: "; cin >> eid;
    for (auto it = employees.begin(); it != employees.end(); ++it) {
        if (it->empId == eid) {
            employees.erase(it);
            cout << "Employee removed.\n";
            return;
        }
    }
    cout << "Employee not found.\n";
}

void searchByDept() {
    string dept;
    cin.ignore();
    cout << "Enter Department: "; getline(cin, dept);
    bool found = false;
    for (auto& e : employees) {
        if (e.dept == dept) {
            cout << e.empId << " | " << e.name << " | " << e.role
                 << " | Rs." << e.salary << "\n";
            found = true;
        }
    }
    if (!found) cout << "No employees in that department.\n";
}

int main() {
    int ch;
    do {
        cout << "\n=== Employee Management System ===\n";
        cout << "1. Add    2. Display All    3. Search by ID\n";
        cout << "4. Update 5. Delete         6. Search by Dept\n";
        cout << "0. Exit\nChoice: ";
        cin >> ch;
        if      (ch == 1) addEmployee();
        else if (ch == 2) displayAll();
        else if (ch == 3) searchEmployee();
        else if (ch == 4) updateEmployee();
        else if (ch == 5) deleteEmployee();
        else if (ch == 6) searchByDept();
    } while (ch != 0);
    return 0;
}