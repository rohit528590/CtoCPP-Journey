// If the ages of Ram, Shyam, and Ajay are input through the keyboard, write a program to determine,
// the youngest of the three using logical operators and nested if statements.
#include <iostream>
using namespace std;

int main()
{
    cout<< "Welcome to Youngest of Three Ages Program\n";
    int Ram_age, Shyam_age, Ajay_age;

    cout << "Enter Age of Ram : ";
    cin >> Ram_age;

    cout << "Enter Age of Shyam : ";
    cin >> Shyam_age;

    cout << "Enter Age of Ajay : ";
    cin >> Ajay_age;
    
    if (Ram_age == Shyam_age && Shyam_age == Ajay_age && Ram_age == Ajay_age)
    {
        cout << "Age of All Boys are equal : " << Ram_age << endl;
    }

    if (Ram_age <= Shyam_age && Ram_age < Ajay_age)
    {
        if (Ram_age == Shyam_age)
        {
            cout << "Ram and Shyam is Youngest Boy.Whose age is : " << Ram_age << endl;
        }
        else
        {
            cout << "Ram is Youngest Boy.Whose age is : " << Ram_age << endl;
        }
    }

    else if (Shyam_age <= Ajay_age && Shyam_age < Ram_age)
    {
        if (Shyam_age == Ajay_age)
        {
            cout << "Shyam and Ajay is Youngest Boy. Whose age is : " << Shyam_age << endl;
        }
        else
        {
            cout << "Shyam is Youngest Boy.Whose age is : " << Shyam_age << endl;
        }
    }
    
    else
    {
        if (Ajay_age == Ram_age)
        {
            cout << "Ajay and Ram is Youngest Boy.Whose age is : " << Ajay_age << endl;
        }
        else
        {
            cout << "Ajay is Youngest Boy.Whose age is : " << Ajay_age << endl;
        }
    }
    
    return 0;
}