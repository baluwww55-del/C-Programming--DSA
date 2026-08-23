// Traversing in a linked list :

// to traverse in a linked list we have to known the rules first :
// in linked link we can allocate memory dynamically by using functions called malloc and calloc :

// there are cases to traverse in the linked list :
// 1) traversing algorithm :
struct node*p = start;               // creating a link using pointer node .
while (p!=null) or while (P)       // giving conditions using while p! null just print it prints data untill it finds the null node .
{
    print p --> data;            // printing the data untill the null node gets present .
    p = p--->link;              //  finding the p we have p = start and going finding link until the null pointer gets .
}
// run time complexity of the algorithms theta(n)
// this is the basic algorithms to print the data in an linked list .





// 2) Finding the last node :
struct node*p = start;           // as same we are creating a link pointer which is used to find another node .
while(p-->link = null)           // giving the condition to link the if it reaches null node it should return p .
{
    p = p--->link;              // so it is the finding the way to reach to the last node .
}
return p;                      // return p after finding the last node .
// run time complexity of the algorithms is theta(n).
// this is the basic algorithm to find the last node adress . 





// 3) If the first node is null .
struct node*p = start;
if(p== null)
    return null;
while (p!==null)
{
    p= p-->link;
}



// 4) Counting the elements in the list 
int count = o;
struct node * p = start;
while(p!=null) or while(p)
{
    count ++;
    p = p-->link;
}
return count ;
// run time complexity of this algorithm is theta (n) 

// so this are the cases of linked list using traversing concept . 