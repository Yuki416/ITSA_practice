#include <stdio.h>
#include <math.h>

int f(int n){
    if(n==0 || n==1){
        return n+1;
    }

    return f(n-1)+f((n/2));

}


int main(){
    int n;
    scanf("%d",&n);
    int ans=f(n);
    printf("%d\n",ans);

    return 0;
}