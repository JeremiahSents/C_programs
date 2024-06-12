#include <stdio.h>
#include <string.h>

// Define a structure to represent a bank account
typedef struct {
    int accountNumber;
    char accountHolderName[100];
    double balance;
} BankAccount;

void createAccount(BankAccount *account, int accountNumber) {
    account->accountNumber = accountNumber;
    printf("Enter account holder's name: ");
    scanf("%s", account->accountHolderName);
    account->balance = 0.0;
    printf("Account created successfully!\n");
}

void deposit(BankAccount *account, double amount) {
    if (amount > 0) {
        account->balance += amount;
        printf("Deposited %.2lf successfully!\n", amount);
    } else {
        printf("Invalid amount. Please enter a positive value.\n");
    }
}

void withdraw(BankAccount *account, double amount) {
    if (amount > 0 && amount <= account->balance) {
        account->balance -= amount;
        printf("Withdrew %.2lf successfully!\n", amount);
    } else {
        printf("Invalid amount or insufficient balance.\n");
    }
}

void checkBalance(const BankAccount *account) {
    printf("Account Number: %d\n", account->accountNumber);
    printf("Account Holder: %s\n", account->accountHolderName);
    printf("Current Balance: %.2lf\n", account->balance);
}

int main() {
    BankAccount account;
    int choice;
    int accountNumber;
    double amount;
    
    printf("Enter account number to create a new account: ");
    scanf("%d", &accountNumber);
    createAccount(&account, accountNumber);

    do {
        printf("\nBank Management System\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                deposit(&account, amount);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                withdraw(&account, amount);
                break;
            case 3:
                checkBalance(&account);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
