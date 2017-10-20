// Ondrej Tomco, 1.N

#include <stdio.h>
main()
{
	int a;
	int b;
	int c;
	printf("Enter 3 sizes of triangle sides\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a+b>c && b+c>a && a+c>b) {
		printf("This triangle can be constructed ");
	}	
	
	else {
		printf("This triangle cannot be constructed");
	}	
	
}
