




#if 0
#include <vector>
#include <iostream>
void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {

    int i = m-1;
    int j = n-1;
    int k = m+n-1;

    while (j>=0) {
        if (i>=0 && nums1[i]>nums2[j]) {
            nums1[k] = nums1[i--];
        }else {
            nums1[k] = nums2[j--];
        }
        k--;
    }


}

int main() {
    std::vector<int> num1 = {0};
    std::vector<int> num2 = {1};

    merge(num1,0,num2,1);


}


#endif

/*std::vector<int> temp(n+m, 0);
int num1Pointer=0, num2Pointer=0;

for (int i=0; i<m+n ; i++) {
    if (num1Pointer < m && (num2Pointer >= n || nums1[num1Pointer] <= nums2[num2Pointer])) {
        temp[i] = nums1[num1Pointer++];
    }else if (num2Pointer < n) {
        temp[i] = nums2[num2Pointer++];
    }
}

for (int i=0; i<m+n ; i++) {
    nums1[i] = temp[i];
}*/