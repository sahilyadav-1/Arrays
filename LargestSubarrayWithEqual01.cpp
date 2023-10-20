int largest_subarray_01(int a[],int n){

    unordered_map<int,int> hM;

    int maxlength = 0;
    int endindex=-1;
    int sum=0;

    for(int i=0;i<n;i++){
        a[i] = (a[i]==0)?-1:1;
    }

    for(int i=0;i<n;i++){
        sum+=a[i];

        if(sum==0){
            maxlength=i+1;
            endindex=i;
        }

        if(hM.find(sum)!=hM.end()){
            if(maxlength<i-hM[sum]){
                maxlength=i-hM[sum];
                endindex=i;
            }
        }
            else{
                hM[sum]=i;
            }
    }
        for(int i=0;i<n;i++){
            a[i]=(a[i]==-1)?0:1;
        }

        printf("%d to %d\n",endindex-maxlength+1,endindex);

        return maxlength;
}
