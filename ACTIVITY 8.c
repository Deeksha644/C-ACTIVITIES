#include<stdio.h>
#include<conio.h>
 struct fract
 {      
     float num,deno;
     
 };
 typedef struct fract Fract;
 Fract input(char b1[])
 {
     Fract f;
     printf("Enter %s numerator:",b1);
     scanf("%f",&f.num);
     printf("Enter %s denominator:",b1);
     scanf("%f",&f.deno);
     return f;
 }


int main()
 { 
    Fract f1,f2;
    f1=input("f1");
    f2=input("f2");
    int x,y,gcd,i;
    x=(f1.num * f2.deno) + (f2.num * f1.deno),
    y= f1.deno * f2.deno;
    for(i=1;i<=x && i<=y; ++i)
    {
        if(x%i==0 && y%i==0)
        gcd=i;
    }
    printf("the sum of two fractions is %d/%d",x/gcd,y/gcd);
    return 0;
 }
