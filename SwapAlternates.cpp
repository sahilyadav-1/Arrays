#include<iostream>
using namespace std;

void Swap_Alternates(int arr[],int n){
    int i=0;
    int j=1;
    while(i<n && j<n){
        swap(arr[i],arr[j]);
        i+=2;
        j+=2;
    }
}

int main(){
    int arr[]={-1,0,1,2,-1,-4};
    int size=sizeof(arr)/sizeof(arr[0]);
    Swap_Alternates(arr,size);
    return 0;
}
