/*
  							        you have 3 accounts 
                             the passwords are 1234 , 6969 , 1472

*/

#include<stdio.h>

int x;  // the x is outside of the funcation to  be able to use in both function in th void me and void password
void provider();
void me();
void password();


int main()
{
	provider();
	password();
	me();
	
return 0;}	


void provider()
{	
	int heh;
	
	printf("choose is your provider :-     \n\n  1> Master Card\n\n  2> Visa\n\n  3> Meeza\n\n  Your choise :   ");
	
	scanf("%d",&heh);
	
	printf("________________________________________________________________________________________________________________________");
	
	switch(heh)
	{
		case 1:
			printf("\nWelcome to Master Card\n\n");
			break;

		case 2:
			printf("\nWelcome to Visa\n\n ");
			break;			

		case 3:
			printf("\nWelcome to Meeza\n\n");
			break;
		
		default:
			printf("Erorr don't continue please ");
			
	}

return;}

void password()
{	
	printf("Enter your 4 digit passcode  : ");

	scanf("%d",&x);

return;}

void me()
{
	printf("________________________________________________________________________________________________________________________");

	if(x==1472)
	{
	
	int amountToWithdraw, amountToDeposit , anotherTransaction;								

	double balance=10000000;
		
	
	int choice;
	printf("\nEnter your transaction !\n");
	printf("\n  1> Withdraw Money \n");
	printf("\n  2> Deposit Money  \n");
	printf("\n  3> Account Balance \n\n");
	printf("  Enter your choise here :   ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		
		
		
		
		
		case 1:
			
			printf("\nEnter the amount you want to WithDraw :  ");
			scanf("%d",&amountToWithdraw);
			
			if(amountToWithdraw > balance)
			{
				printf("\nyou don't have that much money ");
				printf("\n\n\nDo you want to do anything else  \n\npress \n( 1 ) to proceed \n( 2 ) to EXIT	");
				scanf("%d",&anotherTransaction);
				
				if(anotherTransaction == 1)
				{
					me();
				}	
			}
				else
				{
					balance = balance - amountToWithdraw;
					printf("\nYou have withdraw %d and your balance is %0.2lf",amountToWithdraw,balance);
					
					printf("\n\n\nDo you want to do anything else  \n\npress:- \n( 1 ) to proceed \n( 2 ) to EXIT	");
					scanf("%d",&anotherTransaction);
				
					if(anotherTransaction == 1)
					{
					me();
					}	
				
				}
				
				break;
		
		
		
		
		
		
		
		
		case 2:
		
			printf("\nPlese Enter Amount to Deposit  :   ");
			scanf("%d",&amountToDeposit);
			
			balance = balance + amountToDeposit;
			printf("\nThank you for depositing, your new balance is : %0.2lf",balance);
					
			printf("\n\n\nDo you want to do anything else  \n\npress:- \n( 1 ) to proceed \n( 2 ) to EXIT	");
			scanf("%d",&anotherTransaction);
				
			if(anotherTransaction == 1)
			{
				me();
			}
			break;
			
			
			
			
			
			
			
			
			
			
		case  3:
		
			printf("\nYour balnce is :  %0.2lf",balance);
			
			printf("\n\n\nDo you want to do anything else  \n\npress:- \n( 1 ) to proceed \n( 2 ) to EXIT	");
			scanf("%d",&anotherTransaction);
				
			if(anotherTransaction == 1)
			{
				me();
			}
			break;
			
			
			
			
			
}
}

	if(x==6969)
	{
	
	int amountToWithdraw, amountToDeposit , anotherTransaction;								

	double balance=69;
		
	
	int choice;
	printf("\nEnter your transaction !\n");
	printf("\n  1> Withdraw Money \n");
	printf("\n  2> Deposit Money  \n");
	printf("\n  3> Account Balance \n\n");
	printf("  Enter your choise here :   ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		
		
		
		
		
		case 1:
			
			printf("\nEnter the amount you want to WithDraw :  ");
			scanf("%d",&amountToWithdraw);
			
			if(amountToWithdraw > balance)
			{
				printf("\nyou don't have that much money ");
				printf("\n\n\nDo you want to do anything else  \n\npress \n( 1 ) to proceed \n( 2 ) to EXIT	");
				scanf("%d",&anotherTransaction);
				
				if(anotherTransaction == 1)
				{
					me();
				}	
			}
				else
				{
					balance = balance - amountToWithdraw;
					printf("\nYou have withdraw %d and your balance is %0.2lf",amountToWithdraw,balance);
					
					printf("\n\n\nDo you want to do anything else  \n\npress:- \n( 1 ) to proceed \n( 2 ) to EXIT	");
					scanf("%d",&anotherTransaction);
				
					if(anotherTransaction == 1)
					{
					me();
					}	
				
				}
				
				break;
		
		
		
		
		
		
		
		
		case 2:
		
			printf("\nPlese Enter Amount to Deposit  :   ");
			scanf("%d",&amountToDeposit);
			
			balance = balance + amountToDeposit;
			printf("\nThank you for depositing, your new balance is : %0.2lf",balance);
					
			printf("\n\n\nDo you want to do anything else  \n\npress:- \n( 1 ) to proceed \n( 2 ) to EXIT	");
			scanf("%d",&anotherTransaction);
				
			if(anotherTransaction == 1)
			{
				me();
			}
			break;
			
			
			
			
			
			
			
			
			
			
		case  3:
		
			printf("\nYour balnce is :  %0.2lf",balance);
			
			printf("\n\n\nDo you want to do anything else  \n\npress:- \n( 1 ) to proceed \n( 2 ) to EXIT	");
			scanf("%d",&anotherTransaction);
				
			if(anotherTransaction == 1)
			{
				me();
			}
			break;
			
			
			
			
			
}
}

	if(x==1234)
 	{
	
	int amountToWithdraw, amountToDeposit , anotherTransaction;								

	double balance=700;
		
	
	int choice;
	printf("\nEnter your transaction !\n");
	printf("\n  1> Withdraw Money \n");
	printf("\n  2> Deposit Money  \n");
	printf("\n  3> Account Balance \n\n");
	printf("  Enter your choise here :   ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		
		
		
		
		
		case 1:
			
			printf("\nEnter the amount you want to WithDraw :  ");
			scanf("%d",&amountToWithdraw);
			
			if(amountToWithdraw > balance)
			{
				printf("\n\nyou don't have that much money ");
				printf("\n\n\nDo you want to do anything else  \n\npress \n( 1 ) to proceed \n( 2 ) to EXIT	");
				scanf("%d",&anotherTransaction);
				
				if(anotherTransaction == 1)
				{
					me();
				}	
			}
				else
				{
					balance = balance - amountToWithdraw;
					printf("\nYou have withdraw %d and your balance is %0.2lf",amountToWithdraw,balance);
					
					printf("\n\n\nDo you want to do anything else  \n\npress:- \n( 1 ) to proceed \n( 2 ) to EXIT	");
					scanf("%d",&anotherTransaction);
				
					if(anotherTransaction == 1)
					{
					me();
					}	
				
				}
				
				break;
		
		
		
		
		
		
		
		
		case 2:
		
			printf("\nPlese Enter Amount to Deposit  :   ");
			scanf("%d",&amountToDeposit);
			
			balance = balance + amountToDeposit;
			printf("\nThank you for depositing, your new balance is : %0.2lf",balance);
					
			printf("\n\n\nDo you want to do anything else  \n\npress:- \n( 1 ) to proceed \n( 2 ) to EXIT	");
			scanf("%d",&anotherTransaction);
				
			if(anotherTransaction == 1)
			{
				me();
			}
			break;
			
			
			
			
			
			
			
			
			
			
		case  3:
		
			printf("\nYour balnce is :  %0.2lf",balance);
			
			printf("\n\n\nDo you want to do anything else  \n\npress:- \n( 1 ) to proceed \n( 2 ) to EXIT	");
			scanf("%d",&anotherTransaction);
				
			if(anotherTransaction == 1)
			{
				me();
			}
			break;
			
			
			
			
			
}
}

	else
	printf("\n\nWronge PassWord !!\n\nRerun the Program");

return;}
