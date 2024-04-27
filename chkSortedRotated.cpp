#include<iostream>
using namespace std;
bool checkSortedRotated(int a[],int n){
    int c=0;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i])
        c++;
    }
    if(a[0]<a[n-1])
    c++;
    return c<=1;
    //sorted got only 7>1
    //rotated got only one pair 7> 1
}
int main(){
    //rotated
    int arr[7]={6,7,1,2,3,4,5};

    // sorted 
    // int arr[7]={1,2,3,4,5,6,7};

    // random 
    // int arr[7]={6,7,2,5,3,1,4};

    // equal
    // int arr[7]={1,1,1,1,1,1,1};
    bool ans =checkSortedRotated(arr,7);
    cout<<ans;

}