#include <bits/stdc++.h> 
int findMinDiff(int n, int m, vector<int> chocolates) {
    // Write your code here.
    sort(chocolates.begin(),chocolates.end());
    int i=0;
    int j=i+m-1;
    int min_diff=INT_MAX;
    while(j<n){
        min_diff=min(min_diff,chocolates[j]-chocolates[i]);
        i++;
        j++;
    }
    return min_diff;
}
