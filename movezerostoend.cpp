//brute
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



//optimal
void movezero1(int arr[],int a){
    int j=-1;
    for(int i=0;i<a;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<a;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main() {
    int n;
    cin >> n;
    
    int ar[n ];
    for(int i = 0; i <n; i++) {
        cin>> ar[i];
    }

    movezero1(ar,n);
    for(int i = 0; i <n; i++) {
        cout<< ar[i]<<endl;
    }  

    return 0;
}
