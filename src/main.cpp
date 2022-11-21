extern "C"{
    // Add the header files required to run your main
    #include "sum.h"
    #include "sumn.h"
    #include "stdio.h"
    #include "fib.h"
}

// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    printf("%d\n", sumwhile(5));
    printf("%d\n", sumtail(5, 0));
    printf("%d\n", sum(5));
    printf("%d\n", sumwhile(132));
    printf("%d\n", sumn(10));
    printf("%d\n", sumn(13));
    printf("%d\n", sumn(32));
    printf("%d", fib(10, 0, 1));
    return 0;
}