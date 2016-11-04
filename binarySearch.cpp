#include <cstdio>
#include <iostream>
using namespace std;

/* ----------------------- binarySearch ----------------------- */
/*  Given a sorted array A with length entries this algorithm 
    returns the index such that A[index] = val or returns -1 
    if val is not contained in A. 

    Features: This implementation has complexity O(log_2(n)).
    Additionally, the update for mid is implemented to ensure
    no overflow will occur.                                     */

int binarySearch (const int A[], int length, int val) {
    /* initialize variables:
          low : index of smallest value in current subarray of A
          high: index of largest value in current subarray of A
          mid : average of low and high in current subarray of A */
    int low, mid, high;

    low = 0;            // set initial value for low
    high = length - 1;  // set initial value for high

    /* perform binary search */
    while (low <= high) {
        mid = low + (high - low)/2; // update mid
        
        if (A [mid] > val) { // val is is left subarray
            high = mid - 1;  // update high
        }
        else if (A [mid] < val) { // val is in right subarray
            low = mid + 1;        // update low
        }
        else {           // val = A[mid]
            return mid;  // return index of val
        }
    }

    return (-1); // val not found in A
}

int main () {
    int i, n, value, * arr ;

    cout << "Enter the size of the array: ";
    cin >> n ;

    arr = new int[n];

    /* initialize array containing 1, 2, ..., n */
    for (i = 0; i < n; i++) {
        arr [i] = i + 1 ;
    }

    cout << "Enter the value (between 1 and " << n << ") to search for: ";
    cin >> value ;

    printf ("The index of %i in A is: %i.\n", n, binarySearch(arr, n, value));

    delete[] arr;
    return 0;
}
