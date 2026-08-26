// Deletion singly linked list :
// 1) deletion of first node :
// 1)  if we want to delete simply point to the pointer to second node 
// 2) we know linked list is known as memory allocation dynamically so we can update space dioccording to the to the required .

// basic structure of deletion :
struct node * p = start ;
start = start ---> link;
free (p)    // free space after deletion . 


// deletion of the last node :
// 1) 1st approach is to identify the last second node to delete the last node through link of the last second node . 
// algorithm :
struct node * p = start 
while (p-->link-->link!=null)   // we are traversing the until last second node using  null condition 
{
    p = p --> link;             // traversing the node untill it gets second node link 
}
struct node *q = p ---> link; 
p --> link = null;
free (q)                        // deleting the node by using free (p)
// this is the basic of the deletion of last node 

// deletion the last node : last node is given . 
// last node algorithms :
struct node * p = start;
while(p-->link! =last)
{
    p = p ---> link;
}
struct node * q = last;
free(p)
p --> link NULL;
last = p;
// run time complexity O(n)

// deletion of a given node :
struct node * p = start;
while(p --> link = loc)
{
    p = p-->link;
}
p --> link = loc ---> link ;
free(loc)
// run time complexity O(n)

// start node is not given and the we have database loc means 
condition :
loc --> data = loc --> link ---> data ;
loc --> link = loc --> link ---> link ;
// exist only if loc not a list node . 
// run time complexity O(1).

// deletion after a given node :
loc --> link = loc --> link --> link 
// run time complexity O(1) . 

// deletion before a given a node :
struct node * p = start
while(p-->link-->link!=loc)
{
    p = p-->link.loc
}
// run time complexity O(n)

// applications of linked list :
// 1) univarite : single variable polynomials .
// 2) bivarite :  double varible polynomials .


