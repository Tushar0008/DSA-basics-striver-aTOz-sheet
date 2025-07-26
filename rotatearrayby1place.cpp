//rotate array by one place
void rotate(int arr[],int a){
    int temp=arr[0];
    for(int i=1;i<a;i++){
        arr[i-1]=arr[i];
    }
    arr[a-1]=temp;
    for (int i = 0; i <a; i++) {
        cout<< arr[i]<<endl;
    }  
}
int main() {
    int n;
    cin >> n;

    int ar[n ];
    for (int i = 0; i <n; i++) {
        cin >> ar[i];
    }

    rotate(ar,n);
    //for (int i = 0; i <n; i++) {
    //    cout<< ar[i]<<endl;
    //}  

    return 0;
}
