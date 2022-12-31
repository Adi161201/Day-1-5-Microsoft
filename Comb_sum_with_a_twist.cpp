#include<bits/stdc++.h>

class Solution {
public:
    vector<vector<int>> func(vector<int> &nums , int ind , int sum ,vector<int> &temp, vector<vector<int>> &ans, int count )
    {
        if(sum==0 && count==0)
        {
            ans.push_back(temp);
            return ans;
        }
        if(ind==9)
        {
            if(sum==0 && count==0) {
                ans.push_back(temp);
            }
            return ans;
        }

        //pick
        temp.push_back(nums[ind]);
        func(nums,ind+1,sum-nums[ind],temp,ans,count-1);

        //not-pick
        temp.pop_back();
        func(nums,ind+1,sum,temp,ans,count);

        return ans;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums;
        vector<vector<int>> ans;
        vector<int> temp;
        for(int i=1;i<=9;i++) nums.push_back(i);

        return func(nums,0,n,temp,ans,k);


        
    }
};