#Program to calculate the volume of tromboloid using four functions

#include <stdio.h>

flaot input(char a)
{  
    char b;
    printf("Enter the value %c",b);
    scanf("%f",&a);
    return a;
}
float volume(float a, float b, float c)
{
    float volume=(float)1/(float)3*((a*b*c)+(c/b));
    return volume;
}
int main()
{
    float h,b,d,V;
    h=input('h');
    b=input('b');
    d=input('d');
    V=volume(h,b,d);
    printf("Volume of tromboloid is : %f",V);
    return 0;
}
