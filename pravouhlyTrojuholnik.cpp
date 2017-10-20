//Ondrej Tomco, 1.N

#include <stdio.h>
#include <math.h>
main()
{
	int a,b,c;
	
	printf("Enter 3 sizes of triangles sides:\n");
	scanf("%d %d %d", &a, &b ,&c);
	
	if(a*a == b*a + c*c || b*b == a*a + c*c || c*c == a*a + b*c ) {
		printf("Your triangle is right-angled");
	}
	else {
		printf("Your triangle is not right-angled");
	}
	
	
}
