#include <iostream>
#include <string>
using namespace std;

struct Question {
    string text;
    string options[4];
    int answer;       // 0-indexed correct option
    string category;
};

int main() {
    const int TOTAL = 5;

    Question quiz[TOTAL] = {
        {
            "Which header is needed to use cout?",
            {"<stdio.h>", "<iostream>", "<conio.h>", "<stdlib.h>"},
            1, "C++ Basics"
        },
        {
            "What is the index of the first element of an array?",
            {"1", "0", "-1", "Depends"},
            1, "Arrays"
        },
        {
            "Which loop runs at least once?",
            {"for", "while", "do-while", "None"},
            2, "Loops"
        },
        {
            "Which operator gives the address of a variable?",
            {"*", "&", "->", "#"},
            1, "Pointers"
        },
        {
            "What is the time complexity of binary search?",
            {"O(n)", "O(n^2)", "O(log n)", "O(1)"},
            2, "Algorithms"
        }
    };

    int score = 0, correct = 0, wrong = 0, skipped = 0;
    int userAnswers[TOTAL];

    cout << "=============================\n";
    cout << "    C++ PROGRAMMING QUIZ     \n";
    cout << "=============================\n";
    cout << "Total questions : " << TOTAL << "\n";
    cout << "Enter 1-4 for options, 0 to skip\n";
    cout << "-----------------------------\n\n";

    for (int i = 0; i < TOTAL; i++) {
        cout << "Q" << (i + 1) << " [" << quiz[i].category << "]: "
             << quiz[i].text << endl;

        for (int j = 0; j < 4; j++) {
            cout << "  " << (j + 1) << ". " << quiz[i].options[j] << endl;
        }

        int choice;
        cout << "Your answer (0 to skip): ";
        cin >> choice;

        if (choice == 0) {
            cout << "Skipped! Correct: " << (quiz[i].answer + 1)
                 << ". " << quiz[i].options[quiz[i].answer] << "\n\n";
            userAnswers[i] = -1;
            skipped++;
        } else if (choice < 1 || choice > 4) {
            cout << "Invalid input. Marked as skipped.\n\n";
            userAnswers[i] = -1;
            skipped++;
        } else {
            userAnswers[i] = choice - 1;
            if (choice - 1 == quiz[i].answer) {
                cout << "Correct!\n\n";
                score++;
                correct++;
            } else {
                cout << "Wrong! Correct answer: " << (quiz[i].answer + 1)
                     << ". " << quiz[i].options[quiz[i].answer] << "\n\n";
                wrong++;
            }
        }
    }

    // Result summary
    cout << "=============================\n";
    cout << "         QUIZ RESULTS        \n";
    cout << "=============================\n";
    cout << "Score   : " << score << " / " << TOTAL << "\n";
    cout << "Correct : " << correct << "\n";
    cout << "Wrong   : " << wrong   << "\n";
    cout << "Skipped : " << skipped << "\n";

    int pct = (score * 100) / TOTAL;
    if      (pct >= 90) cout << "Grade: Excellent!\n";
    else if (pct >= 70) cout << "Grade: Good job!\n";
    else if (pct >= 50) cout << "Grade: Not bad, keep going!\n";
    else                cout << "Grade: Keep practising!\n";

    // Answer review
    cout << "\n--- Answer Review ---\n";
    for (int i = 0; i < TOTAL; i++) {
        cout << "Q" << (i + 1) << ": " << quiz[i].text << "\n";
        if (userAnswers[i] == -1)
            cout << "  Your answer : Skipped\n";
        else
            cout << "  Your answer : " << quiz[i].options[userAnswers[i]] << "\n";
        cout << "  Correct     : " << quiz[i].options[quiz[i].answer] << "\n\n";
    }

    return 0;
}