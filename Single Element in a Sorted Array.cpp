class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> a;
        int b=nums.size();
        for(int i=0;i< b;i++)
            a[nums[i]]++;
        for(int i=0;i<nums.size();i++)
        {
            if(a[nums[i]]==1)
                b= nums[i];
        }
        
        return b;
    }
    
};
