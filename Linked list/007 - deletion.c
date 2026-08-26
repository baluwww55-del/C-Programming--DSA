// Deletion using linked list :
// deletion from starting :// we have delete the starting node .
basic condition :
first = first ---> next;   // first = first --->next this indicate jumping the first link .
first = previous = NULL;   // this indicating the going back to the null if we use previous after implementing the above condition means the null will be the previous condition .
// run time complexity will be (1)



// deletion of a given node : // means location has already given we have to delete tht node :
loc --> prev ---> next = loc --> next;   // loc previous will be the next of this location 
loc --> next --> prev = loc --> prev;   // loc will be the previous .
// run time complexity will be O(1) for both because of there is no traversing in tht so thts it is constant .



// deletion at the end : it means the exact location of the deletion was last means null 
last = last ---> previous ;   //  at first we are taking the last -1 means previous link of the last node (nul node)
last --> next = next ;       // and we are deleting the last node last previous data's link .
// run time complexity will O(1)



// when the deletion node not givenn or last node not given 
struct node*p = first 
while (p-->next--next!= null)
{
    p = p ---> link;
}
p --> next = null ;
// run time complexity of the algorithm will be O(n)

// so the basic terminology of the algorithm is if there is a loop happening there and the traversing is going so the time complexity of the algorithm will be O(n)
// and there will be no traversing or loop happening so there will be O(1).
