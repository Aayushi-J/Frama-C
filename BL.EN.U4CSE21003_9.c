/*AAYUSHI JEEBAN TRIPATHY
BL.EN.U4CSE21003
SUM OF FIRST N NUMBERS USING THE WHILE LOOP.
*/
#include<limits.h>
/*@ requires n>0;
ensures \result==(n*(n+1))/2;
assigns \nothing;
*/
int sum_of_int(int n)
{
	int i=0,s=0;
	/*@ loop invariant 0<=i<=n+1;
	loop invariant s==(i-1)*i/2;
	loop assigns s,i;
	loop variant n-i;*/
	while(i<=n)
	{
		s=s+i;
		i=i+1;
	}
	return s;
}
		
void main()
{
	int n=10,w;
	w=sum_of_int(n);
	//@ assert w==55;
}
