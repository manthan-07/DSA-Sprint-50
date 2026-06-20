// LeetCode 496: Next Greater Element I

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreat;
        stack<int> st;

        for(int i = nums2.size()-1; i > -1; i--){
            while(!st.empty() && st.top() <= nums2[i]) st.pop();
            nextGreat[nums2[i]] = st.empty() ? -1 : st.top();
            st.push(nums2[i]);
        }

        vector<int> ans;
        for(int num: nums1) ans.push_back(nextGreat[num]);
        return ans;
    }
};