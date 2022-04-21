class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeros = 0, s = nums.size();
        vector<int>temp;
        for(int i=0; i<s; i++)
        {
            if(nums[i] != 0) temp.push_back(nums[i]);
            else zeros++;
        }
        for(int i=0; i<zeros; i++) temp.push_back(0);
        nums.clear();
        for(int i=0; i<s; i++)
        {
            //cout<<temp[i]<<" ";
            nums.push_back(temp[i]);
        }
        temp.clear();
    }
};
