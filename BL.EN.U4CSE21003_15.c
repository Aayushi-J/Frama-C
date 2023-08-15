#include <stddef.h>
/*@requires \valid_read(array + (0 .. length-1));
assigns \nothing;
behavior in:
assumes \exists int off ; 0 <= off < length && array[off] == element;
ensures array <= \result < array+length && *\result == element;
behavior notin:
assumes \forall int off ; 0 <= off < length ==> array[off] != element;
ensures \result == NULL;
disjoint behaviors;
complete behaviors;
*/
int *search(int* array,int length, int element){
/*@loop invariant 0 <= i <= length;
loop invariant \forall int j; 0 <= j < i ==> array[j] != element;
loop assigns i;
loop variant length-i;
*/
for(size_t i = 0; i < length; i++)
{
if(array[i] == element) 
{return &array[i];}
return NULL;
}
}
void main()
{
int array[4]={1,2,3,4};
int element=4;
int *p;
p=search(&array,4,element);
}
