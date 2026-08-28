// Insertion in doubly linked list :
// insertion at starting :
condition :
n ---> data = item ;
n ---> next = first ;
n ---> prev = null;
first = n;
run time complexity O(n)

// Insertion after a given node :
condition :
n ---> data = item ;
n ---> next = loc --> next ;
n ---> prev = loc;
n ---> next ---> prev = n;
loc --> next = n ;
run time complexity O(1)

// insertion a before a node :
condition :
n ---> data = item ;
n ---> next = loc ;
n ---> prev = loc ---> prev ;
n ---> prev --> next = n;
loc ----> prev = n;
run time complexity O(1)

// Insertion at the end : last given 
condition :
n ---> data = item ;
n ---> next = NULL;
n --> prev = last ;
last --> next = n;
last = n;
run time complexity O(1)

// last not given :
struct node * p = first 
while (p --> next ! = null)
{
    p = p --> next ;
    n --> data = item ;
    p ---> next = null ;
    n --> prev = p;
    p --> next = n;
}
run time complexity O(1)