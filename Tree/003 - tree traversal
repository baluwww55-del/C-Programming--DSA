// Tree traversal :
// There types of traversing is tree traversal . 
// 1) pre-order.
// 2) In-order.
// 3) post-order.

// What is pre-order --> root - left - right .
// what is in-order -->  left - left - right .
// what is in post-order --> left - right - root .

// pre-order function :
void preorder (struct BTnode*t)
{
    if(t)
    {
        printf("%d", t-->data);
        preorder(t-->leftchild);
        preorder(t-->rightchild);
    }
}
// thi is the basic structure of preorder function . 

// there is an short method to find the traversal of a tree 
// 1) dot method . 

// this method help to find a path for tree traversal . 
// observations from tree traversal . 
// *) first symbol of pre-order traversal is always root . 
// *) last symbol of post-order traversal is always root . 

// converse order traversal :
// converse order function :
void convpreorder(struct BTnode*T)
{
    if(t)
    {
        printf("%d", t-->data);
        preorder(t-->rightchild);
        preorder(t-->leftchiild);
    }
}
// converse preorder dot method . 
