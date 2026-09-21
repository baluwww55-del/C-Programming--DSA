// Recursion in an tree :

// recursion means when a function calls itself it is known as recursion. 
// there are three types of recursion :
// 1) direct recursion .
// 2) indirect recursion .
// 3) nested recursion .

// for to solve recursion in tree we have to observe the two hints in an question :
// 1) base case 
// 2) return value 
// these two are the major parts tht can solve any questions which is based on the tree recursion . 

// height of a tree using recursion :
// height of a tree calculated using right child and left child . 

// algorithm :
int height (struct BTnode*t)    // firstly we have assigned the height of a tree using struct keyword because it is the pointer .
{
    if(t)                   // given a condition if it is true then it should print as -1
    return -1
    {
        Hl = height(t-->left child);    // and we have assigned the left child tree .
        Hr = height(t-->right child);   // and we have assigned the right child tree .
        if (hl>hr)                     // major part if hl > hr it should print hl+1
            return hl+1
        else
            return hr+1                // if the above condition is not true it will give hr+1
    }                                 // majorly we are calculating the height of a tree by using right and left child of a tree 
}     
// this is the basic algorithm to find the height of a tree in a tree recursion . 

// 2) height of a tree using single node = 1 / empty node = 0 
// algorithm :
int height (struct BTnode*t)     // asuusal here also assigned the pointer 
{
    if(t)
    return 0;                           // and condition for the empty tree or a single node 
    hl = height (t-->leftchild);
    hr = height (t-->rightchild);          // asusual left and the right childhas been assigned here 
    if(hl>hr)
        return hl+1;                     // condition that gives the actual height of a tree using left and the right child of a tree .
    else 
        return hr+1;
}
// this is the basic algorithm when the tree is in single node = 1/ empty tree 
// and the run time complexity of this algorithm is O(n).

// if we  are getting the question overwhelmed we can use dot method to solve the question it is the easiest and best part to solve the question 
// so this is the basic example of the recursion of a tree and height of a tree . 