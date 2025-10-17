/*
Pointers - store the memory address of another variable 
References - create an alias for an already existing variable.
*/
#include <iostream>

using namespace std;

int main()
{
    // Integer Variable 
    int Int = 6832;
    
    // Integer Pointer variables - Declare and Defined
    int *intPtr_Declare;    
    intPtr_Declare = &Int;

   int *intPtr_Define = &Int;

    // Integer Reference Variables
/*
    int &intRef_Declare;    // error: 'intRef_Declare' declared as reference but not initialized
    intRef_Declare = Int;
*/
    int &intRef_Define = Int;

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