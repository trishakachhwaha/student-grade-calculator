
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int subjects = 5;
    int marks[subjects];
    int total = 0;
    bool passed = true;

    cout << "=== Student Grade Calculator ===\n";

    for (int i = 0; i < subjects; i++) {
        cout << "Enter marks for subject "
             << i + 1 << " (0-100): ";
        cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks! Please enter 0-100.\n";
            return 1;
        }

        total += marks[i];

        if (marks[i] < 35) {
            passed = false;
        }
    }

    double percentage = total / 5.0;

    cout << fixed << setprecision(2);
    cout << "\nTotal Marks: " << total << "/500\n";
    cout << "Percentage: " << percentage << "%\n";

    if (!passed) {
        cout << "Result: FAIL\n";
        cout << "Grade: F\n";
    } else {
        cout << "Result: PASS\n";

        if (percentage >= 90)
            cout << "Grade: A+\n";
        else if (percentage >= 80)
            cout << "Grade: A\n";
        else if (percentage >= 70)
            cout << "Grade: B\n";
        else if (percentage >= 60)
            cout << "Grade: C\n";
        else if (percentage >= 50)
            cout << "Grade: D\n";
        else
            cout << "Grade: E\n";
    }

    return 0;
}
