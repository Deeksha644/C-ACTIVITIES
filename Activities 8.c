#Activity 8

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
Fract sum(Fract f1, Fract f2)
{
     Fract result={(f1.num * f2.deno) + (f2.num * f1.deno), f1.deno * f2.deno};
     printf("Sum of two fractions = %f/%f",result.num,result.deno);
}
int main()
 { 
    Fract f1,f2;
    f1=input("f1");
    f2=input("f2");
    sum(f1,f2);
    return 0;
 }
