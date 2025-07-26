//intersection nof two sorted arrays
//brute
int inter(int arr[],int arr1[],int a,int b){
    vector<int>ans;
    int vis[b]={0};
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i]==arr1[j]  && vis[j]==0){
                ans.push_back(arr[i]);
                vis[j]=1;
                break;
            }
            if(arr1[j]>arr[i])break;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

//optimal
int inter1(int arr[],int arr1[],int a,int b){
    vector<int>ans;
    int i=0,j=0;
    while(i<a && j<b){
        if(arr[i]<arr1[j]){
            i++;
        }
        else if(arr1[j]<arr[i]){
            j++;
        }
        else{
            ans.push_back(arr[i]);
            i++;
            j++;
        }
        
    }
    for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
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

    inter1(ar,ar1,n,m);
    

    return 0;
}
