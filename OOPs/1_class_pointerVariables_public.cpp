#include <iostream>

using namespace std;

class employee
{
    public:
    string Name;
    string Company;
    int Age;
} employeeDeclare_G;

//  Default access specifier : Private
// employeeDeclare_G = { "Quincy", "freecodeCamp_YouTube", 37 }; // error: 'employeeDeclare_G' does not name a type
// employeeDeclare_G{"Quincy", "freecodeCamp_YouTube", 37 };   // error: 'employeeDeclare_G' does not name a type

//  Default access specifier : Private
// employee employeeDefine_G = { "Saldina", "codeBeauty_YouTube", 25 }; // error: could not convert '{"Saldina", "codeBeauty_YouTube", 25}' from '<brace-enclosed initializer list>' to 'employee'
// employee employeeDefine_G{ "Saldina", "codeBeauty_YouTube", 25 };    // error: no matching function for call to 'employee::employee(<brace-enclosed initializer list>)'
// employee employeeDefine_G = "Saldina", "codeBeauty_YouTube", 25;    // error: conversion from 'const char [8]' to non-scalar type 'employee' requested
                                                                        // error: expected unqualified-id before string constant
// employee employeeDefine_G = { "Saldina", "codeBeauty_YouTube", 25 };
employee employeeDefine_G{ "Saldina", "codeBeauty_YouTube", 25 };
// employee employeeDefine_G = "Saldina", "codeBeauty_YouTube", 25;    // error: conversion from 'const char [8]' to non-scalar type 'employee' requested
                                                                    // error: conversion from 'const char [8]' to non-scalar type 'employee' requested

int main()
{
    employee employeeDeclare_L;
    employeeDeclare_L = { "Quincy", "freecodeCamp_YouTube", 37 };
//    employeeDeclare_L{ "Quincy", "freecodeCamp_YouTube", 37 };  // error: expected ';' before '{' token

//    employee employeeDefine_L = { "Saldina", "codeBeauty_YouTube", 25 };
    employee employeeDefine_L{ "Saldina", "codeBeauty_YouTube", 25 };
//    employeeDeclare_G{"Quincy", "freecodeCamp_YouTube", 37 }; // error: expected ';' before '{' token

    cout << "Global variable : employeeDeclare_G" << endl;
    cout << "employeeDeclare_G.Name : " << employeeDeclare_G.Name << ", ";
    cout << "&employeeDeclare_G.Name : " << &employeeDeclare_G.Name << endl;
    cout << "employeeDeclare_G.Company : " << employeeDeclare_G.Company << ", ";
    cout << "&employeeDeclare_G.Company : " << &employeeDeclare_G.Company << endl;
    cout << "employeeDeclare_G.Age : " << employeeDeclare_G.Age << ", ";
    cout << "&employeeDeclare_G.Age : " << &employeeDeclare_G.Age << endl;
    
    cout << endl;

    cout << "Global variable : employeeDeclare_L" << endl;
    cout << "employeeDeclare_L.Name : " << employeeDeclare_L.Name << ", ";
    cout << "&employeeDeclare_L.Name : " << &employeeDeclare_L.Name << endl;
    cout << "employeeDeclare_L.Company : " << employeeDeclare_L.Company << ", ";
    cout << "&employeeDeclare_L.Company : " << &employeeDeclare_L.Company << endl;
    cout << "employeeDeclare_L.Age : " << employeeDeclare_L.Age << ", ";
    cout << "&employeeDeclare_L.Age : " << &employeeDeclare_L.Age << endl;

    cout << endl << endl;

    cout << "Global variable : employeeDefine_G" << endl;
    cout << "employeeDefine_G.Name : " << employeeDefine_G.Name << ", ";
    cout << "&employeeDefine_G.Name : " << &employeeDefine_G.Name << endl;
    cout << "employeeDefine_G.Company : " << employeeDefine_G.Company << ", ";
    cout << "&employeeDefine_G.Company : " << &employeeDefine_G.Company << endl;
    cout << "employeeDefine_G.Age : " << employeeDefine_G.Age << ", ";
    cout << "&employeeDefine_G.Age : " << &employeeDefine_G.Age << endl;

    cout << endl;

    cout << "Global variable : employeeDefine_L" << endl;
    cout << "employeeDefine_L.Name : " << employeeDefine_L.Name << ", ";
    cout << "&employeeDefine_L.Name : " << &employeeDefine_L.Name << endl;
    cout << "employeeDefine_L.Company : " << employeeDefine_L.Company << ", ";
    cout << "&employeeDefine_L.Company : " << &employeeDefine_L.Company << endl;
    cout << "employeeDefine_L.Age : " << employeeDefine_L.Age << ", ";
    cout << "&employeeDefine_L.Age : " << &employeeDefine_L.Age << endl;

    return 0;
}