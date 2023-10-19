#include<iostream>
using namespace std;

void Negative_No_To_One_Side(int arr[],int n){
    int i=0;
    int j=0;
    while(j<=n){
        if(arr[j]<0){            
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else{
            j++;
        }
    }
}
int main(){
    int arr[]={-1,0,1,2,-1,-4};
    int size=sizeof(arr)/sizeof(arr[0]);
    Negative_No_To_One_Side(arr,size);
    return 0;
}
