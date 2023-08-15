/*AAYUSHI JEEBAN TRIPATHY
BL.EN.U4CSE21003
SUM OF SQUARES IN A RANGE.
*/
/*@requires w>0;
ensures \result==((2*w*w*w)+(3*w*w)+w)/6;
assigns \nothing;
*/
int sqr_sum(int w)
{
	int s=0;
	/*@loop invariant 0<=i<=w+1;
	loop invariant s==((2*i*i*i)-(3*i*i)+i)/6;
	loop assigns i,s;
	loop variant w+1-i;*/
	for(int i=1;i<=w;i++)
	{
		s=s+i*i;
	}
	return s;
}
void main()
{
	int w=7,c;
	c=sqr_sum(w);
}
