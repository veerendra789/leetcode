class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());

        // Step 1: Frequency of each number
        vector<long long> freq(mx + 1, 0);
        for (int x : nums)
            freq[x]++;

        // Step 2: exactPairs[g] = pairs with gcd exactly g
        vector<long long> exactPairs(mx + 1, 0);

        // Compute from largest gcd to smallest
        for (int g = mx; g >= 1; g--) {

            // Count numbers divisible by g
            long long cnt = 0;
            for (int multiple = g; multiple <= mx; multiple += g)
                cnt += freq[multiple];

            // Total pairs divisible by g
            long long pairs = cnt * (cnt - 1) / 2;

            // Remove pairs already counted for larger gcds
            for (int multiple = 2 * g; multiple <= mx; multiple += g)
                pairs -= exactPairs[multiple];

            exactPairs[g] = pairs;
        }

        // Step 3: Prefix sum of pair counts
        vector<long long> prefix(mx + 1, 0);
        for (int g = 1; g <= mx; g++)
            prefix[g] = prefix[g - 1] + exactPairs[g];

        // Step 4: Answer queries
        vector<int> ans;
        for (long long q : queries) {
            int g = lower_bound(prefix.begin() + 1, prefix.end(), q + 1) - prefix.begin();
            ans.push_back(g);
        }

        return ans;
    }
};