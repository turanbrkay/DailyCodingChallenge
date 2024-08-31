



#if 0
#include <vector>
int tribonacci(int n) {
    if (n==0 || n==1 || n==2) {
        return (n==0 ? 0 : (n==1 ? 1 : 1));
    }
    int first=0,second=1,third=1;
    for (int i=3; i<n ; i++) {
        int sum = first+second+third;
        first = second;
        second = third;
        third = sum;
    }

    return first+second+third;



}



#endif
