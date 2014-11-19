#include "stdio.h"
#include "stdlib.h"

void main()
{
    int i;
    unsigned int num = 245;

    printf("%d in backwards binary is: 0bb", num);
    
    // This program prints out the 8 bits of binary for the
    // provided number listing the least significant bit first
    //
    // Remember to step through the program  to isolate the
    // statement where the execution doesn't follow what it should
    //
    // DDD Hints:
    // type print <expression> in the debug console to evaluate
    //      the expression.  For example, print num+1
    // View the number in hex by typing print /x <variable> in
    //      the debug console

    for (i = 0; i < 8; i++)
    {
        // Set a breakpoint here, print num, and determine
        // whether execution should go to the if or else statement.
        // Step to see if the program follows your prediction
        if (num && 0x01 == 0x01)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }

        num = num >> 1;
    }
    
    printf("\n");
}
