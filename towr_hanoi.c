#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, x;
	printf( "How many disks? " );
	scanf( "%d", &n );
	printf("\n");
	for (x=1; x < (1 << n); x++)
		printf( "move from tower %i to tower %i.\n",
				(x&x-1)%3, ((x|x-1)+1)%3 );
	return 0;
}
