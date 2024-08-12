#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void createAccount()
{

    FILE *Fp, *Fs;
    typedef struct userDetails
    {
        char fname[50], lname[50], address[60], email[100];
        int phoneNum, Date, Month, Year;
    } Users;
    Fp = fopen("userData.txt", "ab");
    Users Person1;
    if (Fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter your details:\n");

    printf("First Name: ");
    scanf("%s", Person1.fname);

    printf("Last Name: ");
    scanf("%s", Person1.lname);

    printf("Date of Birth: ");
    scanf("%d%d%d", Person1.Date, Person1.Month, Person1.Year);

    printf("Address: ");
    scanf("%s", Person1.address);

    printf("Email: ");
    scanf("%s", Person1.email);

    printf("Phone Number :");
    scanf("%d", Person1.phoneNum);

    printf("Select a password:");
    passwordSelection();

    fwrite(&Person1, sizeof(Users), 1, Fp);
    fclose(Fp);
    printf("Details saved successfully.\n");
}
void passwordSelection()
{
    char password[64];
    int passwordLength = 0;
    char ch;
    do
    {
        passwordLength = 0;
        for (int i = 0; i < 64; i++)
        {
            ch = getch();
            if (ch == 13)
            {
                break;
            }
            password[i] = ch;
            passwordLength++;
            printf('*');
        }
        password[passwordLength] = '\0';
        if (passwordLength < 8)
        {
            printf("\nPassword must be at least 8 characters long. Try again: ");
            passwordLength = 0;
        }

    } while (passwordLength < 8);
    printf("\nYour password has been set.\n");
}

int main()
{
    printf("\t\t========Welcome to Sents bank.com=======\t\t\n");
    printf("Please select an option :\n");
    printf("1.Create Account\n");
    printf("2.Transfer Money\n");
    printf("3.Check Balance\n");
    printf("4.Login\n\n\n\n");

    int option;
    printf("Option : ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        // createAccount();
        break;
    case 2:
        // transferMoney();
        break;
    case 3:
        // checkBalance();
        break;
    default:
        // Login();
        break;
    }
}