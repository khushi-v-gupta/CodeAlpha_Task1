#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numCourses;
    double grade, credit;
    double totalCredits = 0, totalGradePoints = 0;

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    cout << "\nEnter details for each course:\n";
    cout << "---------------------------------\n";

    for (int i = 1; i <= numCourses; i++) {
        cout << "Course " << i << ":\n";
        cout << "Enter grade (0-10): ";
        cin >> grade;
        cout << "Enter credit hours: ";
        cin >> credit;

        double gradePoints = grade * credit;
        totalGradePoints += gradePoints;
        totalCredits += credit;

        cout << fixed << setprecision(2);
        cout << "Grade Points for Course " << i << ": " << gradePoints << "\n\n";
    }

    double cgpa = 0;
    if (totalCredits > 0)
        cgpa = totalGradePoints / totalCredits;

    cout << "---------------------------------\n";
    cout << fixed << setprecision(2);
    cout << "Total Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Final CGPA: " << cgpa << endl;
    cout << "---------------------------------\n";

    return 0;
}