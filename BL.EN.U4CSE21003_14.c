/*AAYUSHI JEEBAN TRIPATHY
BL.EN.U4CSE21003
POSITIVE AND NEGATIVE
*/
/*@requires \valid_read(array + (0..length-1));
assigns \nothing;
behavior positive:
assumes \exists int i; 0 <=i<length&&array[i]>0;
ensures \result==1;
behavior negative:
assumes \exists int i; 0 <=i<length&&array[i]<0;
ensures \result==0;
behavior zero:
assumes \exists int i; 0<=i<=length&&array[i]==0;
ensures \result==2;
disjoint behaviors;
complete behaviors;
*/
int search(int array[],int length){
/*@loop invariant 0<=i<=length+1;
loop invariant \forall integer j;0<=j<=i==>array[j]==0;
loop assigns i;
loop variant length-i;
*/
for(int i=0;i<length;i++)
{
if(array[i]>0)
{
array[i]==0;
return 1;
}
else if(array[i]==0)
{
array[i]==0;
return 2;
}
else
{
array[i]==0;
return 0;
}
}
}
void main()
{
int array[6]={1,-2,4,-8,11,-9};
int w=search(array,6);
}
