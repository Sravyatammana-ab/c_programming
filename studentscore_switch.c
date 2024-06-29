#include<stdio.h>
int main(){
    int score;
    printf("Enter the score of student");
    scanf("%d",&score);
    int n=score/10;
    switch(n){
        case 10:
        printf("Your greade is A");
        break;
        case 9:
        printf("Your greade is A");
        break;
        case 8:
        printf("Your greade is B");
        break;
        case 7:
        printf("Your greade is C");
        break;
        case 6:
        printf("Your greade is F");
        break;
        default:
        printf("Your Grade is F");
        
    }
    return 0;
    
}