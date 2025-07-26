//Remove duplicates inplace from sorted 
//bruteforce
 int dupli(int arr[],int a){
    set<int>st;
    for(int i=0;i<a;i++){
        st.insert(arr[i]);
    }
    int index=0;
    for(auto it:st){
        arr[index]= it;
        index++;

    }
    return index;
 }
//optimal
int dupli1(int arr[],int a){
    int i=0;
    for(int j=1;j<a;j++){
        if(arr[j]!= arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
        
    }
    return i+1;
}
 int main() {
    int n;
    cin >> n;

    int ar[n ];
    for (int i = 0; i <n; i++) {
        cin >> ar[i];
    }

    int newS=dupli1(ar, n);
    for (int i = 0; i <newS; i++) {
        cout<< ar[i]<<endl;
    }  

    return 0;
}
