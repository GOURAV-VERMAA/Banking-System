#include <stdio.h>

int main(){
    printf("IES Bank of India\n");
    printf("Welcome\n ");
    printf("please Enter your PIN :");
    int pin;
    scanf("%d" ,&pin );
    if(pin==1402){
        printf("Enter your choose\n");
        printf("1 for Balance inquirey\n");
        printf("2 for Account Details\n");
        printf("3 for Deposit\n");
        printf("4 for Withdraw\n");
        int choose;
     scanf("%d",&choose);
       if (choose==1)
       {
         printf("4000 rupees in your account\n");
       }
       else if (choose==2)
       {
        printf("Account holder name abc\n");
        printf("Account number xxxxx@@@#\n");
         printf("Account Branch\n");
       }

       else if (choose==3)
       {
          printf(" Enter Ammount of Deposit\n");
       }

       else if (choose==4){
        printf("Amount of Withdraw\n");
         int amount;
         scanf("%d",&amount);
        if(amount>500){
            printf("Insaffecent amount\n");
        }
        else if(amount<500){
            printf("Collect the Money\n");
        }
        
       }
       else{
        printf("Choose right one\n");
       }

    }

    printf("want Slip \n");
     
     char str[20];
     scanf("%s",str);
    if(str=="yes"){
         printf("Amount xxxx\n");
         printf("Date xxxx\n");
         printf("Acount Balance xxx\n");
    }
    else{
        printf("Thankyou");
    }
}