#include<limits.h>
/*@ requires INT_MIN<*a-*b<INT_MAX&&INT_MIN<*b-*a<INT_MAX;
requires \valid_read(a)&&\valid_read(b);
requires \separated(a,b);
assigns *a,*b;
ensures (*a>*b==>\result==*a-*b)||(*b>*a==>\result==*b-*a);
*/
int distance(int *a, int *b)
{
	if(*a<*b)
	{
		return *b-*a;
	}
	else
	{
		return *a-*b;
	}
}
int main()
{
	int a=11;
	L:;
	int b=52,w;
	//@assert \at(a,L)==11;
	w=distance(&a,&b);
}
