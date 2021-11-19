#include <stdio.h>

int main()
{
	float W,L,A;

	printf("Enter the value of Length: ");
	scanf("%f",&L);
	printf("Enter the value of Width: ");
	scanf("%f",&W);
	A = W*L;
	printf("Area is %.2f\n",A);
	return 0;
}
