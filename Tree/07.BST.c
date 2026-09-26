// Introduction to binary search tree :
// Binary search tree whose internal nodes each store a key greater then all the keys in the nodes left subtree and less then those in its right subtree 

// in a simple way: smaller value than root is in left subtree and greater value is in right subtree. 

algorithm :
struct(BTnode*search_in_BST(int item,struct BTnode*))
{
    while(t)
{
if (t--> data == item)
    return t;
if (t--> < t-->data)
    t = t-->leftchild;
else 
    t = t-->rightchild;
}
return NULL;
}
// this is the algorithm for the binary search tree left child and right child including . 

// how to construct the binary search tree :
// 1) first to take the front element as a root. 
// 2) after that take smaller element to the left. 
// 3) after that take bigger element to the right. 
// 4) by making it sorted  the binary search tree will come as a result 


// there are cases in binary search tree :
// Finding the minimum in Binary seach tree :
algorithm 
struct BTnode*Find_min_in_BST(struct BTnode*t)
{
    if(t == NULL)
    return NULL;
    while(t-->lchild != NULL)
{
    t=t--> lchild;
}
return t;
}
// this is the algorithm to find the binary search tree . 

// finding maximum in binary search tree :
algorithm:
struct BTnode*Find_min_in_BST(struct BTnode*t)
{
    if(t == NULL)
    return NULL;
    while (t-->rchild != NULL)
    {
        t = t-->kchild;
    }
    return t;
}
// this is the algorithms to find the maximum and minimum of the binary search tree .