#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	
	float pr1, pr2, mf, mt, ma;
	int i1, i2;

	printf("digite nota 1\n");
	scanf("%f", &pr1);

	printf("digite nota 2\n");
	scanf("%f", &pr2);

	mf = (pr1+pr2)/2;
	mt = ((mf-0.5)+0.001);
	ma = (mf+0.001);
    i1=(int)mt; /*converte float para inteiro*/
    i2=(int)ma;

	printf(" media truncada %d \n", i1);
	printf("media arredondada %d \n", i2);



	return 0; 
}