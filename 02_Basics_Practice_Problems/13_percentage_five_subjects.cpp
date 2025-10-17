// Program to calculate the percentage for 5 subjects, considering marks out of 100 for each subject.
// Formula : Percentage = (Total Marks / Maximum Marks) * 100
#include <iostream>
using namespace std;

int main()
{
    float Mat_marks, Phy_marks, Che_marks, Engl_marks, Com_marks;

    cout << "Enter your Marks of Maths : ";
    cin >> Mat_marks;

    cout << "Enter your Marks of Physics : ";
    cin >> Phy_marks;

    cout << "Enter your Marks of Chemistry : ";
    cin >> Che_marks;

    cout << "Enter your Marks of English : ";
    cin >> Engl_marks;

    cout << "Enter your Marks of Computer : ";
    cin >> Com_marks;

    float total_marks = Mat_marks + Phy_marks + Che_marks + Engl_marks + Com_marks;
    float Maximum_marks = 5 * 100.0;

    float percentage = (total_marks / Maximum_marks) * 100;
    cout << "Your Score is : " << percentage << "%\n";

    return 0;
}