/* AAYUSHI JEEBAN TRIPATHY 
BL.EN.U4CSE21003
MAXIMUM FUNCTION WITH PRECONDITION AND POST CONDITION.
*/
#include<limits.h>
/*@ requires INT_MIN<a<INT_MAX && INT_MIN<b<INT_MAX;
ensures (\result>b==>\result==a)||(\result>a==>\result==b)||(\result==a&&\result==b);
*/
int maximum(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int a=32,b=43,c;
	c=maximum(a,b);
}
