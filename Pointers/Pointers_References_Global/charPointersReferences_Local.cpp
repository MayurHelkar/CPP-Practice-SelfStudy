/*
Pointers - store the memory address of another variable 
References - create an alias for an already existing variable.
*/
#include <iostream>

using namespace std;

int main()
{
    // Character Variable 
    char Char = 69;

    // Character Pointer variables - Declare and Defined
    char *charPtr_Declare;
    charPtr_Declare = &Char;    // error: redefinition of 'char* charPtr_Declare'
                                // note: 'char* charPtr_Declare' previously declared here
    char *charPtr_Define = &Char;

    // Character Reference Variables
    // char &charRef_Declare;   // error: 'char_Reference_Declare' declared as reference but not initialized
    //  charRef_Declare = Char;  // error: 'char_Reference_Declare' does not name a type
    char &charRef_Define = Char;
    
    cout << "Char : " << Char << " and ";
//    cout << "&Char : " << &Char << endl;
    cout << "(void *)&Char : " << (void *)&Char << endl;

    cout << endl;

    cout << "Before Intialization of Pointer variable :" << endl;
//    cout << "*charPtr_Declare : " << *charPtr_Declare << ", ";   // Exception has occurred. Segmentation fault
    cout  << "(void *)charPtr_Declare : " << (void *)charPtr_Declare << " and ";
    cout << "&charPtr_Declare : " << &charPtr_Declare << endl;
    cout << "After Intialization of Pointer variable :" << endl;
    charPtr_Declare = &Char;
    cout << "*charPtr_Declare : " << *charPtr_Declare << ", ";
//    cout  << "charPtr_Declare : " << charPtr_Declare << " and ";
    cout  << "(void *)charPtr_Declare : " << (void *)charPtr_Declare << " and ";
    cout << "&charPtr_Declare : " << &charPtr_Declare << endl;
    cout << "*charPtr_Define : " << *charPtr_Define << ", ";
//    cout << charPtr_Define : " << charPtr_Define << " and ";
    cout << "(void *)charPtr_Define : " << (void *)charPtr_Define << " and ";
    cout << "&charPtr_Define : " << &charPtr_Define << endl;

    cout << endl;

    cout << charRef_Define << " and ";
//    cout << "&charRef_Define : " << &charRef_Define << endl;
    cout << "(void *)&charRef_Define : " << (void *)&charRef_Define << endl;

    return 0;
}