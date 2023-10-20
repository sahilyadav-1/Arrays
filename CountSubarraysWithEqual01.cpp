int Equal_0_1(int a[],int n){
    map<int,int>mp;
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)
        a[i]=-1;
        sum+=a[i];
    if(sum==0){
        count++;
    }
    if(mp[sum]){
        count+=mp[sum];
    }

    if(mp[sum]==0)
    mp[sum]=1;
    else
    mp[sum]++;
    }
    return count;
}
