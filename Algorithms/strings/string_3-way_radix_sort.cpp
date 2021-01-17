//uses combination of MSD and quick sort
    -instead of R-way partitioning, as in MSD, 3-way partitioning is done
    -does not re-examine characters equal to partitioning char
        (but does re-examine characetrs not equal to the partitioning char)
    
    "3-way partitioning"
    -Let k be the partioning character,
    -the three partitions are:
        -less than k
        -greater than k
        -equal to k

//code

    void sort(string *a,itn lo,int hi,int d)
    {
        if(hi<=lo)
            return;
        int lt=lo,gt=hi; //lt and gt are bounds
        int v=charAt(a[lo],d); //if d<a[lo].length return a[a[lo].length-1]
        int i=lo+1;
        while(i<=gt)
        {
            int t=charAt(a[i],d);
            if(t<v) swap(a,lt++,i++); //exch is insertion sort, maybe
            else if(t>v)    swap(a,i,gt--);
            else i++;
        }
        sort(a,lo,lt-1,d);                  //sort 3 subarrays recursively
        if(v>=0)    sort(a,lt,gt,d+1);
        sort(a,gt+1,hi,d);
    }


//  3-way partiton sorting vs quicksort
    -uses 2NlnN character compares on avg for random strings
    -avoids re-comparing long common prefixes

//  3-way string quicksort
    -short inner loop
    -cache friendly
    -in place