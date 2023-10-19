void Common_In_3_Sorted_Array(int a[],int b[],int c[],int x,int y, int z){
    int i=0,j=0,k=0;
    while(i<x && j<y && k<z){
        if((a[i] == b[j]) && (b[j]==c[k])){
            cout<<a[i]<<" ";
            i++;
            j++;
            k++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<c[k]){
            j++;
        }
        else{
            k++;
        }
    }
}
