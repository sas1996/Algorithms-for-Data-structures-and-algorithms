#include <stdio.h>


// Insertion sort explained- Efficient for smaller data sets, requires a constant amount of additional memory space,not efficient on large lists

/* It works like this - You have a full list, then you look at the first element. It is already sorted because there is nothing you
can compare it to so we have a sublist of size 1. Then we look at the next element from the bigger list and insert it into its place in this smaller
sublist of 1- if the number from the big list is bigger than the one in the smaller list, then we keep the original element in the smaller sublist in its place
and put this element to the right of it, if smaller,we put it to the left. Lets say we already have 4 elements in the list, and the next number we have is smallest
of all the elements currently in the smaller list, we insert it at the first index, or any ith index depending on the number by comparing backwards.
*/


int main()
{
	int n,array[1000],c,d,t;
	printf("Enter number of elements");
	scanf("%d",&n);

	printf("Enter %d integers",n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&array[c]);
	}
	for(c=1;c<=n-1;c++)
	{
		d=c;

	while(d>0 && array[d] < array[d-1])
	{
		t=array[d];
		array[d]=array[d-1];
		array[d-1]=t;
		d--;
	}
}

printf("Sorted list in ascending order");
for(c=0;c<=n-1;c++)
{
	printf("%d\n",array[c]);
}
return 0;
}
