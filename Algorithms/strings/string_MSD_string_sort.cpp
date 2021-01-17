//the width of array to be sorted keeps decreasing
//this algo can also be thought of as generalised quicksort
void MSD_sort(string *a, string *aux, int lo,int hi, int d)//initially lo=0 and hi=number of strings -1
{
    if(hi<=lo)
        return;
    int count[R+2];

    for(int i=lo;i<=hi;i++)
        count[charAt(a[i],d)+2]++;  //charAt, if d > a[i].length, return a[a[i].length-1];

    for(int r=0;r<R+1;r++)
        count[r+1]+=count[r];//to calculate cumulative frequency - note one extra box we have here

    for(int i=lo;i<=hi;i++)
        aux[count[charAt(a[i],d)+1]++]=a[i]; //placing the correct items in an auxiliary array, first it will put an eeemtn there an dthen increments.

    for(int i=lo;i<=hi;i++)
        a[i]=aux[i-lo]; //copy sorted array into original array


    for(int r=0;r<R;r++) //once first letter is sorted, u will sort within it, now
        MSD_sort(a,aux,lo+count[r],lo+count[r+1]-1,d+1);

}
//MSD sorting examines just enof characters to sort keys

/*CONS:
    -very small for small subarrays
    -each fn needs its own count array
    -accesses memory "randomly", during counting,(cache inefficient)
    -inner loop has a lot of instructions
    -extra space for count[] and aux[] arrays*/

"for small subarrays, instead of forming the count array again, we could implement insertion sort"
    MSD_sort(string *a,int lo,int hi,int d)
    {
        for(int i=lo;i<=hi;i++)
            for(int j=i;j>lo && a[j][d]<a[j-1][d];j--)
                swap(a,j,j-1);
    }

