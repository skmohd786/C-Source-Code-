#include<iostream>
using namespace std;
int main(){
    int a[] = {1,3,4,5,6,7,8,9,11,17,37};
    int count = 0;
    for(int i = 0;i<sizeof(a)/sizeof(a[0]);i++ ){
        if(a[i] == 1){
            cout<<i<<" is neither prime nor composite"<<endl;
            continue;
        }
        else{
            bool flag = true;
            for(int j = 2; j<a[i]; j++){
                if(a[i]%j == 0){
                    flag = false;
                    break;
                } 
            }
            if(flag == true) count++;
        }
        
    }

cout<<count;
}





