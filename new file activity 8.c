#include<stdio.h>
struct fraction
{
	int Num,Deno;
};
typedef struct fraction Fract;
Fract input(int n)
{
	Fract f;
	printf("Enter the value of numerator for fraction %d :",n);
	scanf("%d",&f.Num);
	printf("Enter the value of denominator for fraction %d :",n);
	scanf("%d",&f.Deno);
	return f;
}
int find_gcd(int a, int b)
{
    int temp;
	while (a!=0)
	{
	    temp=a;
	    a=b%a;
	    b=temp;
	}
	return b;
}
Fract simplify(Fract sum)
{
	int gcd=find_gcd(sum.Num,sum.Deno);
	sum.Num=sum.Num/gcd;
	sum.Deno=sum.Deno/gcd;
	return sum;
}
Fract compute_sum(Fract f1, Fract f2)
{
    Fract sum;
    sum.Num=(f1.Num*f2.Deno)+(f2.Num*f1.Deno);
    sum.Deno=f1.Deno*f2.Deno;
	sum=simplify(sum);
    return sum;
}
void display_sum(Fract f1, Fract f2, Fract sum)
{
	printf("The sum of %d/%d and %d/%d is: %d/%d.\n",f1.Num,f1.Deno,f2.Num,f2.Deno,sum.Num,sum.Deno);
}
int main()
{
	Fract f1,f2,sum;
	f1=input(1);
	f2=input(2);
	sum=compute_sum(f1,f2);
	display_sum(f1,f2,sum);
	return 0;
}
