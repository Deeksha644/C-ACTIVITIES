#Activity 9

#include <stdio.h>

int input_n()
{
    int a;
    printf("Enter number of elements to be added:");
    scanf("%d",&a);
    return a;
}

void input_array(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d th element of an array:",i);
        scanf("%d",&a[i]);
    }
}

int array_sum(int n, int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += a[i];
    }
    return sum;
}

void show_results(int n, int a[n], int sum)
{
    int i;
    for(i=0;i<n-1;i++)
    {
      printf("%d=%d",a[i],sum);  
    }
    
}

int main()
{
    int n,sum;
    n=input_n();
    int a[n];
    input_array(n,a);
    sum=array_sum(n,a);
    show_results(n,a,sum);
    return 0;
}
