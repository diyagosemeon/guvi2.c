#include <stdio.h>
#include<conio.h>
int main()
{
    int a, b;
    long long c = 1;
    printf("Enter a base number: ");
    scanf("%d", &a);
    printf("Enter an exponent: ");
    scanf("%d", &b);
while (b != 0)
    {
      c *= a;
        --b;
    }
printf("Answer = %lld", c);
 return 0;
}
