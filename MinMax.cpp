#include<iostream>
#include<limits.h>
using namespace std;

void Max_Min(int arr[],int n){
    int Max=INT_MIN;
    int Min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>Max){
            Max=arr[i];
        }
        if(arr[i]<Min){
            Min=arr[i];
        }
    }
    cout<<Max<<" "<<Min<<" ";
}

int main(){
    int arr[]={-1,0,1,2,-1,-4};
    int size=sizeof(arr)/sizeof(arr[0]);
    Max_Min(arr,size);
    return 0;
}
