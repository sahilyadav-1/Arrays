APPROACH 1 -

int findPlatform(int arr[], int dep[], int n)
{
    vector<pair<int, int> > arr2(n);
 
    for (int i = 0; i < n; i++) {
        arr2[i] = { arr[i], dep[i] };
    }

    sort(arr2.begin(), arr2.end());
 
    priority_queue<int, vector<int>, greater<int> > p;
    int count = 1;
    p.push(arr2[0].second);
 
    for (int i = 1; i < n; i++) {
        if (p.top() >= arr2[i].first) {
            count++;
        }
        else {
            p.pop();
        }
        p.push(arr2[i].second);
    }
    return count;
}

APPROACH 2 -

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
