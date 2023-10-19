bool Subarray_Zero_Sum(int a[],int n){
    unordered_set<int> sumset;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==0 || sumset.find(sum)!=sumset.end())
        {
            return true;
        }
        sumset.insert(sum);
    }
    return false;
}
