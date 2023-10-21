#include<iostream>
#include<limits.h>
using namespace std;

// min sum subarray circular wale me use hoga
void minsumkadane(int arr[], int n){
    
    int curr_min = arr[0];
    int MinimumSoFar = arr[0];

    for(int i = 1; i < n; i++){
        //cout<<"curr_min = "<<curr_min<<endl;
        curr_min = min(curr_min+arr[i], arr[i]);
        //cout<<"Minimum so far = "<<MinimumSoFar<<endl;
        MinimumSoFar = min(MinimumSoFar, curr_min);
    }
    cout<< MinimumSoFar<<endl;
}

void Kadane1(int arr[], int n){
    int curr_max = arr[0];
    int MaximumSoFar = arr[0];

    for(int i = 1; i < n; i++){
        //cout<<"curr_max = "<<curr_max<<endl;
        curr_max = max(curr_max+arr[i], arr[i]);
        //cout<<"Maximum so far = "<<MaximumSoFar<<endl;
        MaximumSoFar = max(MaximumSoFar, curr_max);
    }
    cout<< MaximumSoFar<<endl;
}

void Kadane (int arr[],int n){
    int MaximumEndingHere = 0;
    int MaximumSoFar = INT_MIN;
    int s=0,start=0,end=0;

    for(int i=0;i<n;i++){
        MaximumEndingHere+=arr[i];

        if(MaximumSoFar < MaximumEndingHere){
            MaximumSoFar=MaximumEndingHere;
            start=s;
            end=i;
        }

        if(MaximumEndingHere<0){
            MaximumEndingHere=0;
            s=i+1;
        }
    }
    cout<<MaximumSoFar<<endl;
    for(int j=start;j<=end;j++){
        cout<<arr[j]<<" ";
    }
}

int main(){
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    Kadane(arr,n);
    cout<<endl;
    Kadane1(arr,n);
    
    int a[] = { 11, 10, -20, 5, -3, -5, 8, -13, 10 };
    int n1 = sizeof(a) / sizeof(a[0]);
    minsumkadane(a,n1);
    
}