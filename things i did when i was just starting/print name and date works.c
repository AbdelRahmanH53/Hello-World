#include<stdio.h>
#include<math.h>

void date();


int main()
{
	int i , o ,z;
	char name[z];
	
	printf("how many letters is your name : ");
	scanf("%d",&o);
  
	printf("enter you name : ");
  
	for(i=0 ; i<=o ; i++) 
	{
    	scanf("%c", &name[i]);
	}

	printf("\n\nHELLO ,");
	
	for(i=0 ; i<=o ; i++)
	{
		printf("%c",name[i]);
	}
	
	printf("\n\ni will ask you a series of quistions to tell you your age \n\nokay");
	
	for(i=0 ; i<=o ; i++)
	{
		printf("%c",name[i]);
	}
	printf("\n\n");

	date();

	printf("\n\n\nGoodyBaye ,");


	
	printf("\nNow i know your name and age and i i'll never forget them <3\n");
	
	for(i=0 ; i<=o ; i++)
	{
		printf("%c",name[i]);
	}
	printf("\n\n");
  return 0;
}	
	
void date()
{	
	int smonth , sday , tday , tmonth , tyear , yday , ymonth , yyear, hday , hmonth , hyear , zmonth ,zday , zyear;
	
	printf("what is the date today ? \n");
	printf("day : ");
	scanf("%d",&tday);
	printf("month : ");	
	scanf("%d",&tmonth);
	printf("year : ");
	scanf("%d",&tyear);
  
  
	printf("\nwhen were you born ?\n");
	printf("day : ");
	scanf("%d",&yday);
	printf("month : ");	
	scanf("%d",&ymonth);
	printf("year : ");
	scanf("%d",&yyear);


	printf("\n\nSo you are born in	%d / %d /%d\n\n",yday,ymonth,yyear);


	if ( ymonth == tmonth )
	{
		hyear = tyear - yyear;
		printf("\n\n                                  HappyBrithDay\n");
	}

	if( ymonth > tmonth  )
	{
		hyear = tyear - yyear - 1;
	}

	if( ymonth < tmonth  )
	{
		hyear = tyear - yyear ;
	}


	
	zmonth = tmonth - ymonth;
		
	if( zmonth < 0 )
	{
		hmonth = 12 - abs(zmonth);
	}
	
	if( zmonth >= 0 )
	{
		hmonth = tmonth - ymonth;
	}


	
	zday = tday - yday ;
    
	if(zday==0)
	{
		hday = tday - yday;
	}       
		                    
	if( zday < 0 ) 
	{
		hday = 31 - abs(zday);
	}

	if( zday > 0 )
	{
		hday = tday - yday;
	}

	if(hday!=0)
	{
		smonth = 11 - hmonth;
		sday = 31 - hday; 
	}
	
	if(hday==0)
	{
		smonth = abs(hmonth-12);
	}	

	
	
 	printf("\nYour age is :-   \n\n   %d years \n   %d months \n   %d days",hyear,hmonth,hday);
 	printf("\n\nYour next birth day is in :-   \n\n   %d months \n   %d days",smonth,sday);


return;}


	


