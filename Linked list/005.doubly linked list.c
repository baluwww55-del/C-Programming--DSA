// Doubly linked list:
// double linked list  comes when the single linked list have disadvantages :

// disadvantages of doubly linked list :
// the prdecessor adress is not known  (circular is solution) . 
// stepping backward is not possible . 
// link part not utilized .

// Header list :
// contains special first node is called header . 
// header node contains some summary information . 

// eg: Header list contains two :
// 1) grounded header list :
// 2) circular header list :

// grounded :
struct node * p = list --> link;
while(p!=null)
{
    process p --> data;
    p = p ---> link ;
}

// circular :
struct node * p = list --> link ;
while (p!=list)
{
    process p --> data ;
    p = p --> link ;
}

// run time complexity O(n)

// doubly linked list like two pointers : 
// 1) predecessor .
// 2) next pointer .

// structure :
struct dnode 
{
    char data ;
    struct dnode*next;
    struct dnode*previous;
};
// this is the basic structure of double pointer creating forward and backward node . 
