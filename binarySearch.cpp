/* ----------------------- binarySearch ----------------------- */
/*  Given a sorted array A with length entries this algorithm 
    returns the index such that A[index] = val or returns -1 
    if val is not contained in A. 
    
    Variables:
        A  : sorted array of integers
        n  : length of array A
        val: requested value to find in A

    Features: This implementation has complexity O(lg(n)).
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
        
        if (A [mid] > val) { // search left subarray for val
            high = mid - 1;  // update high
        }
        else if (A [mid] < val) { // search right subarray for val
            low = mid + 1;        // update low
        }
        else {           // val = A[mid]
            return mid;  // return index of val in A
        }
    }

    return (-1); // val not found in A
}
