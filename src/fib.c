/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"
#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    assert(n >= 1); //precondition

    if(n == 1)
        return p; //base case
    else
        return fib(n - 1, pp, p + pp); //recursive tail step
    return 0;
}
