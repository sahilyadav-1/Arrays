bool array_subset(int a[],int b[],int m,int n){
    set<int> s;
    for(int i=0;i<m;i++){
        s.insert(a[i]);
    }

    for(int i=0;i<n;i++){
        if(s.find(b[i])==s.end())
            return false;
    }
    return true;
}
