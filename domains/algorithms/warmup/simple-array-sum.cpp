/*
 * Problem Statement
 *
 * You are given an array of integers of size N. Can you find the sum of the
 * elements in the array?
 *
 * Input
 * The first line of input consists of an integer N. The next line contains N
 * space-separated integers representing the array elements.
 *
 * Sample:
 * 6
 * 1 2 3 4 10 11
 *
 * Output
 * Output a single value equal to the sum of the elements in the array.
 * For the sample above you would just print 31 since 1+2+3+4+10+11=31.
 */
// g++ simple-array-sum.cpp -o simple-array-sum.out -std=gnu++11
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

using namespace std;

int simpleArraySum(const vector<int> &v) {
    int sum=0, v_size=v.size();
    for(int v_i=0; v_i<v_size; v_i++) {
      sum += v[v_i];
    }
    return sum;
}

int main(int argc, char **argv) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++) {
       cin >> arr[arr_i];
    }
    cout << simpleArraySum(arr) << endl;
    return 0;
}
