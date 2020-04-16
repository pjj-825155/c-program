#include <stdio.h>
#include<math.h>
main()
{
	float x;
	float a,b;
	scanf("%f",&x);
	b = 1.0;
	while(fabs(b-a) > 0.00001)
	{
		a = b;
		b = (a+x/a)/2;
	}
	printf("%0.3f\n",b); 
}

