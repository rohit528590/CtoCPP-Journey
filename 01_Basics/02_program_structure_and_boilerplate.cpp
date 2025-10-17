/*
Author: Rohit Kumar
Purpose: Understanding the essential structure of every C++ program
*/

// HEADER FILES - Library inclusions
#include <iostream> // Standard Input/Output library for cout(), cin()
using namespace std;

// #include <math.h>    // Math library (example - not used here)

// MAIN FUNCTION - Program execution starts here
int main()
{
    /*
    PROGRAM STRUCTURE BREAKDOWN:

    1. PREPROCESSOR DIRECTIVES (#include)
       - Tell compiler which libraries to include
       - Must appear at the top of the file
       - iostream provides input/output functions

    2. MAIN FUNCTION (int main())
       - Every C++ program MUST have exactly one main function
       - Program execution begins and ends here
       - 'int' means main returns an integer value

    3. FUNCTION BODY ({ })
       - All executable code goes between these braces
       - This is where you write your program logic

    4. RETURN STATEMENT (return 0;)
       - Indicates program finished successfully
       - 0 = success, non-zero = error occurred
    */

    cout << "This is the basic structure of a C++ program.\n";
    cout << "Every program follows this same pattern!\n";

    return 0; // Program executed successfully
}

/*
ESSENTIAL COMPONENTS SUMMARY:
├── Preprocessor Directives (#include)
├── Main Function Declaration (int main())
├── Opening Brace ({)
├── Program Logic (your code here)
├── Return Statement (return 0;)
└── Closing Brace (})
*/