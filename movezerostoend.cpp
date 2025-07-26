void movezero(int arr[],int a){
    vector<int>temp;
    for(int i=0;i<a;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];

    }
    for(int i=temp.size();i<a;i++){
        arr[i]=0;
    }
}
int main() {
    int n;
    cin >> n;
    
    int ar[n ];
    for(int i = 0; i <n; i++) {
        cin>> ar[i];
    }

    movezero(ar,n);
    for(int i = 0; i <n; i++) {
        cout<< ar[i]<<endl;
    }  

    return 0;
}
