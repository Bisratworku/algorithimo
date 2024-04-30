//=nb
#include <iostream>
using namespace std;

int Find_the_max_crossing_subarray(int arr[], int low, int mid, int high){
    int  left_sum = -100000000;
    int left_max = 0;
    int l_sum = 0;
    for(int i = mid; i >= low; i--){
        l_sum += arr[i];
        if(l_sum > left_sum){
            left_sum = l_sum;
            left_max = i;
        }
    }
    int right_sum = -10000000;
    int right_max = 0;
    int r_sum = 0;
    for(int i = mid + 1; i <= high; i++){
        r_sum += arr[i];
        if(r_sum > right_sum){
            right_sum = r_sum;
            right_max = i;
        }

    }
    return (left_max, right_max, left_sum + right_sum);
}

int main(){
    int arr[10] = {2,4,6,8,10,1,9,7,3,5};
    Find_the_max_crossing_subarray(arr, 0, 5, 10);
    
    return 0;

}