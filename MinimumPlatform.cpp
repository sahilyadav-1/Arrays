int minimum_platform(int a[],int d[],int n){
    sort(a,a+n);
    sort(d,d+n);

    int i=1;
    int j=0;
    int platform_needed=1;
    int result=1;

    while(i<n && j<n){
        if(a[i]<=d[j]){
            platform_needed++;
            i++;
        }

        else if(d[j] < a[i]){
            platform_needed--;
            j++;
        }
        if(platform_needed>result)
            result=platform_needed;
    }
    return result;
}
