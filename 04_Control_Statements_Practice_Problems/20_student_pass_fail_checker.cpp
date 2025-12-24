// Program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject.
// Assume there are three subjects with a maximum of 100 marks in each subject. Take the marks as input from the user.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Student Pass/Fail Checker\n";
    float Phy_marks, Math_marks, Che_marks;

    cout << "Enter your Physics marks (out of 100) : ";
    cin >> Phy_marks;

    cout << "Enter your Maths marks (out of 100) : ";
    cin >> Math_marks;

    cout << "Enter your Chemistry marks (out of 100) : ";
    cin >> Che_marks;

    if (Phy_marks < 33 || Che_marks < 33 || Math_marks < 33)
    {
        cout << "You are fail due to less marks in individual subject.\n";
    }
    
    else if (((Phy_marks + Math_marks + Che_marks) / 300.0) * 100 < 40.0)
    {
        cout << "You are fail due to less percentage.\n";
    }
    
    else
    {
        cout << "You Pass.\n";
    }

    return 0;
}