/*
 *  Problem Statement
 *
 *  Given a square matrix of size N×N, calculate the absolute difference between
 *  the sums of its diagonals.
 *
 *  Input Format
 *  The first line contains a single integer, N. The next N lines denote the
 *  matrix's rows, with each line containing N space-separated integers
 *  describing the columns.
 *
 *  Output Format
 *  Print the absolute difference between the two sums of the matrix's diagonals
 *  as a single integer.
 *
 *  Sample Input
 *  3
 *  11 2 4
 *  4 5 6
 *  10 8 -12
 *
 *  Sample Output
 *  15
 *
 *  Explanation
 *  The primary diagonal is:
 *  11
 *      5
 *          -12
 *  Sum across the primary diagonal: 11 + 5 − 12 = 4
 *  The secondary diagonal is:
 *          4
 *      5
 *  10
 *  Sum across the secondary diagonal: 4 + 5 + 10 = 19
 *  Difference: |4 − 19| = 15
 */
// g++ diagonal-difference.cpp -o diagonal-difference.out -std=gnu++11
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#define DEBUGGING_MODE false

using namespace std;

int diagonalDifference(const vector<vector<int>> &v) {
    int sum_d1=0, sum_d2=0, difference=0;
    for(int i=0; i<v.size(); i++) {
      if(i<v[i].size()) {
        sum_d1 += v[i][i];
      }
    }
    if(DEBUGGING_MODE) cout << "Primary diagonal sum " << sum_d1 << endl;
    for(int i=0, j=v[i].size()-1; i<v.size(), j>=0; i++, j--) {
      if(j<v[i].size()) {
        sum_d2 += v[i][j];
        if(DEBUGGING_MODE) cout << "sum_d2=" << sum_d2 << endl;
      }
    }
    if(DEBUGGING_MODE) cout << "Secondary diagonal sum " << sum_d2 << endl;
    difference = abs(sum_d1 - sum_d2);
    return difference;
}

int main(int argc, char **argv) {
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i=0; a_i<n; a_i++) {
       for(int a_j=0; a_j<n; a_j++){
          cin >> a[a_i][a_j];
       }
    }
    cout << diagonalDifference(a) << endl;
    return 0;
}
