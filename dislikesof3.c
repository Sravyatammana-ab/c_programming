#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int k,i=1,count=0;
        scanf("%d",&k);
        while(1){
            if(i%10!=3 && i%3!=0){
                count++;
                if(count==k){
                    printf("%d",i);
                    break;
                }
            }
            i++;
        }

    }
    return 0;
}