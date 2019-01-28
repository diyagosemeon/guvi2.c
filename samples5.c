#include <stdio.h>
#include<conio.h>
int main()
{
int num,m ,n;
printf("Print Odd Numbers in a given range m to n:");
printf("Enter a n number");
scanf("%d", &n);
printf("Enter a m nuymber ");
scanf("%d", &m);
 for (num = m; num <= n; num++)
 {
if (num % 2 == 0)
{
 printf ("%d ", num);
 }
 }
 return 0;
 }
