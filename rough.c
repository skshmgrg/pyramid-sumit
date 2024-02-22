#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of stars in one side");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1 - i; j >= 0; j--)
        {
            printf(" ");
        }
        printf("*");
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (i == 0)
                break;
            printf(" ");
        }
        if (i != 0)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n-2; i >= 0; i--)
    {
        for (int j = n - 1 - i; j >= 0; j--)
        {
            printf(" ");
        }
        printf("*");
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (i == 0)
                break;
            printf(" ");
        }
        if (i != 0)
        {
            printf("*");
        }
        printf("\n");
    }
}


// {
// int a,b,hcf,lcm,p,r;
// printf("enter the value of a and b");
// scanf("%d %d",&a,&b);
// p=a*b;
// t:
// r=a%b;
// if (r==0)
// {
//     hcf=b;
//     lcm=p/hcf;
// }
// else
// {
//   a=b;
//   b=r;
//   goto t;
// }
// printf("hcf is %d and lcm is %d",hcf,lcm);
// return 0;
// }
