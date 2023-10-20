int minimize_height(int a[],int n,int k){
    sort(a,a+n);
    int ans=a[n-1] - a[0];

    int tempmin=a[0];
    int tempmax=a[n-1];

    for(int i=1;i<n;i++){

        if(a[i]-k<0)
        continue;

        tempmin = min(a[0]+k,a[i]-k);
        tempmax = max(a[n-1]-k,a[i-1]+k);

        ans = min(ans,tempmax-tempmin);

    }
    return ans;
}
