class Solution {
public:
    string largestOddNumber(string num) {
        //TC=O(N), SC=O(1)
        int idx = -1;
        for(int i=num.length()-1; i>=0; i--) {
            if((num[i] - '0') % 2 == 1) {
                idx = i;
                break;
            }
        }
        if(idx == -1) return "";
        return num.substr(0, idx+1);
    
        //TC=O(N), SC=O(N)
        /*
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
        */
    }
       
};