
#include <stdio.h>
#include <math.h>

int main()
{
	float A, B, D,  delta ;
	float X1,X2;
	printf("A=");
	scanf("%f",&A);
	printf("B=");
	scanf("%f",&B);
	printf("D=");
	scanf("%f",&D);

	delta = (B*B)-4*A*D;
	if(delta >0) {
		X1=(-B+ sqrt(delta))/2*A;
		X2=(-B-sqrt(delta))/2*A;
		printf("The two solutions of the rquation are \n X1 = %f \n X2=   %f",X1,X2);

	}
	else if (delta=0) {
		X1=(-B)/2*A;
		printf("This equation has one solution is X = %f",X1);

	}
	else {
		printf("This equation have not  solutions in R");
	}

}
