class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int cumSum    = 0;
        int normalSum = 0;

        int count = 0;
        for(int i = 0; i < n; i++) {
            cumSum += arr[i];
            normalSum += i;
            if(cumSum == normalSum) {
                count++;
            }
        }

        return count;
    }
};