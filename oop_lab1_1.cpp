#include <iostream>
#include <string> 
using namespace std;

int main() {
    string rollNumber;
    double marks[5];
    double totalMarks = 0;
    double maxMarksPerSubject = 100.0; // Assuming each subject is of 100 marks
    double totalMaxMarks = 5 * maxMarksPerSubject;
    double percentage;

    cout << "Enter your Roll Number: ";
    cin >> rollNumber;

    cout << "Enter marks obtained in 5 subjects:\n";
    for (int i = 0; i < 5; i++) 
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        totalMarks += marks[i];
    }
    percentage = (totalMarks / totalMaxMarks) * 100;

    cout << "Roll Number: " << rollNumber << endl;
    cout << "Total Marks Obtained: " << totalMarks << " / " << totalMaxMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    return 0;
}



