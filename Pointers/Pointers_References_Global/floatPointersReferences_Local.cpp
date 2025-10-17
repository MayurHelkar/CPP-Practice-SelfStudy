/*
Pointers - store the memory address of another variable 
References - create an alias for an already existing variable.
*/
#include <iostream>

using namespace std;

int main()
{
    // Floating Point Single-Precision Variable 
    float Float = 68.3452;

    // Floating Point Single-Precision Pointer variables - Declare and Defined
    float *floatPtr_Declare;
    float *floatPtr_Define = &Float;
    /*
    floatPtr_Declare = &Float;    // error: redefinition of 'int* intPtr_Declare'
                                // note: 'int* intPtr_Declare' previously declared here
    */

    // Floating Point Single-Precision Reference Variables
    // flloat &floatRef_Declare;   // error: 'int_Reference_Declare' declared as reference but not initialized
    // floatRef_Declare = int;  // error: 'int_Reference_Declare' does not name a type
    float &floatRef_Define = Float;
    
    cout << "float : " << Float << " and ";
    cout << "&float : " << &Float << endl;

    cout << endl;

//    cout << *floatPtr_Declare << "\t\t\t";   // Exception has occurred. Segmentation fault
    cout  << "floatPtr_Declare : " << floatPtr_Declare << " and ";
    cout << "&floatPtr_Declare : " << &floatPtr_Declare << endl;
    cout << "*floatPtr_Define : " << *floatPtr_Define << ", ";
    cout << "floatPtr_Define : " << floatPtr_Define << " and ";
    cout << "&floatPtr_Define : " << &floatPtr_Define << endl;

    cout << endl;

    cout << "floatRef_Define : " << floatRef_Define << " and ";
    cout << "&floatRef_Define : " << &floatRef_Define << endl;

    return 0;
}