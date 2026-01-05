#include <iostream>
using namespace std;
#define sp " "
#define nl "\n"

double getGradePoint(double marks) {
    if (marks >= 80) return 4.00;
    else if (marks >= 75) return 3.75;
    else if (marks >= 70) return 3.50;
    else if (marks >= 65) return 3.25;
    else if (marks >= 60) return 3.00;
    else if (marks >= 55) return 2.75;
    else if (marks >= 50) return 2.50;
    else if (marks >= 45) return 2.25;
    else if (marks >= 40) return 2.00;
    else return 0.00; 
}

int main() {
    double marks, totalPoints = 0.0, totalCredits = 0.0;

    string subjects[] = {
        "Software Development III",
        "Computer Networks",
        "Computer Networks Lab",
        "Software Engineering",
        "Software Engineering Lab",
        "AI & Expert System",
        "AI & Expert System Lab",
        "Project Management & Ethics",
        "Distributed DBMS",
        "Distributed DBMS Lab"
    };

    double credits[] = {
        0.75, 3.0, 1.5, 3.0, 0.75,
        3.0, 1.5, 2.0, 3.0, 1.5
    };

    int n = 10;

    for (int i = 0; i < n; i++) {
        cout << "Enter marks (0-100) for " << subjects[i] << ": ";
        cin >> marks;

        double gp = getGradePoint(marks);
        totalPoints += gp * credits[i];
        totalCredits += credits[i];
    }

    double sgpa = totalPoints / totalCredits;

    cout << nl << "Total Credits: " << totalCredits << nl;
    cout << "SGPA: " << sgpa << nl;

    return 0;
}
