#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    for(int i=2;i<n;i++)
    {
        if(n%i)
        {
            printf("Not a prime");
        }
    }
    printf("Prime");
}