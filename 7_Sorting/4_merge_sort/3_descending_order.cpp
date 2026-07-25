#include<iostream>
#include<vector>
using namespace std;
void merge(int a[],int b[],int res[],int n1,int n2){
    int i = 0;   //in a,b,c
    int j = 0;
    int k = 0;
    while(i<n1 && j<n2){
        if(a[i]>b[j]){   // >= when both arrays have common elements and incase if decreasing <= occurs
            res[k] = a[i];
            i++;
            k++;
        }
        else{  // a[i]<=b[j]
            res[k] = b[j];
            k++;
            j++;
        }
    }
    if(i == n1){  // a is full then take elements of b in res
        while(j<n2){
            res[k] = b[j];
            k++;
            j++;
        }
    }
    
    if(j == n2){
        while(i<n1){
            res[k] = a[i];
            i++;
            k++;
        }
    }
}
int  main(){

    int arr[]  = {4,3,2,1};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    // vector<int>a(arr,arr+n1);   //copy the array into the vector 
    int brr[] = {23,12,7,5,6,};
    int n2 = sizeof(brr)/sizeof(brr[0]);
    int res[n1+n2];
    int n3 = sizeof(res)/sizeof(res[0]);
    // vector<int>b(brr,brr+n2);
    // vector<int>res(n1+n2); 

    merge(arr,brr,res,n1,n2);

    for(int i = 0; i<n3;i++){
        cout<<res[i]<<" ";

    }


}
