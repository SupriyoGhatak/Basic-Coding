#include<iostream>
#include<math.h>

using namespace std;


int sum_array_max(int arr[],int n)
{
    int ans=arr[0],sum=0;
    int s,e;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>ans){
            ans=sum;
            e=i;
        }
        if(sum<0){
            sum=0;
            s=i+1;
        }
    }

    cout<<s<<" "<<e<<"\n";

    return ans;
}

int main(){

    int a[]={-6,2,3,-1,0,-2};

    int n=sizeof(a)/sizeof(int);

    int p=sum_array_max(a,n);

    cout<<p;

}
