#include <iostream>

using namespace std;

int main()
{
    char Char = 87;
    char CHAR = 113;

    char *charPtr = &Char;

    char &charRef = Char;

    cout << "Char : Value and Address ::" << endl;
    cout << "Char : " << Char << " and ";
//    cout << "&Char : " << &Char << endl;
    cout << "(void *)&Char : " << (void *)&Char << endl;

    cout << endl;

    cout << "CHAR : Value and Address ::" << endl;
    cout << "CHAR : " << CHAR << " and ";
//    cout << "&CHAR : " << &CHAR << endl;
    cout << "(void *)&CHAR : " << (void *)&CHAR << endl;

    cout << endl;

    cout << "Character Pointer variable : Value, pointing address and own address ::" << endl;
    cout << "*charPtr : " << *charPtr << ", ";
//    cout << "charPtr : " << charPtr  << ", ";
    cout << "(void *)charPtr : " << (void *)charPtr  << ", ";
    cout << "&charPtr : " << &charPtr << endl;

    cout << endl;

    cout << "Character reference variable : Value and Address ::" << endl;
    cout << "charRef : " << charRef << ", ";
//    cout << "&charRef : " << &charRef << endl;
    cout << "(void *)&charRef : " << (void *)&charRef << endl;

    cout << endl;

    Char = CHAR;
    cout << "Change in value of Character Variable ::" << endl;
    cout << "*charPtr : " << *charPtr << ", ";
    cout << "charRef : " << charRef << endl;
//    cout << "charPtr : " << charPtr << ", ";
    cout << "(void *)charPtr : " << (void *)charPtr << ", ";
//    cout << "&charRef : " << &charRef << endl;
    cout << "(void *)&charRef : " << (void *)&charRef << endl;

    cout << endl;

    cout << "Change in value of Character pointer variable ::" << endl;
    CHAR = 'Q';
    *charPtr = CHAR;
    cout << "Char : " << Char << ", ";
    cout << "*charPtr : " << *charPtr << ", ";
    cout << "charRef : " << charRef << endl;
//    cout << "charPtr : " << charPtr << ", ";
    cout << "(void *)charPtr : " << (void *)charPtr << ", ";
//    cout << "&charRef : " << &charRef << endl;
    cout << "(void *)&charRef : " << (void *)&charRef << endl;

    cout << endl;

    cout << "Change in value of Character pointer variable ::" << endl;
    CHAR = 'f';
    charPtr = &CHAR;
    cout << "Char : " << Char << ", ";
    cout << "*charPtr : " << *charPtr << ", ";
    cout << "charRef : " << charRef << endl;
//    cout << "charPtr : " << charPtr << ", ";
    cout << "(void *)charPtr : " << (void *)charPtr << ", ";
//    cout << "&charRef : " << &charRef << endl;
    cout << "(void *)&charRef : " << (void *)&charRef << endl;

    cout << endl;

    cout << "Change in value of Character pointer variable ::\n" << endl;
    CHAR = 'm';
    charRef = CHAR;   
    cout << "Char : " << Char << ", "; 
    cout << "*charPtr : " << *charPtr << ", ";
    cout << "charRef : " << charRef << endl;
//    cout << "charPtr : " << charPtr << ", ";
    cout << "(void *)charPtr : " << (void *)charPtr << ", ";
//    cout << "&charRef : " << &charRef << endl;
    cout << "(void *)&charRef : " << (void *)&charRef << endl;

    return 0;
}