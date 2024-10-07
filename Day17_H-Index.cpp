

#include <algorithm>
#if 0

#include <vector>

int hIndex(std::vector<int>& citations) {
    int n = citations.size();
    std::sort(citations.begin(),citations.end());

    for (int i=0; i<n; i++) {
        if (n-i <= citations.at(i))
            return n-i;
    }

}




#endif
