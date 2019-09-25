// This problem was recently asked by Google.
// Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
// For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
// Bonus: Can you do this in one pass?

//brute force O(n^2)
/* hasArrayTwoCandidates (A[], ar_size, sum)
         1) Sort the array in non-decreasing order.
         2) Initialize two index variables to find the candidate 
            elements in the sorted array.
                (a) Initialize first to the leftmost index: l = 0
                (b) Initialize second  the rightmost index:  r = ar_size-1
         3) Loop while l < r.
                (a) If (A[l] + A[r] == sum)  then return 1
                (b) Else if( A[l] + A[r] <  sum )  then l++
                (c) Else r--    
         4) No candidates in whole array - return 0 */

// Efficient
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k = 147;
    bool result = false;
    int arr[4] = {10, 15, 3, 7};
    unordered_set<int> a;
    for (int x : arr)
    {
        if (a.find(k - x) != a.end()) //k-x=17-7=10 && 10 is already present in set
        {
            result = true; //{10,15,3}
            break;
        }
        else
        {
            a.insert(x);
        }
    }
    cout << result << endl;
}
