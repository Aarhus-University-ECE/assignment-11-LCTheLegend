#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
    assert(n >= 1); //precondition
    
    if(n == 1)
      return 1 + total; //Base case
    else
      return sumtail(n - 1, total + n); //Recursive step
    return 0;
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  assert(n >= 1); //precondtition

  int sum = 0; //variable for total sum
  while(n > 0) {
    sum += n; //adds n to sum for all numbers from 0 to n in descending order
    n--;
  }
  return sum;
}

