#include <stdio.h>
#include<stdlib.h>
int Bs(int l, int h, int key)
{
    int mid,array[100];
    mid=(l+h)/2;
    if(l>h)
    return 1;
    else if(array[mid]==key)
    return mid;
    else if(array[mid]<key)
    return Bs(mid+1,h,key);
    else
     return Bs(l,mid-1,key);
}
int main()
{
    int n,array[100],key,i,result,low=0,high=n-1;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("Enter the the elements in asorted manner:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the element tobe searched:");
    scanf("%d",&key);
    result = Bs(low,high,key);
    if(result!=1)
    {
        printf("element %d is found at %d",key,result);
    }
    else
    {
        printf("Element %d not found in an array",key);
    }
    return 0;
}
