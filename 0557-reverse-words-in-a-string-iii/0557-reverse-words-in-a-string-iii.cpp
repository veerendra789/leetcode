class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0, j = 0;

        while (j < n) {

            while (j < n && s[j] != ' ')
                j++;

            int left = i;
            int right = j - 1;

            while (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }

            i = j + 1;
            j = j + 1;
        }

        return s;
    }
};