void Triplet_Sum(int arr[],int n,int target){
    int sum=0;
    sort(arr,arr+n);
    int j,k;

    for(int i=0;i<n;i++){
        j=i+1;
        k=n-1;
        int first = arr[i];
        int newtarget = target - first;
        while(j<k){
          sum = arr[j]+arr[k];
          if(sum == newtarget)
          {
              cout<< arr[i] << " " << arr[j] << " " << arr[k]<< " " <<endl;
          }
          if(sum > newtarget){
              k--;
          }
          else{
              j++;
          }
      }
    }
}
