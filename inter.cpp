#include<iostream>
using namespace std;

int main(){
    int n = 8;
    int arr[8] = {1,5,9,2,7,10};
    //sort()
    int s = 0;
    int e = n - 1;
    int target = 3;
    int mid;

    while(s <= e){  // Change to while(s <= e)
        mid = (s + e) / 2;

        if(arr[mid] == target){
            cout << "Target found at index: " << arr[mid] << endl;  // Output the result
            return 0;  // Exit after finding the target
        }
        else if(arr[mid] < target){
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    cout << "Target not found" << endl;  // If target is not found
    return 0;
}
