#include <stdio.h>

#include<stdio.h>
int main(){
    int n,k,bal=1000;
    printf("1.check bal\n");
    printf("2.deposit\n");
    printf("3.withdraw\n");
    printf("4.exit\n");
    printf("Enter operation:");
    scanf("%d",&n);
    while(n!=4){
    switch(n){
        case 1:
        printf("balance is %d\n",bal);
        printf("1.check bal\n");
        printf("2.deposit\n");
        printf("3.withdraw\n");
        printf("4.exit\n");
        printf("Enter operation:");
        scanf("%d",&n);
        break;
        case 2:
        printf("amount to be deposited:");
        scanf("%d",&k);
        bal=bal+k;
        printf("Balance is %d\n",bal);
        printf("1.check bal\n");
        printf("2.deposit\n");
        printf("3.withdraw\n");
        printf("4.exit\n");
        printf("Enter operation:");
        scanf("%d",&n);
        break;
        case 3:
        printf("amount to be withdrawn:");
        scanf("%d",&k);
        if (bal<0){
            printf("you dont have enough money to withdraw");
        }
        else{
            printf("Your current balance after withdrawl is %d",(bal=bal-k));
        }
        printf("Balance is %d\n",bal);
        printf("1.check bal\n");
        printf("2.deposit\n");
        printf("3.withdraw\n");
        printf("4.exit\n");
        printf("Enter operation:");
        scanf("%d",&n);
        break;
        default:
        printf("1.check bal\n");
        printf("2.deposit\n");
        printf("3.withdraw\n");
        printf("4.exit\n");
        printf("Enter operation:");
        scanf("%d",&n);
        
    }
    }
    return 0;
    
}