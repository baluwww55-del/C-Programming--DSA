// Insertion operation using linked list 
// linked list is an dynamically memory allocated to insert a new elements in the linked list 
// there are two functions used to allocate dynamically :
// 1) calloc    
// 2) malloc

// 1) Insertion in a linked list at the beginning :
struct node*n;
n = (struct node *) malloc(size of(struct node))
while(p1=null) or while(p)
{
    n-->data = item;
    n-->linkn = start ;
    start = n;
}
// run time complexity theta (1) constart 


// 2) insertion after a given node 
insertion(start,loc,item)
{
    n--->data = item;
    n--->link = lov --> link;
    loc --> link = n;
}
// run time complexity  theta (1)


// 3) Insertion before a given node :
n --> data = item;
n-->link loc;
struct node*p = start;
while(p-->link! = loc)
{
    p = p--->link
}
p---->link = n;
// run time complexity of this algorithm is O(N)

// these are the cases of the of insertion operation using linked list operation . 

