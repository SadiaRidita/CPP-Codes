#include<stdio.h>
int main()
{
    int n,k;

    while(scanf("%d %d",&n,&k) != EOF)
    {
        int have = 0;
        int reminder = 0;

        while (n > 0)
        {
            n = n-1;
            have ++;
            reminder = reminder + 1;
            if (reminder == k)
            {
                n++;
                reminder = 0;
            }
        }
        printf ("%d\n",have);}
    return 0;
}


