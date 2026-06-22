#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age, citizen, criminal, registered, mental;

    cout << "=== Voting Eligibility System ===" << endl;
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nCitizenship status:" << endl;
    cout << "1. Citizen" << endl;
    cout << "2. Permanent Resident" << endl;
    cout << "3. Visa Holder" << endl;
    cout << "4. Undocumented" << endl;
    cout << "Enter choice: ";
    cin >> citizen;

    cout << "\nCriminal record:" << endl;
    cout << "1. None" << endl;
    cout << "2. Minor offence (no imprisonment)" << endl;
    cout << "3. Currently serving sentence" << endl;
    cout << "4. Completed sentence" << endl;
    cout << "Enter choice: ";
    cin >> criminal;

    cout << "\nAre you registered to vote?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter choice: ";
    cin >> registered;

    cout << "\nMental competency:" << endl;
    cout << "1. Competent" << endl;
    cout << "2. Under legal guardianship" << endl;
    cout << "Enter choice: ";
    cin >> mental;

    cout << "\n--- Eligibility Report for " << name << " ---" << endl;

    bool eligible = true;

    // Check 1: Age
    if (age >= 18) {
        cout << "[PASS] Age: " << age << " (18+ required)" << endl;
    } else {
        cout << "[FAIL] Age: " << age << " (Must be 18 or older)" << endl;
        eligible = false;
    }

    // Check 2: Citizenship
    if (citizen == 1) {
        cout << "[PASS] Citizenship: Citizen" << endl;
    } else {
        cout << "[FAIL] Citizenship: Must be a citizen to vote" << endl;
        eligible = false;
    }

    // Check 3: Criminal record
    if (criminal != 3) {
        cout << "[PASS] Criminal record: No active sentence" << endl;
    } else {
        cout << "[FAIL] Criminal record: Currently serving a sentence" << endl;
        eligible = false;
    }

    // Check 4: Voter registration
    if (registered == 1) {
        cout << "[PASS] Registration: Registered to vote" << endl;
    } else {
        cout << "[FAIL] Registration: Must register before voting" << endl;
        eligible = false;
    }

    // Check 5: Mental competency
    if (mental == 1) {
        cout << "[PASS] Mental competency: Declared competent" << endl;
    } else {
        cout << "[FAIL] Mental competency: Under legal guardianship" << endl;
        eligible = false;
    }

    cout << "\n=================================" << endl;
    if (eligible) {
        cout << "RESULT: " << name << " is ELIGIBLE to vote!" << endl;
    } else {
        cout << "RESULT: " << name << " is NOT ELIGIBLE to vote." << endl;
    }
    cout << "=================================" << endl;

    return 0;
}