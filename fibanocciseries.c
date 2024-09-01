#include <stdio.h>


void printFibonacci(int n) 
{
 
    int a =0, b =1, temp;

    if (n <= 0) 
    {
        printf("Please enter a positive integer.\n");
    } else if (n ==1)
     {
        printf("Fibonacci series: %d\n", a);
    } else 
    {
        printf("Fibonacci series: %d %d", a, b);
        for (int i = 2; i < n; i++)
         {
            temp = a + b; 
            printf(" %d",temp);
            a = b; 
            b = temp; 
        }
        printf("\t");
    }
}

int main() 
{
    int n;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    printFibonacci(n);

    return 0;
}
