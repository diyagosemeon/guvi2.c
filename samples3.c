#include <stdio.h>
#include<conio.h>
int main()
{
    int a, i, flag = 0;
printf("Enter a positive integer: ");
    scanf("%d", &a);
    for(i = 2; i <= n/2; ++i)
    {
       if(a%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (a== 1) 
    {
      printf("1 is neither a prime nor a composite number.");
    }
    else 
    {
        if (flag == 0)
          printf("%d is a prime number.", a);
        else
          printf("%d is not a prime number.", a);
    }
   return 0;
}
