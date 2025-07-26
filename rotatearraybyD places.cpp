//rotate array by d places 
void rotatebyd(int arr[],int a,int d){
    d=d%a;
    int temp[d];
    
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<a;i++){
        arr[i-d]=arr[i];
    }
    for(int i=a-d;i<a;i++){
        arr[i]=temp[i-(a-d)]; 
    }
     

}
//optimal
void rotatebyd1(int arr[],int a,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+a);
    reverse(arr,arr+a);
}
int main() {
    int n;
    cin >> n;
    int k;
    cin>>k;
    int ar[n ];
    for(int i = 0; i <n; i++) {
        cin>> ar[i];
    }

    rotatebyd(ar,n,k);
    for(int i = 0; i <n; i++) {
        cout<< ar[i]<<endl;
    }  

    return 0;
}
