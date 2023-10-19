#include<iostream>
using namespace std;

void Duplicate_In_N_Plus_One(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int s=arr[n-1];
    int sum1=(s*(s+1))/2;
    int duplicate=sum-sum1;
    cout<<duplicate;
}

int main(){
    int arr[]={1,2,3,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    Duplicate_In_N_Plus_One(arr,size);
    return 0;
}
