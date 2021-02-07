#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int prime(int n){

    unsigned int test;
    test=1;
    int c=0;
    int i,j;

    int flag;
    do{
        test++;
        flag=0;
        for(i=2;i<test;i++){
            if(test%i == 0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            c++;
        }
    }while(c<n);

    printf("%u ",test);

}

int fibo(int n){

int a=0;
int b=1;
int c;
for(int i=1;i<=n;i++){
    c=a+b;
    a=b;
    b=c;
}
printf("%d",a);

}
int main(){

    int n,m,i;

    printf("Enter The N:");
    scanf("%d",&n);

    if(n%2==0)
        prime(n/2);
    else
        fibo(n/2+1);

}




