void Palindrome_Array(int arr[],int n){
    int j=n-1;
    int flag=0;
    for(int i=0;i<n/2;i++){
        if(arr[i]==arr[j]){
            j--;
            flag++;
        }
        else{
            cout<<"Not Palindrome";
            break;
        }
    }
    if(flag==n/2)
    cout<<"palindrome";
}
