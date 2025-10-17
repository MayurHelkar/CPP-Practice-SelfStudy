/*
Pointers - store the memory address of another variable 
References - create an alias for an already existing variable.
*/
#include <iostream>

using namespace std;

// Double-Precision floating point Variable 
double Double = 68.3452;

// Double-Precision floating point Pointer variables - Declare and Defined
double *doublePtr_Declare;
double *doublePtr_Define = &Double;
/*
doublePtr_Declare = &double;    // error: redefinition of 'int* intPtr_Declare'
                            // note: 'int* intPtr_Declare' previously declared here
*/

// Double-Precision floating point Reference Variables
// flloat &doubleRef_Declare;   // error: 'int_Reference_Declare' declared as reference but not initialized
// doubleRef_Declare = int;  // error: 'int_Reference_Declare' does not name a type
double &doubleRef_Define = Double;

int main()
{
    cout << "double : " << Double << " and ";
    cout << "&double : " << Double << endl;

    cout << endl;

//    cout << *doublePtr_Declare << "\t\t\t";   // Exception has occurred. Segmentation fault
    cout  << "doublePtr_Declare : " << doublePtr_Declare << " and ";
    cout << "&doublePtr_Declare : " << &doublePtr_Declare << endl;
    cout << "*doublePtr_Define : " << *doublePtr_Define << ", ";
    cout << "doublePtr_Define : " << doublePtr_Define << " and ";
    cout << "&doublePtr_Define : " << &doublePtr_Define << endl;

    cout << endl;

    cout << "doubleRef_Define : " << doubleRef_Define << " and ";
    cout << "&doubleRef_Define : " << &doubleRef_Define << endl;

    return 0;
}