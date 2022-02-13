/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  int n , total = 0;

  printf("Please enter the Number : ");
	scanf("%d", &n );

  while ( n > 0 )
  {
    total = total + n;
    n--;
  }

  printf("Sum is : %d", total );
  
  return 0;
}

