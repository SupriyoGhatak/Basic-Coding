#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    int  flag;

    if(a==0){
        a+=2;
    }
    while(a<b){
            flag=0;
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            flag=1;
            break;
        }
    }
        if(flag==0){
            cout<<a<<" ";
        }
    a++;
    }
}
