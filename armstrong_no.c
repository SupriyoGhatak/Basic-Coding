#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{

    int n;
    int y;

    printf("Enter The Number:");
    scanf("%d",&n);
    check(n);
}

int check(int n){

    int p=0,r;
    int k=n;
    while(k!=0){
        r=k%10;
        p+=round(pow(r,3));
        k=k/10;
    }
    printf("%d\n",p);
    if(p == n)
        printf("Armstrong Number.");
    else
        printf("Not A armstrong number");




}
