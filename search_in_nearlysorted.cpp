#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search_in_nearly_sorted(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int location = -1;
        while (start <= end){
            int mid = start + (end - start)/2;
            if (nums[mid] == target){
                return mid;
            }
            if (mid +1 <= end and nums[mid+1] == target){
                return mid + 1;
            }
            if (mid -1 >= start and nums[mid -1] == target){
                return mid - 1;
            }
            else if (mid - 2 >= start and target < nums[mid-1] ||
            target <nums[mid]){
                end = mid - 2;
            }
            else if (mid+2 <= end and target > nums[mid+1] or target > nums[mid]){
                start = mid + 2;
            }
        }
        return location;

    }
};
int main(){
     vector<int> arr = {10, 3, 40, 20, 50, 80, 70};
     Solution obj;
     cout<< obj.search_in_nearly_sorted(arr, 70);
     return 0;
}
