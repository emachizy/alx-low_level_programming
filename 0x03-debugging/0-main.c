include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

0 int main(void)
 11 {
 12         int n;
 13 
 14         srand(time(0));
 15         n = rand() - RAND_MAX / 2;
 16 
 17         if (n > 0)
 18         {
 19                 printf("%i is positive\n", n);
 20         }
 21         else if (n == 0)
 22         {
 23                 printf("%i is zero\n", n);
 24         }
 25         else if (n < 0)
 26         {
 27                 printf("%i is negative\n", n);
 28         }
 29 
 30         return (0);
 31 }
