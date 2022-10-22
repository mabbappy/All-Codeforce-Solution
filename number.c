#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    
    if (x % 2 != 0)
    {
        printf("Your Number is odd number\n");
        int c = 0;
        for (int i = 1; i <= x; i = i + 2)
        {
            c++;
        }
        printf("Your Number is %d th odd number\n", c);
    }
    else if (x % 2 == 0)
    {
        printf("Your Number is even number\n");
        int c = 0;
        for (int i = 2; i <= x; i = i + 2)
        {
            c++;
        }
        printf("Your Number is %d th even number\n", c);
    }

    return 0;
}