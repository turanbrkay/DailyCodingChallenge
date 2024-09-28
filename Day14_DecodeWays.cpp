

#include <vector>
#if 0
#include <iostream>

int numDecodings(std::string s) {
        int n = s.size();
        if (s.at(0) == '0')
                return 0;

        std::vector<int> dp(n+1,0);
        dp[0] = 1;
        dp[1] = 1;

        for (int i=1; i<n ; i++) {
                if (s.at(i) == '0') {
                        if (s.at(i-1) == '1' || s.at(i-1) == '2') {
                                dp[i+1] = dp[i];
                        }else {
                                return 0;
                        }
                }else {
                        if ((s.at(i-1) == '1' || s.at(i-1) == '2') && s.at(i) < '7') {
                                dp[i+1] = dp[i-1]+2;
                        }else {
                                dp[i+1] = dp[i];
                        }
                }


        }

        return dp[n];
}

int main() {
        std::string s = "10";

        numDecodings(s);

}

#endif
