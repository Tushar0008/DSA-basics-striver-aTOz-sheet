#include<bits/stdc++.h>
using namespace std;
void f(){
    cout<<"1"<<endl;
    f();
}
//print name n times using recursion
void display(int i,int n){
    if(i>n)return;
    cout<<"Tushar"<<endl;
    display(i+1,n);
}
//print from n to 1
void print(int i ,int n){
    if(i<1)return;
    cout<<i<<endl;
    print(i-1,n);
}
// print 1 to n using backtracking
void print2(int i,int n){
    if(i<1)return;
    print2(i-1,n);
    cout<<i<<endl;
}

//print from n to 1 using backtracking
void print3(int i ,int n){
    if(i>n)return;
    print3(i+1,n);
    cout<<i<<endl;
}

//print sum of n numbers
void sum1(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    sum1(i-1,sum+i);
}

//functional recursion
int sum(int n){
    if(n==0)return 0;
    return n+sum(n-1);
}

//factorial
int factorial(int n){
    if(n==1)return 1;
    return n*factorial(n-1);
}
//swapping array using recursion and using 1 pointer only
void swappy(int i,int arr[],int n){
    if(i>=n/2)return;
    swap(arr[i],arr[n-i-1]);
    swappy(i+1,arr,n);

}

//string palimdrome using recursion
bool f(int i,string &s){
    if(i>=s.size()/2)return true;
    if(s[i]!=s[s.size()-i-1])return false;
    return f(i+1,s);
}
//fibonacci using multiple recursion
int f1(int n){
    if(n<=1)return n;
    int last = f1(n-1);
    int slast=f1(n-2);
    return last+slast;
}

int main(){
    //print name n times using recursion
    /*int n;
    cin>>n;
    display(1,n);
    */

    //print from n to 1
   /*int n;
   cin>>n;
   print(n,n);
    */

    //print from 1 to n using backtracking
     //print from n to 1
   /*int n;
   cin>>n;
   print2(n,n);
    */

    //print from n to 1 using backtracking
   /*int n;
   cin>>n;
   print3(1,n);
    */


    //print sum of n numbers
    /*int n;
    cin>>n;
    sum1(n,0);
    */

    //functional recursion
    /*int n;
    cin>>n;
    cout<<sum(n);
    */

    //factorial
    /*int n;
    cin>>n;
    cout<<factorial(n);
    */

    //swapping array using recursion and using 1 pointer only
    /*
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    swappy(0,arr,n);
    for(int i=0;i<n;i++)cout<<arr[i];
    return 0;*/

    //string palimdrome using recursion
    /*string s="madam";
    cout<<f(0,s);
    return 0;
*/
    //fibonacci using multiple recursion
    cout<<f1(4);

}