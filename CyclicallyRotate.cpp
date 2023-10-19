#include<iostream>
using namespace std;

void Cyclically_Rotate(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i!=j){
        swap(arr[i],arr[j]);
        i++;
    }
}

int main(){
    int arr[]={-1,0,1,2,-1,-4};
    int size=sizeof(arr)/sizeof(arr[0]);
    Cyclically_Rotate(arr,size);
    return 0;
}
