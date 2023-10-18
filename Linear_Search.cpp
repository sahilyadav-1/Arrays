#include<iostream>
using namespace std;

void Linear_Search(int arr[],int n){
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            cout<<"Found at "<<i<<endl;
        }
    }
}

int main(){
    int arr[]={-1,0,1,2,-1,-4};
    int size=sizeof(arr)/sizeof(arr[0]);
    Linear_Search(arr,size);
    return 0;
}
