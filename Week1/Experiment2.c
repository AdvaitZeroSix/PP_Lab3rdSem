// Develop a menu-driven C program using user-defined functions to simulate basic
// bank account operations. The program should demonstrate parameter passing, parameter
// safety, modular programming, and the use of return values.
// Problem Statement: Implement a menu-driven Bank Account Management System using the
// switch statement to perform the following operations:
// 1. Create Account
// 2. Deposit Money
// 3. Withdraw Money
// 4. Check Balance
// 5. Display Account Details
// 6. Exit
// Functions to Implement
// • createAccount()
// • deposit()
// • withdraw()
// • checkBalance()
// • displayAccount()
#include <stdio.h>
#include <string.h>

#define MAX_NAME 30

float createAccount(int accNo, char name[], float balance);
float deposit(float balance, float amount);
float withdraw(float balance, float amount);
float checkBalance(float balance);
void displayAccount(int accNo, char name[], float balance);

int main()
{
    int choice;
    int accountNo = 0;
    char customerName[MAX_NAME];
    float balance = 0;
    float amount;
    int accountCreated = 0;

    while (1)
    {
        printf("\n====================================");
        printf("\n BANK ACCOUNT MANAGEMENT SYSTEM");
        printf("\n====================================");
        printf("\n1. Create Account");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Check Balance");
        printf("\n5. Display Account Details");
        printf("\n6. Exit");
        printf("\n\nEnter your choice : ");

        if (scanf("%d", &choice) != 1)
        {
            printf("\nInvalid input!");
            while (getchar() != '\n');
            continue;
        }

        if (choice < 1 || choice > 6)
        {
            printf("\nInvalid Menu Choice.");
            continue;
        }

        switch (choice)
        {
        case 1:
            printf("\nEnter Account Number : ");

            if (scanf("%d", &accountNo) != 1)
            {
                printf("\nInvalid Account Number.");
                while (getchar() != '\n');
                break;
            }

            if (accountNo <= 0)
            {
                printf("\nAccount Number must be positive.");
                break;
            }

            while (getchar() != '\n');

            printf("Enter Customer Name : ");
            fgets(customerName, MAX_NAME, stdin);
            customerName[strcspn(customerName, "\n")] = '\0';

            if (strlen(customerName) == 0)
            {
                printf("\nCustomer Name cannot be empty.");
                break;
            }

            printf("Enter Initial Balance : ");

            if (scanf("%f", &balance) != 1)
            {
                printf("\nInvalid Balance.");
                while (getchar() != '\n');
                break;
            }

            if (balance < 0)
            {
                printf("\nInitial Balance cannot be negative.");
                break;
            }

            balance = createAccount(accountNo, customerName, balance);
            accountCreated = 1;

            printf("\nAccount Created Successfully.\n");
            break;

        case 2:
            if (accountCreated == 0)
            {
                printf("\nCreate Account First.");
                break;
            }

            printf("\nEnter Deposit Amount : ");

            if (scanf("%f", &amount) != 1)
            {
                printf("\nInvalid Amount.");
                while (getchar() != '\n');
                break;
            }

            if (amount <= 0)
            {
                printf("\nDeposit Amount must be positive.");
                break;
            }

            balance = deposit(balance, amount);
            printf("\nDeposit Successful.");
            break;

        case 3:
            if (accountCreated == 0)
            {
                printf("\nCreate Account First.");
                break;
            }

            printf("\nEnter Withdrawal Amount : ");

            if (scanf("%f", &amount) != 1)
            {
                printf("\nInvalid Amount.");
                while (getchar() != '\n');
                break;
            }

            if (amount <= 0)
            {
                printf("\nWithdrawal Amount must be positive.");
                break;
            }

            if (amount > balance)
            {
                printf("\nInsufficient Balance.");
                break;
            }

            balance = withdraw(balance, amount);
            printf("\nWithdrawal Successful.");
            break;

        case 4:
            if (accountCreated == 0)
            {
                printf("\nCreate Account First.");
                break;
            }

            balance = checkBalance(balance);
            printf("\nCurrent Balance : %.2f", balance);
            break;

        case 5:
            if (accountCreated == 0)
            {
                printf("\nCreate Account First.");
                break;
            }

            displayAccount(accountNo, customerName, balance);
            break;

        case 6:
            printf("\nThank You...\n");
            return 0;
        }
    }

    return 0;
}

float createAccount(int accNo, char name[], float balance)
{
    printf("\nAccount Number : %d", accNo);
    printf("\nCustomer Name : %s", name);
    return balance;
}

float deposit(float balance, float amount)
{
    balance = balance + amount;
    return balance;
}

float withdraw(float balance, float amount)
{
    balance = balance - amount;
    return balance;
}

float checkBalance(float balance)
{
    return balance;
}

void displayAccount(int accNo, char name[], float balance)
{
    printf("\n");
    printf("\n--------- ACCOUNT DETAILS ---------");
    printf("\nAccount Number : %d", accNo);
    printf("\nCustomer Name : %s", name);
    printf("\nCurrent Balance: %.2f", balance);
    printf("\n-----------------------------------");
}
