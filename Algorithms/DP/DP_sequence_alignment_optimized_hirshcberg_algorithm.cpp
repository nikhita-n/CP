/*Input strings: A[0...n-1] and B[0...m-1]

IDEA:
DP + divide and conquer
Compute k such that first half of A is aligned to first k symbols of A and second half of A to the next m-k symbols of b
First find k.
2 recursive calls for first half of A and second half of A
Complexity:
Time:O(n*m)
Space:O(n+m)*/

