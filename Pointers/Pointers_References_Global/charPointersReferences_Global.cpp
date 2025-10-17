/*
Pointers - store the memory address of another variable 
References - create an alias for an already existing variable.
*/
#include <iostream>

using namespace std;

// Character Variable 
char Char = 69;

// Character Pointer variables - Declare and Defined
char *charPtr_Declare;
/*
charPtr_Declare = &Char;    // error: redefinition of 'char* charPtr_Declare'
                            // note: 'char* charPtr_Declare' previously declared here
*/
char *charPtr_Define = &Char;

// Character Reference Variables
// char &charRef_Declare;   // error: 'char_Reference_Declare' declared as reference but not initialized
//  charRef_Declare = Char;  // error: 'char_Reference_Declare' does not name a type
char &charRef_Define = Char;

int main()
{
    charPtr_Declare = &Char;
    
    cout << "Char : " << Char << " and ";
    cout << "&Char : " << &Char << endl;

    cout << endl;

//    cout << *charPtr_Declare << "\t\t\t";   // Exception has occurred. Segmentation fault
    cout  << "charPtr_Declare : " << charPtr_Declare << " and ";
    cout << "&charPtr_Declare : " << &charPtr_Declare << endl;
    cout << "*charPtr_Define : " << *charPtr_Define << ", ";
    cout << "charPtr_Define : " << charPtr_Define << " and ";
    cout << "&charPtr_Define : " << &charPtr_Define << endl;

    cout << endl;

    cout << charRef_Define << " and ";
    cout << &charRef_Define << endl;

    return 0;
}