//
// Created by turan on 8/19/2024.
//


#if 0 //DP


int climbStairs(int n) {
    if(n == 1 || n==2)
        return n;

    int back=1,front=2;

    for(int i=3; i<n ; i++) {
        int temp = front;
        front = back+front;
        back = temp;
    }
    return back+front;
}




#endif