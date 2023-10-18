#include<iostream>
using namespace std;

void Reverse(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    int arr[]={-1,0,1,2,-1,-4};
    int size=sizeof(arr)/sizeof(arr[0]);
    Reverse(arr,size);
    return 0;
}
