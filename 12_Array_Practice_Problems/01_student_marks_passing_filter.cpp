// Program that accepts marks for multiple students and prints the roll numbers of students, 
// who scored below the passing mark (e.g., 35).
#include <iostream>
using namespace std;

#define PASS_MARK 35 // Define a named constant for clarity

int main()
{
    int num_students;

    cout << "Enter number of students : ";
    cin >> num_students;

    int marks[num_students];
    cout << "Enter marks of all " << num_students << " students -:\n";

    for (int i = 0; i < num_students; i++)
    {
        cin >> marks[i];
    }

    cout << "\nStudents who scored less than " << PASS_MARK << " according to 0 Based Indexing -:\n";

    for (int i = 0; i < num_students; i++)
    {
        if (marks[i] < PASS_MARK) cout << "Roll Number : " << i << "\n";
    }

    return 0;
}