/*AAYUSHI JEEBAN TRIPATHY
BL.EN.U4CSE21003
PERFORMING INTEGER SQUARE ROOT USING 
APPROPRIATE PRE CONDITION AND POST CONDITION.
*/
#include<math.h>
#include<limits.h>
/*@requires a>0;
ensures \result>=0;
ensures \result*\result<=a;
ensures ((\result+1)*(\result+1))>a;
*/
double sq(int a)
{
	return sqrt(a);
}
int main()
{
	int a=25;
	double w=sq(a);
}
