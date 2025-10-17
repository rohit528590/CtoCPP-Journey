// Program that declares one variable of each of the fundamental data types (int, float, double, char)
// and prints their size using sizeof() operator.
#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to World of Data Types\n";
    int integer;
    float decimal;
    double doub;
    char character;
    
    cout << "Size of 'int' is : " << sizeof(integer) << " bytes" << endl;
    cout << "Size of 'float' is : " << sizeof(decimal) << " bytes" << endl;
    cout << "Size of 'double' is : " << sizeof(doub) << " bytes" << endl;
    cout << "Size of 'char' is : " << sizeof(character) << " byte" << endl;
    return 0;
}