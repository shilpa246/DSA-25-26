class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0,ans=-1;
        int e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        int s1=0,ans1=-1;
        int e1=nums.size()-1;
        while(s1<=e1){
            int mid=s1+(e1-s1)/2;
            if(nums[mid]==target){
                ans1=mid;
                s1=mid+1;
            }
            else if(nums[mid]>target){
                e1=mid-1;
            }
            else{
                s1=mid+1;
            }
        }
        return {ans,ans1};
    }
};