#include<limits.h>
/*BL.EN.U4CSE21003
AAYUSHI JEEBAN TRIPATHY
TO CHECK WHETER A NUMBER ID ODD OR EVEN AND 
CHECKING THE DIVISIBILITY BY 3 USING PRECONDITION 
AND POST CONDITION.*/
/*@ requires INT_MIN<a<INT_MAX;
ensures(a%2==0&&a%3==0==>\result==1)||
(a%2==0&&a%3!=0==>\result==2)||
(a%2!=0&&a%3==0==>\result==3)||
(a%2!=0&&a%3!=0==>\result==0);
*/
int div_num(int a)
{
	if(a%2==0)
	{
		if(a%3==0)
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	else
	{
		if(a%3==0)
		{
			return 3;
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	int a=44,b;
	b=div_num(a);
}
