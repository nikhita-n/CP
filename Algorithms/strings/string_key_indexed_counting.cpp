
Assumption: keys are integrs between 0 and R-1
Implication: can use key as array indices

//NOTE: keys may have associated data, don't just count up number of keys of each value

"GOAL: sort an arrar of N integers between 0 and R-1"

    N=length of A
    int count[R+1];

    for(int i=0;i<N;i++)
        count[a[i]+1]++; //a[i]+1 to make the code cleaner

    for(int r=0;r<R;r++)
        count[r+1]+=count[r];//to calculate cumulative frequency - note one extra box we have here

    for(int i=0;i<N;i++)
        aux[count[a[i]]++]=a[i]; //placing the correct items in an auxiliary array, first it will put an eeemtn there an dthen increments.

    for(int i=0;i<N;i++)
        a[i]=aux[i]; //copy sorted array into original array

    #TIMECOMPLEXITY:O(N+R) and space complexity:O(N+R)

    --(stable sort) - we keep them in the order we see them