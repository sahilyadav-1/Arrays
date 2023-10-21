#include<iostream>
#include<limits.h>
using namespace std;

int Kadane (int arr[],int n){
    int MaximumEndingHere = 0;
    int MaximumSoFar = INT_MIN;

    for(int i=0;i<n;i++){
        MaximumEndingHere+=arr[i];

        if(MaximumSoFar < MaximumEndingHere){
            MaximumSoFar=MaximumEndingHere;
        }

        if(MaximumEndingHere<0){
            MaximumEndingHere=0;
        }
    }
    return MaximumSoFar;
}

int MaxCircularSum(int arr[],int n){
    int max_Kadane = Kadane(arr,n);

    if(max_Kadane<0){
        return max_Kadane;
    }

    int max_wrap=0;
    for(int i=0;i<n;i++){
        max_wrap+=arr[i];
        arr[i]=-arr[i];
    }

    max_wrap+=Kadane(arr,n);

    return(max_wrap>max_Kadane)?max_wrap:max_Kadane;
}

int main(){
    int arr[]={11, 10, -20, 5, -3, -5, 8, -13, 10};
    
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<MaxCircularSum(arr,n);

    return 0;
}
