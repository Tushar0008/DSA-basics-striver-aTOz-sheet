
//unioun of twom sroted arrays
//brute
void unionarr(int arr[],int arr1[],int a,int b){
    set<int>st;
    vector<int>uni;
    for(int i=0;i<a;i++){
        st.insert(arr[i]);
    }
    for(int i=0;i<b;i++){
        st.insert(arr1[i]);
    }
    for(auto it:st){
        uni.push_back(it);
    }
    for (int x : uni) {
        cout << x << " ";
    }
    cout << endl;
}
//optimal
void unionarr1(int arr[],int arr1[],int a,int b){
    int i=0,j=0;
    vector<int>uni;
    while(i<a && j<b){
        if(arr[i]<=arr1[j]){
            if( uni.size()==0  ||  uni.back()!=arr[i]){
                uni.push_back(arr[i]);
                
            }
            i++;
        }
        else{
            if(uni.size()==0    ||   uni.back()!=arr1[j] ){
                uni.push_back(arr1[j]);
                
            }
            j++;
        }
    }
    while(i<a){
        if(uni.size()==0   || uni.back()!=arr[i] ){
                uni.push_back(arr[i]);
                
            }
            i++;
    }
    while(j<b){
        if(uni.size()==0   || uni.back()!=arr1[j]  ){
                uni.push_back(arr1[j]);
                
            }
            j++;
    }
    for(int i=0;i<uni.size();i++){
        cout<<uni[i]<<" ";
    }
}
int main() {
    int n;
    cin >> n;
    int ar[n ];
    for(int i = 0; i <n; i++) {
        cin>> ar[i];
    }

    int m;
    cin >> m;
    int ar1[m ];
    for(int i = 0; i <m; i++) {
        cin>> ar1[i];
    }

    unionarr1(ar,ar1,n,m);
    

    
