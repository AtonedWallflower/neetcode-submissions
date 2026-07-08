class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int i=0;
        int j=numbers.size()-1;
        int diff=0;
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                ans.emplace_back(i+1);
                ans.emplace_back(j+1);
                return ans;
            }
            else if(numbers[i]+numbers[j]>target) j--;
            else i++;
        }
        return ans;
    }
};
