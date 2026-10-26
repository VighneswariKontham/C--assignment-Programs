#include<stdio.h>
int main()
{

    float balance, amount ;
    int choice;
    printf("Enter current account balance:");
    scanf("%f",&balance);
    printf("\n ATM menu");
    printf("\n 1.Balance Inquiry");
    printf("\n 2.Cash Withdrawal");
    printf("\n 3.Cash Deposit");
    printf("\n Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\nCurrent balance:%.2f",balance);
        break;
    case 2:
        printf("\nEnter withdrawal amount:");
        scanf("%f",&amount);
        if(amount<=balance && amount>0)
        {   balance-=amount;
            printf("\nTransaction successful");
            printf("\nRemaining balance:%.2f",balance);
        }
        else
            printf("Insufficient balance");
        break;
    case 3:
        printf("\nEnter deposit amount:");
        scanf("%f",&amount);
        balance+=amount;
        printf("Deposit successful");
        printf("\nUpdated amount:%.2f",balance);
        break;
    default:
        printf("Invalid option");
    }
    return 0;
}
