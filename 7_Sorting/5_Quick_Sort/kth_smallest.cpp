#include<iostream>
using namespace std;
int partition(int arr[], int si , int ei){
    int pivotElement = arr[(si+ei)/2];
    int count = 0;    // task 1
    for(int i = si; i<=ei; i++){   // find pivot index and put the first index element into that pivot place
        if(i == (si+ei)/2) continue;
        if(arr[i] <= pivotElement) count++;
    }
    int pivotIdx = count + si; // after knowing the pivot index make the element in place of that index

    swap(arr[(si+ei)/2],arr[pivotIdx]);  //task 2
    // now arrange the elements around that pivot elements , shorter and longer ones on left and right

    int i = si;
    int j = ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;  
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;

}
int kthsmallest(int arr[], int si, int ei,int k){
    int pi = partition(arr,si,ei);      // return the pivot ele
    if(pi+1==k) return arr[pi];   //base condtion 
    else if(pi+1 < k) return kthsmallest(arr,pi+1,ei,k);
    else return kthsmallest(arr,si,pi-1,k);
}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 4;

    cout<<kthsmallest(arr,0,n-1,k);    //returning starting index and ending index
}