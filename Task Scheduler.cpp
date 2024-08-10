class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int s = tasks.size();
        int maxFreq = 0;
        vector<int> frequency(26, 0);
        for (int i = 0; i < s; i++) {
            frequency[tasks[i] - 'A']++;
            maxFreq = max(maxFreq, frequency[tasks[i] - 'A']);
        }
        int ans = (maxFreq - 1) * (n + 1);
        for (int i = 0; i < 26; i++) {
            if (frequency[i] == maxFreq)
                ans++;
        }

        return max(ans, s);
    }
};
