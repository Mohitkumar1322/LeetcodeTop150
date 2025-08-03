class Solution {
public:
    void reverse(vector<int>& nums,int low,int high){
        while(low<high){
            swap(nums[low],nums[high]);
            low++;
            high--;
        }
    }
    //here i have form an reverse function which will reverse the array with particular condition
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k = k % n;
        //just doing the modulus so that it dont go out of bound 
    reverse(nums, 0, n - 1);
    //first reverse the entire array 
    //example array [7,6,5,4,3,2,1] k=3
    reverse(nums, 0, k - 1);
    //third pass [5,6,7,4,3,2,1];


    reverse(nums, k, n - 1);

    //fourth pass [5,6,7,1,2,3,4]
        
    }
};