/* Brute force approach

int main() {
    // Write C code here
    
    int n,x=1;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        x=x^i;
    }
    printf("%d",x);

    return 0;
}*/
// optimal solution//
#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    if(n%4==1) printf("%d",1);
    if(n%4==2) printf("%d",n+1);
    if(n%4==3) printf("%d",0);
    if(n%4==0) printf("%d",n);
    return 0;
}
/* wothin the range of numbers

int main() {
    // Write C code here
    
    int l,u,x=0;
    scanf("%d %d",&l,&u);
    for(int i=l;i<=u;i++){
        x=x^i;
    }
    printf("%d",x);

    return 0;
}
*/
/* optimal solution for range of numbers
#include <stdio.h>
int xor(int n)
{
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    if(n%4==3) return 0;
    if(n%4==0) return n; 
}
int main() {
    // Write C code here
    
    int l,u;
    scanf("%d %d",&l,&u);
    int ans=xor(u)^xor(l-1);
    printf("%d",ans);
    return 0;
}
*/