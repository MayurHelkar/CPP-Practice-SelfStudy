#include <iostream>

using namespace std;

int main()
{
    char Char = 87;
    char *charPtr = &Char;

    char &charRef = Char;

    cout << "Char : Value and Address ::" << endl;
    cout << "Char : " << Char << " and ";
//    cout << "&Char : " << &Char << endl;
    cout << "(void *)&Char : " << (void *)&Char << endl;
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

    Char = 'W';
    cout << "Change in value of Character Variable ::" << endl;
    cout << "*charPtr : " << *charPtr << ", ";
    cout << "charRef : " << charRef << endl;
//    cout << "charPtr : " << charPtr << ", ";
    cout << "(void *)charPtr : " << (void *)charPtr << ", ";
//    cout << "&charRef : " << &charRef << endl;
    cout << "(void *)&charRef : " << (void *)&charRef << endl;

    cout << endl;

    cout << "Change in value of Character pointer variable ::" << endl;
    *charPtr = 'H';
    cout << "Char : " << Char << ", ";
    cout << "*charPtr : " << *charPtr << ", ";
    cout << "charRef : " << charRef << endl;
//    cout << "charPtr : " << charPtr << ", ";
    cout << "(void *)charPtr : " << (void *)charPtr << ", ";
//    cout << "&charRef : " << &charRef << endl;
    cout << "(void *)&charRef : " << (void *)&charRef << endl;

    cout << endl;

    cout << "Change in value of Character pointer variable ::\n" << endl;
    charRef = 'O';   
    cout << "Char : " << Char << ", "; 
    cout << "*charPtr : " << *charPtr << ", ";
    cout << "charRef : " << charRef << endl;
//    cout << "charPtr : " << charPtr << ", ";
    cout << "(void *)charPtr : " << (void *)charPtr << ", ";
//    cout << "&charRef : " << &charRef << endl;
    cout << "(void *)&charRef : " << (void *)&charRef << endl;

    return 0;
}