#include<stdio.h>
int main() {
	static int x = 1;
	printf("value of x is %d\n", x);
	x++;
	if (x > 100) {
		return 0;
	}
	main();
}

