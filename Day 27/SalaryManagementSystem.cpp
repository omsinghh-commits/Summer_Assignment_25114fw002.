#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Employee {
    int id;
    string empId, name, dept, role;
    double basic, hra, da, sp, pf, pt;
};

vector<Employee> employees;
int nextId = 1;

double gross(const Employee& e) {
    return e.basic + e.hra + e.da + e.sp;
}

double incomeTax(const Employee& e) {
    double annual = gross(e) * 12;
    if (annual > 1500000) return ((annual - 1500000) * 0.30 + 150000) / 12;
    if (annual > 1200000) return ((annual - 1200000) * 0.20 + 90000) / 12;
    if (annual > 1000000) return ((annual - 1000000) * 0.15 + 50000) / 12;
    if (annual > 750000)  return ((annual - 750000)  * 0.10 + 25000) / 12;
    if (annual > 500000)  return ((annual - 500000)  * 0.05) / 12;
    return 0;
}

double netPay(const Employee& e) {
    return gross(e) - e.pf - e.pt - incomeTax(e);
}

void addEmployee() {
    Employee e;
    e.id = nextId++;
    cout << "Employee ID   : "; cin >> e.empId;
    cin.ignore();
    cout << "Name          : "; getline(cin, e.name);
    cout << "Department    : "; getline(cin, e.dept);
    cout << "Designation   : "; getline(cin, e.role);
    cout << "Basic Salary  : "; cin >> e.basic;
    cout << "HRA           : "; cin >> e.hra;
    cout << "DA            : "; cin >> e.da;
    cout << "Special Allow.: "; cin >> e.sp;
    cout << "PF Deduction  : "; cin >> e.pf;
    cout << "Prof. Tax     : "; cin >> e.pt;
    employees.push_back(e);
    cout << fixed << setprecision(2);
    cout << "\nEmployee added! Gross: Rs." << gross(e)
         << "  Net Pay: Rs." << netPay(e) << "\n";
}

void displayAll() {
    if (employees.empty()) { cout << "No records.\n"; return; }
    cout << fixed << setprecision(2);
    cout << "\n" << left << setw(12) << "EmpID"
         << setw(20) << "Name" << setw(14) << "Dept"
         << setw(12) << "Gross" << setw(12) << "Deductions"
         << setw(12) << "Net Pay" << "\n";
    cout << string(82, '-') << "\n";
    for (auto& e : employees) {
        double ded = e.pf + e.pt + incomeTax(e);
        cout << setw(12) << e.empId << setw(20) << e.name
             << setw(14) << e.dept << setw(12) << gross(e)
             << setw(12) << ded << setw(12) << netPay(e) << "\n";
    }
}

void paySlip() {
    string eid;
    cout << "Enter Employee ID: "; cin >> eid;
    for (auto& e : employees) {
        if (e.empId == eid) {
            cout << fixed << setprecision(2);
            cout << "\n======== PAY SLIP ========\n";
            cout << "Name   : " << e.name  << "\nID     : " << e.empId
                 << "\nDept   : " << e.dept << "\nRole   : " << e.role << "\n";
            cout << "----- Earnings ----------\n";
            cout << "Basic Salary    : Rs." << e.basic  << "\n";
            cout << "HRA             : Rs." << e.hra    << "\n";
            cout << "DA              : Rs." << e.da     << "\n";
            cout << "Special Allow.  : Rs." << e.sp     << "\n";
            cout << "Gross Salary    : Rs." << gross(e) << "\n";
            cout << "----- Deductions --------\n";
            cout << "PF Deduction    : Rs." << e.pf            << "\n";
            cout << "Professional Tax: Rs." << e.pt            << "\n";
            cout << "Income Tax(est.): Rs." << incomeTax(e)    << "\n";
            cout << "Total Deductions: Rs." << e.pf+e.pt+incomeTax(e) << "\n";
            cout << "=========================\n";
            cout << "NET PAY         : Rs." << netPay(e) << "\n";
            cout << "=========================\n";
            return;
        }
    }
    cout << "Employee not found.\n";
}

void giveIncrement() {
    string eid; double pct;
    cout << "Employee ID: "; cin >> eid;
    cout << "Increment % : "; cin >> pct;
    for (auto& e : employees) {
        if (e.empId == eid) {
            e.basic *= (1 + pct / 100);
            cout << fixed << setprecision(2);
            cout << "Updated Basic: Rs." << e.basic
                 << "  New Net Pay: Rs." << netPay(e) << "\n";
            return;
        }
    }
    cout << "Not found.\n";
}

void deleteEmployee() {
    string eid; cout << "Employee ID: "; cin >> eid;
    for (auto it = employees.begin(); it != employees.end(); ++it) {
        if (it->empId == eid) { employees.erase(it); cout << "Record deleted.\n"; return; }
    }
    cout << "Not found.\n";
}

int main() {
    int ch;
    do {
        cout << "\n=== Salary Management System ===\n";
        cout << "1. Add Employee    2. Display All\n";
        cout << "3. Pay Slip        4. Give Increment\n";
        cout << "5. Delete Record   0. Exit\nChoice: ";
        cin >> ch;
        if      (ch == 1) addEmployee();
        else if (ch == 2) displayAll();
        else if (ch == 3) paySlip();
        else if (ch == 4) giveIncrement();
        else if (ch == 5) deleteEmployee();
    } while (ch != 0);
    return 0;
}