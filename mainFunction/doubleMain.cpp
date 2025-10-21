#include <iostream>

// double main() // error: '::main' must return 'int'
// double main(void) // error: '::main' must return 'int'
double main(double) // error: '::main' must return 'int'
{
//    return; // error: return-statement with no value, in function returning 'int' [-fpermissive]
//    return 934; // warning: 'int main(double)' takes only zero or two arguments [-Wmain]
    return 65.128654; // warning: 'int main(double)' takes only zero or two arguments [-Wmain]
}