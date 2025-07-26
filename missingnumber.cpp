//missing number
int miss(int arr[],int N,int size){
    for(int i=1;i<=N;i++){
        int flag=0;
        for(int j=0;j<=size-1;j++){
            if(arr[j]==i){
                flag=1;
                break;

            }
            
        }
        if(flag==0)return i;
    }
}
//better
int miss1(int arr[],int N,int size){
    int hash[N+1]={0};
    for(int i=0;i<size;i++){
        hash[arr[i]]=1;
    }
    for(int i=1;i<N;i++){
        if(hash[i]==0)return i;
    }
}
//optimal 1
int miss2(int arr[],int N,int size){
    int sum1=(N*(N+1))/2;
    int sum2=0;
    for(int i=0;i<size;i++){
        sum2+=arr[i];
    }
    int sum=sum1-sum2;
    return sum;
}
//optimal 2 using xor

int miss3(int arr[],int N,int size){
    int xor1=0,xor2=0;
    for(int i=1;i<=N;i++){
        xor1=xor1^i;
    }
    for(int i=0;i<size;i++){
        xor2=xor2^arr[i];
    }
    int xor3=xor1^xor2;
    return xor3;
}
//more optimizing using xor
int miss4(int arr[],int N,int size){
    int xor1=0,xor2=0;
    
    for(int i=0;i<size;i++){
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^N;
    int xor3=xor1^xor2;
    return xor3;
}
int main() {
    int n;
    cin >> n;
    int ar[n-1];
    for(int i = 0; i <n-1; i++) {
        cin>> ar[i];
    }

    

    cout<<miss4(ar,n,n-1);
    

    return 0;
}
