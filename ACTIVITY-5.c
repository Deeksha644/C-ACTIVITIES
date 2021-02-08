#Program to calculate the volume of tromboloid using four functions

#include <stdio.h>

flaot input(char b)
{  
    float a;
    printf("Enter the value of %c",b);
    scanf("%f",&a);
    return a;
}
float volume(float a, float b, float c)
{
    float volume=(float)1/(float)3*((a*b*c)+(c/b));
    return volume;
}
void output(float a,float b,float c,float volume)
{
    printf("Volume of tromboloid is : %f",a,b,c,volume);
}

int main()
{
    float h,b,d,V;
    h=input('h');
    b=input('b');
    d=input('d');
    V=volume(h,b,d);
    void output(h,b,d,V)
    
    return 0;
}
