#include <stdio.h>
int accountCreate(int choice);
int deposit();
int withdraw(int balance);
int paytax(int balance);
void checkBalance(int balance);
int main(){
	
// banking program 

int choice =0;
int balance=0;
int account;
// e-banking menu 

printf("*** Welcome to Ebank ***");
	printf("\nSelect an option:\n");
	printf("\n1. Account creation\n");
	printf("2. Deposit Money\n");
	printf("3. Withdraw Money\n");
	printf("4. Bill payment\n");
	printf("5. Check Balance\n");
	printf("6. Exit\n");
	printf("\nEnter your choice:");
	
	// elegxos an yparxei logariasmos
	while(choice!=1){
		     scanf("%d", &choice);
		
			printf("\nYour account hasn't been created yet\n");
			
		}
		
		printf("\nYour account has successfully been created\n");
		

	
	
	



do{


	printf("\nSelect an option:\n");
	printf("\n1. Account creation\n");
	printf("2. Deposit Money\n");
	printf("3. Withdraw Money\n");
	printf("4. Bill payment\n");
	printf("5. Check Balance\n");
	printf("6. Exit\n");
	printf("\nEnter your choice:");
	scanf("%d", &choice);

// e-banking menu	
	switch(choice){
		case 1:
			accountCreate(choice);
			break;
		case 2:
		 	balance=balance+deposit();
		 	break;
		 case 3:	
		 	balance=balance-withdraw(balance);
		 	break;
		 case 4:
		 	balance=balance-paytax(balance);
		 	break;
		 case 5:
		 	checkBalance(balance);
		 	break;
		 case 6:
		 	printf("\nThank you for using the ebanking!\n");
		 	break;
		 default:
		 	printf("\nInvalid choice! Please select 1-6\n");
	}
	
	
}while(choice !=6);



return 0;
}



// account existence function
int accountCreate(int choice){
	if (choice==1){
		printf("\nThis account already exists\n");
		int account =1;
		
	}
	
}
// telos elegxou tautoprosopias
	

// katathesi xrhmaton function
int deposit(){
	int amount=0;
	printf("\nEnter amount to deposit: Euros");
	scanf("%d", &amount);
	if(amount<0){
		printf("Invalid ammount\n");
		return 0;
	}
	else {
		printf("Successfully deposited %d Euros\n",amount);
		return amount;
	}
// telos katathesis	
	
	
}
// analipsi xrhmatwn function
int withdraw(int balance){
	int amount = 0;
	printf("\nEnter amount to withdraw : Euros ");
	scanf("%d", &amount);
	if (amount<0){
		printf("Invalid amount!\n");
		return 0;
		
	}
	else if (amount > balance) {
		printf("Insufficient funds ! Your balance is %d Euros\n",balance);
		return 0;
	}
	else{
		printf("Successfully withdrew %d Euros\n", amount);
		return amount;
	}
//telos analipsis

	
// plhrwmi logariasmou function	
}
int paytax(int balance){
	int paytax = 0;
	printf("\nEnter the bill amount to pay : Euros ");
	scanf("%d", &paytax);
	if(paytax<0){
		printf("Invalid amount!\n");
		return 0;
		
	}
	else if(paytax>balance){
		printf("Insufficient funds to pay the bill ! Your balance is %d Euros\n",balance);
		return 0;
	}
	else{
		printf("Successfully paid the bill of : %d Euros your new balance is: %d Euros\n",paytax,balance-paytax);
		return paytax;
	}
	
}
// telos pliromis logariasmou



//elegxos ypoloipou function
void checkBalance(int balance){
	printf("\nYour current balance is: %d euros\n",balance);
	
}
//telos elegxou ypoloipou
	

