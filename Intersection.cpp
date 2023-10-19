void Intersection(int arr[],int n,int arr1[],int m){
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr[i]==arr1[j]){
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
        else if(arr[i]<arr1[j]){
            i++;
        }
        else{
            j++;
        }
    }
}
