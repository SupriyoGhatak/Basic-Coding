#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char X[20],Y[20];
    gets(X);
    gets(Y);

    int m=strlen(X);
    int n=strlen(Y);

    printf("%d",m);

    lcs(X,Y,m,n);
}

int max(int a,int b){

    if(a>b)
        return a;
    else
        return b;
}

void lcs(char *X,char *Y,int m, int n){

    int l[m+1][n+1];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0|| j==0)
                l[i][j]=0;
            else if(X[i-1]==Y[i-1])
                l[i][j]=l[i-1][j-1]+1;
            else
                l[i][j]=max(l[i][j-1],l[i-1][j]);
        }
    }

    int index=l[m][n];
    char array[index+1];

    array[index]='\0';

    int i=m;
    int j=n;
    while(i>0 && j>0){
        if(X[i-1]==Y[j-1]){
            array[index-1]=X[i-1];
            i--;
            j--;
            index--;
        }
        else if(l[i-1][j]>l[i][j-1])
            i--;
        else
            j--;
    }

    printf("The Word is %s",array);
}
