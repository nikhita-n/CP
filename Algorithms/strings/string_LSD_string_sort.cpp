//sorts from Lowest significant digit 
//complexity time: O(WN) space=O(N+R) , W is mostly small, so linear time

-used when the length of strings to be sorted is same, length is W, say
    "#R=256,N=number of strings"
    -consider characters from right to left
    -stably sort using dth character as key
    -After pass i, strings are sorted by ith character

    string a[100]; //array of strings
    int N=a.length();
    int R=256;
    for(int d=W-1;d>=0;d--)
        //implement key_indexed_counting here. 

