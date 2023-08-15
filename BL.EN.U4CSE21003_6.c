/*AAYUSHI JEEBAN TRIPATHY 
BL.EN.U4CSE21003
SWAP FUNCTION USING PASS BY REFERENCE.
*/
#include<limits.h>
/*@ requires *a>INT_MIN&&*b>INT_MIN;
requires \valid(a)&&\valid(b);
requires \separated(a,b);
assigns *a,*b;
ensures *a==\old(*b)&&*b==\old(*a);
*/
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a=11,b=22;
	L:;
	//@assert b==22&&\at(a,L)==11;
	swap(&a,&b);
}
