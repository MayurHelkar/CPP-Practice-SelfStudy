#include <iostream>

// char main() // error: '::main' must return 'int'
// char main(void) // error: '::main' must return 'int'
char main(char) // error: '::main' must return 'int'
{
//    return; // error: return-statement with no value, in function returning 'int' [-fpermissive]
//    return 'a'; // warning: 'int main(char)' takes only zero or two arguments [-Wmain]
    return 97; // warning: 'int main(char)' takes only zero or two arguments [-Wmain]
}