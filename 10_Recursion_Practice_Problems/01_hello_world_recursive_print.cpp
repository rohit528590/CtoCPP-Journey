// Recursive function to print "Hello World" a given number of times.
#include <iostream>
using namespace std;

void print_hello_world(int count)
{
    if (count == 0)
    {
        return;
    }

    cout << "Hello World\n";
    print_hello_world(count - 1);
}

int main()
{
    int repetitions;

    cout << "Enter how many times you want to print 'Hello World' : ";
    cin >> repetitions;

    print_hello_world(repetitions);

    return 0;
}