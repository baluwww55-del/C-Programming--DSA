// multiple stack in an single array :
// lets assume we will make the single array into two parts into two array 
// stack 1 and stack 2 
// in stack 1 :
// top == -1 
// top2 == n/2 -1
// overflow top == n/2-1

// stack 2 :
// top 2 == n-1 :

// *) one stack cannot use the space of other stack 
// and this will be the proper utlization of stack as we know tht the stack is once impelemntation of an size it is not dynamically so the space utlization is little to difficult 
// but when we use this method we can use the space efficiently without wasting it . 

// another approach on both ends :
// when we approach to both the ends there is  not space wastage assume there :
// assume there is top == -1 
// and top 2 == n    ( visually think about this one stack is from front and another stack is from end )


// overflow : top 1 == top 2 == -1 . 
// top 2 = top + 1 = overflow it is for the better space utilization . 
