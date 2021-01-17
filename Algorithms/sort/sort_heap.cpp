/*Max heap A=array to be sorted , at the end A is in ascending order */

//Here, largest child,if any, replaces the parent.

//O(logn) complexity
Heapify(A,i)
{
    //heapsize[A] how many nodes in the heap 
    l = index_of_left_child(i);
    r = index_of_right_child(i);
    if(l<=heapsize[A]&& A[l]>A[i])
    largest = l;
    else
    largest=r;
    if(r<=heapsize[A] && A[r]>A[largest])
    largest=r;
    if(largest!=i)
    {
        swap(A[i],A[largest])
        Heapify(A,largest) //Parent has changed. now it percolates up to restore balance if lost
    }
}
//O(n) complexity
Buildheap(A)
{
    heapsize[A]=length[A];
    for(int i=length[A]/2;i>0;i--) //i from length[A]/2 because other half of the array are leaves and is taken care by heapify
    Heapify(A,i);
}
//O(nlogn) 
Heapsort(A)
{
    Buildheap(A)
    for(int i=length[A];i>1;i--){
        swap(A[1],A[i]) //A[1] contains the node with the max value in the heap, it is put to its original place 
        heapsize[A]=heapsize[A]-1; //Heap is reduced by one node
        Heapify(A,1);
    }
}