#include<stdio.h>


int main()
{
	int o;
	printf("\n  enter a number form 1 to 4 for math operations don't try anything but numbers from 1 to 4 i warninged you  :-  \n\n     enter 1 for the summation \n     enter 2 for the subtraction \n     enter 3 for the multiplication \n     enter 4 for the division \n\n     ");
	scanf("%d",&o);
	
	double x , y , z;
	
		
    if(o==1)
	{
		printf("\n     enter the first value   ");
		scanf("%lf",&x);
		printf("\n     enter the second value   ");
		scanf("%lf",&y);
		
		z = x + y;
		    
		printf("\n     the summation = %0.1lf + %0.1lf = %0.2lf \n", x , y , z );
	}
	
	else if(o==2)
	{
		printf("\n     enter the first value   ");
		scanf("%lf",&x);
		printf("\n     enter the second value   ");
		scanf("%lf",&y);
		
		z = x - y;
		
		printf("\n     the subtraction = %0.1lf - %0.1lf = %0.2lf \n", x , y , z );
	}
	
	else if(o==3)
	{
		printf("\n     enter the first value   ");
		scanf("%lf",&x);
		printf("\n     enter the second value   ");
		scanf("%lf",&y);
		
		z = x * y;
		
		printf("\n     the multiplication = %0.1lf * %0.1lf = %0.2lf \n", x , y , z );
	}	
	
	else if(o==4)
	{
		printf("\n     enter the first value   ");
		scanf("%lf",&x);
		printf("\n     enter the second value   ");
		scanf("%lf",&y);
		
		z = x / y;
		
		printf("\n     the division = %0.1lf / %0.1lf = %0.2lf \n", x , y , z );
	}	

	else 
	printf("\n	DONKEY THAT'S NOT WHAT I SAID !\n");




return 0;		
}
