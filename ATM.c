#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void func();

char choose;
int balance = 0, withd, dep;

int main(void)
{
    char pin;
    while(strlen(&pin) != 6)
    {
    printf("Enter your 6 digit pin: ");
    scanf("%s",&pin);
    }
    func();

}

void func()
{
    printf("\n1. Check account");
    printf("\n2. Withdraw");
    printf("\n3. Deposit");
    printf("\n4. Quit\n");

    printf("\n Choose an option: ");
    scanf("%s",&choose);


    switch(choose)
    {

        case('1'):
        printf("Your Account Balance is %i$\n", balance);
        printf("**If you want to go back enter 0**\n");
        scanf("%s",&choose);
        if(choose == '0')
        {
            func();
        }
        break;

        case('2'):
        printf("Enter the value you want to withdraw: ");
        scanf("%i",&withd);

        if(withd>balance)
        {
            printf("\nYou dont have enough money to withdraw\n");
            printf("Please try to deposit some money\n");
            printf("\n**If you want to go back enter 0**\n");
        }
        else
        {
            printf("%i$ was withdrawn succesfully\n",withd);
            printf("\n**If you want to go back enter 0**\n");
        }
        scanf("%s",&choose);
        if(choose == '0')
        {
            func();
        }
        break;

        case('3'):
        printf("Enter the value you want to deposit: ");
        scanf("%i",&dep);
        printf("\nYou have deposited %i$ successfully to your account\n", dep);
        printf("your balance now is: %i$\n",(balance+=dep));
        printf("\n**If you want to go back enter 0**\n");

        scanf("%s",&choose);
        if(choose == '0')
        {
            func();
        }

        break;

        case('4'):
        system("clear");
        printf("GoodBye!\n Made By KickerTimez\n");
        break;

    }


}