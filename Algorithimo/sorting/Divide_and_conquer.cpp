//=nb
#include <iostream>
using namespace std;

int Find_Max_Subarray(int a[], int high, int low){
    if(high == low){
        return low, high;
    }else{
        int mid = (high + low)/2;
        int max_l = 0;
        for(int i = mid; i >= 0; i--){
            max_l += a[i];
        }
        int max_r = 0;
        for(int j = mid + 1 ; j <= high; j++){
            max_r += a[j];
        }
        if(max_r > max_l){
            return Find_Max_Subarray(a, high , low + mid );
        }
        else{
            return Find_Max_Subarray(a, high - mid, low);
        }
    }
    return 0;
}


int main(){    
    int arr[5] = {1,2,3,4,5};
    int low, high = Find_Max_Subarray(arr, 4, 0);
    //cout<<low<<endl;
    //cout<<high<<endl;
    return 0;

}