#include<stdio.h>
#include<stdlib.h>

int main()
{

    int n,i,j,l,k;
    int sum=0;
    printf("Enter The Starting No of the Range:");
    scanf("%d",&n);
    printf("Enter The second No of the Range:");
    scanf("%d",&k);

    for(i=n+1;i<k;i++){
            l=0;
        for(j=2;j<i/2;j++){
            if(i%j==0){
                l++;
                break;
            }
        }
        if(l==0){
            sum+=i;
        }
    }
    printf("%d ",sum);
}
