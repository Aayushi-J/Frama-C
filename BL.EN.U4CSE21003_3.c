/*AAYUSHI JEEBAN TRIPATHY
BL.EN.U4CSE21003
COMPUTE THE ABSOLUTE VALUE WITHOUT ARITHMETIC OVERFLOW 
USING PRECONDITION AND POST CONDITION.*/
#include<limits.h>
/*@ requires INT_MAX>a>INT_MIN;
assigns \nothing;
ensures (a>0==>\result==a)||(a<0==>\result==-a);
*/
int abs(int a)
{
	if(a>0)
	{
		return a;
	}
	else
	{
		return -a;
	}
}
int main()
{
	int a=-33,w;
	w=abs(a);
}
