#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int n;

    printf("Enter The Numbewer:");
    scanf("%d",&n);

    int p;
    p=n;

    int r,result=0,k,l;
    while(p!=0){
        r=p%10;
        l=fibo(r);
        result+=l;
        p/=10;
    }

    if(result == n){
        printf("strong nun");

    }
    else{
        printf("Not stng");
    }

}

int fibo(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return (n*fibo(n-1));
}
