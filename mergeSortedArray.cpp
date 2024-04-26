#include<iostream>
using namespace std;
void merged(int a[],int b[], int c[], int m,int n){
    int i=0,j=0,r=0;
 while(i<m && j<n){
    if(a[i]<b[j]){
        c[r]=a[i];//can also do c[r++]=a[i++]
        i++;
        r++;
    }
    else{
        c[r]=b[j];
        j++;
        r++;
    }
 }
 
 while(i<m){
    c[r]=a[i];
    i++;
    r++;
 }
 
 while(j<n){
    c[r]=b[j];//
    j++;
    r++;
 }
    
}

void display(int ans[],int size){
    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[5] ={1,3,5,7,9};// ans = [1,2,3,4,5,6,8]
    int b[4] ={2,4,6,8};
    int c[9] ={0};
    
    cout<<"After merging the sorted array: "<<endl;
    merged(a,b,c,5,4);
    display(c,9);
    

}