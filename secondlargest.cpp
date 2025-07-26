//second largest bruteforce
void slargest(int arr[], int a) {
     sort(arr, arr + a);
     int largest=arr[a-1];
     int slargest=-1;
     for(int i=a-2;i>=0;i--){
        if(arr[i]!=largest){
            slargest=arr[i];
            break;
        }
     }
     cout<<slargest;
}
//better
void slargest1(int arr[],int a){
    int largest=arr[0];
    for(int i=1;i<a;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }

    }
    int slargest=-1;
    for(int i=0;i<a;i++){
        if(arr[i]>slargest && arr[i]!=largest){
            slargest=arr[i];
        }
    }
    cout<<slargest;
}
//optimal
void slargest2(int arr[],int a){
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<a;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    cout<<slargest;
}
