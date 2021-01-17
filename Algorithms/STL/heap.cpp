//NOTE:by default: MAX heap is created
1)make_heap() :- This function is used to convert a range in a container to a heap.
  -O(n)           /*Ex: vector<int> v1 = {20, 30, 40, 25, 15}; 
                  make_heap(v1.begin(), v1.end()); //does same operation as Buildheap in sort/sort_heap.cpp
                  v1 is now a heap*/
2)front() :- This function displays the first element of heap which is the maximum number.
  -O(1)         /*usage: 
                v1.front()*/
3)push_heap() :- This function is used to insert elements into heap. The size of the heap is increased by 1. New element is placed appropriately in the heap.
  -O(logN)       /*usage:
                 v1.push_back(50); //first enter into the array
                 //using push_heap() to reorder elements 
                 push_heap(v1.begin(), v1.end()); */

4)pop_heap() :- This function is used to delete the maximum element of the heap. The size of heap is decreased by 1. The heap elements are reorganised accordingly after this operation.
  O(logN)-       /*usage
                pop_heap(v1.begin(), v1.end()); 
                v1.pop_back(); */
5)sort_heap() :- This function is used to sort the heap. After this operation, the container is no longer a heap.
                /*usage
                sort_heap(v1.begin(), v1.end()); */

6)is_heap() :- This function is used to check whether the container is heap or not. Generally, in most implementations, the reverse sorted container is considered as heap. Returns true if container is heap else returns false.
               //using is_heap() 
                //is_heap(v1.begin(), v1.end())

7)is_heap_until() :- This function returns the iterator to the position till the container is the heap. Generally, in most implementations, the reverse sorted container is considered as heap.
                  // using is_heap_until() to check position  
                  // till which container is heap 
                  auto it = is_heap_until(v1.begin(), v1.end()); 