class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        map<int, int> count;
        for(int num : nums) {
            count[num]++;
        }

        for(auto pair : count) {
            if(pair.second > n / 2) {
                return pair.first;
            }
        }
        return -1;
    }
};