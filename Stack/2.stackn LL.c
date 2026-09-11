// Implementation of stack using linked list :
// there are some basic rules of linked lets revise that :
// 1) linked list contains two node :
// *) one is element 
// *) another one is pointer which contains next elements address . 

// push (stack[], top, item)
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


// pop algorithm: using stack implementation using an linked list  :
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
// run time complexity of the pop algorithm using implementation of linked list  in stack is O(1).

// other functions of stack :
// 1) is empty stack 
// *) we have only two conditions using if else condition 
// whether true or not . 

// 2)  peep (stack,top,i) - reads the ith element 
// algorithm :
// 1) pop (i-1) elements the stack frome one by one  and push them into one by one . 
// 2) temp = pop(stack)
// 3) push (stack,temp)
// 4) pop all elementw from s2 and push them on original stack one by one . 
// 5) return temp;m


// 3) change ( stack , top , item ): update its element from top by given item :
// 1) pop i-1 elements from stack , and push them to stack s2 into one by one by one . 
// 2) pop from stack .
// 3) push into one stack . 
// 4) pop all elements from stuck s2 and push them to original stack one by one . 


// 4) stack - top ( stack ): it returns top element of the stack without deleting it . 


// 5) stack permutation :
// [3,2,1] : is not possible when sequence is {1,2,3}, 
// no of valid stack permutations with the sequence of n element . 
// *) no of invalid stack permutation .

// this is the normal functions . 
