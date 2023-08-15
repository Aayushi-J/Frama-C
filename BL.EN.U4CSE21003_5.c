#include<limits.h>
/*AAYUSHI JEEBAN TRIPATHY
BL.EN.U4CSE21003
 SWAP FUNCTION USING PASS BY VALUE.
 */
/*@ requires INT_MIN<a<INT_MAX&&INT_MIN<b<INT_MAX;
ensures a==\old(b)&&b==\old(a);
*/
int swap(int a, int b)
{
	int temp=a;
	a=b;
	b=a;
}
int main()
{
	int a=11,b=22;
	swap(a,b);
}
