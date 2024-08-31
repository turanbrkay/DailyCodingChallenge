


#if 0
#include <complex>
#include <vector>

int numSquares(int n) {
    std::vector<int> dp;
    dp.reserve(n);

    for (int i=0; i<n; i++) {
        dp[i] = i;

        for (int j=1; j*j < i; j++) {
            dp[i] = std::min(dp[i],1+dp[i-j*j]);
        }
    }

    return dp[n];
}

int main () {
    numSquares(12);
}


#endif
