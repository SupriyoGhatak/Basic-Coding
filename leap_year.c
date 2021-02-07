#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

int n;

    printf("Enter The Year:");
    scanf("%d",&n);

    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                printf("Leap year");
            }
            else
                printf("Not a leap Year");

        }else{
        printf("Leap Year");}
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;

}
