void Min_Swaps(int arr[],int n,int k){
    int bad=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            count++;
        }
    }
    for(int i=0;i<count;i++){
        if(arr[i]>k){
            bad++;
        }
    }
    int ans=bad;
    int i=0;
    int j=0;
    for(i=0,j=count;j<n;i++,j++){
        if(arr[i]>k){
            bad--;
        }
        if(arr[j]>k){
            bad++;
        }
        ans = min(ans,bad);
    }
    cout<<ans;
}
