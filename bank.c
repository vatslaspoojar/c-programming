#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

void deposit(struct Bank *b)
{
    float amt;
    printf("Enter Deposit Amount: ");
    scanf("%f",&amt);

    b->balance += amt;

    printf("Updated Balance = %.2f\n",b->balance);
}

void withdraw(struct Bank *b)
{
    float amt;

    printf("Enter Withdraw Amount: ");
    scanf("%f",&amt);

    if(amt<=b->balance)
    {
        b->balance -= amt;
        printf("Updated Balance = %.2f\n",b->balance);
    }
    else
    {
        printf("Insufficient Balance!\n");
    }
}

void balance(struct Bank b)
{
    printf("Current Balance = %.2f\n",b.balance);
}

int main()
{
    struct Bank b;
    FILE *fp;

    int choice;

    printf("Enter Account Number: ");
    scanf("%d",&b.accNo);

    printf("Enter Customer Name: ");
    scanf("%s",b.name);

    printf("Enter Initial Balance: ");
    scanf("%f",&b.balance);

    while(1)
    {
        printf("\n===== BANK MENU =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Balance Enquiry\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                deposit(&b);
                break;

            case 2:
                withdraw(&b);
                break;

            case 3:
                balance(b);
                break;

            case 4:
                fp=fopen("bank.dat","wb");
                fwrite(&b,sizeof(b),1,fp);
                fclose(fp);
                printf("Data Saved Successfully.\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}