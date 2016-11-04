/* ----------------------- binarySearch ----------------------- */
/*  
    Description: Given a sorted array A with length entries this 
    algorithm returns the index such that A[index] = val or 
    returns -1 if val is not contained in A. 
    
    Input variables:
        A  : sorted array of integers
        n  : length of array A
        val: value to search for in A

    Features: This implementation has complexity O(lg(n)).
    Additionally, the update for mid is implemented to ensure
    no overflow will occur.                                     */
