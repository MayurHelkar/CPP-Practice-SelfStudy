/*
Pointers - store the memory address of another variable 
References - create an alias for an already existing variable.
*/
#include <iostream>

using namespace std;

// Integer Variable 
int Int = 6832;

// Integer Pointer variables - Declare and Defined
int *intPtr_Declare;
/*
intPtr_Declare = &int;    // error: redefinition of 'int* intPtr_Declare'
                            // note: 'int* intPtr_Declare' previously declared here
*/
int *intPtr_Define = &Int;

// Integer Reference Variables
// int &intRef_Declare;   // error: 'int_Reference_Declare' declared as reference but not initialized
//  intRef_Declare = int;  // error: 'int_Reference_Declare' does not name a type
int &intRef_Define = Int;

int main()
{
    intPtr_Declare = &Int;
    
    cout << "Int : " << Int << " and ";
    cout << "&Int : " << &Int << endl;

    cout << endl;

//    cout << *intPtr_Declare << "\t\t\t";   // Exception has occurred. Segmentation fault
    cout  << "intPtr_Declare : " << intPtr_Declare << " and ";
    cout << "&intPtr_Declare : " << &intPtr_Declare << endl;
    cout << "*intPtr_Define : " << *intPtr_Define << ", ";
    cout << "intPtr_Define : " << intPtr_Define << " and ";
    cout << "&intPtr_Define : " << &intPtr_Define << endl;

    cout << endl;

    cout << "intRef_Define : " << intRef_Define << " and ";
    cout << "&intRef_Define : " << &intRef_Define << endl;

    return 0;
}