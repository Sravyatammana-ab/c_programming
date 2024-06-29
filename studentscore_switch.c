#include<stdio.h>
int main(){
    int score;
    printf("Enter the score of student");
    scanf("%d",&score);
    int n=score/10;
    switch(n){
        case 10:
        printf("Your grade is A");
        break;
        case 9:
        printf("Your grade is A");
        break;
        case 8:
        printf("Your grade is B");
        break;
        case 7:
        printf("Your grade is C");
        break;
        case 6:
        printf("Your grade is D");
        break;
        default:
        printf("Your Grade is F");
        
    }
    return 0;
    
}
