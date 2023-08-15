/*AAYUSHI JEEBAN TRIPATHY
BL.EN.U4CSE21003
INCREMENT FUNCTION USING PRE CONDITION AND POST CONDITION*/
#include<limits.h>
/*@ requires val>INT_MIN;
ensures \result==val+1;
*/
int increment(int val)
{
	return val+1;
}
int main()
{
	int val=11,b;
	//@assert val==11;
	b=increment(val);
}
