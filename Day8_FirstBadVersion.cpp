//
// Created by turan on 8/18/2024.
//

#if 0


bool isBadVersion(int n) {
    if (n == 4 || n == 5)
        return false;

    return true;
}
int firstBadVersion(int n) {
    if (n==1)
        return n;

    int lower=1, upper=n;


    while (lower<=upper) {
        int mid = lower + ((upper-lower)/2);

        if (isBadVersion(mid)==true) {

            lower = mid+1;
        }else {

            upper = mid-1;
        }

    }


    return lower;

}

int main() {
    firstBadVersion(5);
}


#endif