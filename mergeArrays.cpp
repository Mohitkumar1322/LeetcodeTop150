class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
        for(int i=0;i<n;i++){
            nums1[i+m]=nums2[i];
            //here i am adding the element in nums1 fromm nums2 and then sorting this will give the array
        }
        sort(nums1.begin(),nums1.end());
    }
};