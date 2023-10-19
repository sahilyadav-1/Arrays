void majority_element(int a[],int n){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }

    int c=0;
    for(auto i=m.begin();i!=m.end();i++){
        if((i -> second )> n/2){
            c=1;
            cout<<"exists "<<i -> first;
            break;
        }
    }
    if(c==0){
        cout<<"no";
    }
}
