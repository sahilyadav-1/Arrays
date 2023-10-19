void Union1(int arr[],int n,int arr1[],int m){
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr[i]<arr1[j]){
            if((arr[i] != arr[i-1])){
                cout<<arr[i]<<" ";
            }
            i++;
        }
        else if(arr[i]==arr1[j]){
            if((arr[i] != arr[i-1]) ){
                cout<<arr[i]<<" ";
            }
            i++;
            j++;
        }
        else if(arr[i]>arr1[j]){
            if((arr1[j] != arr1[j-1]) ){
                cout<<arr1[j]<<" ";
            }
            j++;
        }
    }
    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }
    while(j<m){
        cout<<arr1[j]<<" ";
        j++;
    }
}
