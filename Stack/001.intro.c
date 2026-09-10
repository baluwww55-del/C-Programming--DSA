// Introduction to stacks :
// stack is a linear data structure .
// and stack is also called as temporary storate .

// stack is a data structure which is linear and follows the rule last in first out (LIFO) and both insertion and deletion performed by one end 
// both insertion and deletion performed by starting of the stack . 

// implementation of a stack using an array :
// top = index of array where the element is inserted 
// when the stack is empty then the top = -1
// some implementation of stack use another index = bottom .

// in empty list top = bottom == -1.         ( visual graphically when an array there is no elements then it will be empty ryt then the first index will be top and bottom itself )
// in an stack or array the top will remains same 
// but the bottom will be changed depends upon the implementation of stack . 
// insertion in stack is known as push operation . 
// deletion in stack is known as pop operation . 

// push algorithm : using stack implementation using an array :
push (stack[], top, item)
{
    if (top == n-1)
    {
        printf("overflow");
        return ;

        top++;
        stack[top]=item;

    }
}
// run time complexity of the push algorithm is O(1) .

// this is the basic implementation of the stack using an array and it is an linear data structure . 


// pop algorithm: using stack implementation using an array :
pop (stack ,top[])
{
    if (top == -1)
    {
        printf("underflow");
        return ;
        item = stack[top];
        top--;
    }
}
// run time complexity of the pop algorithm using implementation an array in stack is O(1).

