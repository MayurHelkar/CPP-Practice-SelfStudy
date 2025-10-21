#include <iostream>

// float main() // error: '::main' must return 'int'
// float main(void) // error: '::main' must return 'int'
float main(float)
{
//    return; // error: return-statement with no value, in function returning 'int' [-fpermissive]
//    return 76; // warning: 'int main(float)' takes only zero or two arguments [-Wmain]
    return 65.12; // warning: 'int main(float)' takes only zero or two arguments [-Wmain]
}