// Introduction to heap :

// Heap is priority class data structure 
// Heap is specialized tree based data structures which is essentially an almost complete tree that satisfies the heap property 
// there are some set of rules to satisfy heap property.
// 1) it must complete binary tree . 
// 2) max heap or min heap . 

// 1) max heap :
// root must be greater than the left and right child.
// 2) min heap :
// root must be smaller than the left and right child. 

// these are the differences of max and min heap 

// array representation of heap :
// root at index 1 ( in data structures we can take index at any )
// 1) any node at index = i
// left node at index = 2i
// right node at index = 2i+1
// eg: we create a max heap 2,10,15,20,18,12,6
// so this is the heap we have to represent heap:
// 20,15,18,5,12,6,2
// this is the array representation of a heap which satisfies the heap property . 

// this is the basic introduction of the heap property .