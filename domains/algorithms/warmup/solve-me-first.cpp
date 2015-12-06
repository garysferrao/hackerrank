/* Problem Statement
 *
 * Let's start simple. Can you complete the function solveMeFirst to return the
 * sum of two integers passed as input parameters? You can pick your favourite
 * programming language.
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int solveMeFirst(int a, int b) {
 // Hint: Type return a+b; below
 return a+b;
}

int main(int argc, char **argv) {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}
