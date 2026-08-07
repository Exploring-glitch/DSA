class Solution {
public:
    string largestOddNumber(string num) {
        //TC=O(), SC=O()
        int idx = -1;
        for(int i=num.length()-1; i>=0; i--) {
            if((num[i] - '0') % 2 == 1) {
                idx = i;
                break;
            }
        }

        int i=0;
        string ans;
        while(i <= idx) {
            ans += num[i];
            i++;
        }
        return ans;
    }
};