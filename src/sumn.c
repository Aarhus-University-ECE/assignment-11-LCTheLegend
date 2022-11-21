#include "sumn.h"

#include<stdio.h>

int sumn (int n)
{
    if(n == 1)
        return 1; //Base case
    else
        return (n * 2 - 1) + sumn(n - 1); //Recursive step
    return 0;
}