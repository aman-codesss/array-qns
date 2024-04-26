#include<iostream>
using namespace std;
int ans(int arr[],int size,int t){
    int c=0;
    for(int i=0;i<size;i++) {
        if(arr[i]>=t){
            c++;
        }
    }
    return c;
}
int main(){
    int arr[6]={19,20,3,28,4,89};
    int target = 20;
    cout<<"The number of element greater than target in the array: "<<ans(arr,6,target)<<endl;
}