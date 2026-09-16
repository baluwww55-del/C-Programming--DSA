// Applications of the stack in c programming  language :

// applications :
// 1) expression evaluation . 
// 2) recursion .

// 1) expression evaluation (denotes particular operations in an one line).

// there are major three concepts in expression evaluation :
// 1) infix   : operator is in between two operands eg : 1+2
// 2) prefix  : operator is before the operands eg : ++12
// 3) postfix : operator after the operands eg : 12++
// these are the understanding of infix , prefix and postfix . 

// we have little rules to perform this :
// 1) paranthesis :   ()
// 2) exponent : ^ 
// 3) mul/div : * or /
// 4) add/sub: + or -
// 5) assignment : == 

// if we have to solve the solutions on these we have to follow this order . 

// and we have two operators : 
// 1) binary (2operand)
// 2) unary (1operand)

// let us solve the question using the following rules :
// 2+3*5-1
// 1. first we have to see paranthesis and exponent and mul/div and add/sub after tht lastly we have to see assignment . 
// 2. we have mul 3*5 so equation becomes 2+15-1
// 3. and we have addition also 2+15 so now it becomes like 17-1
// 4. and the final answer is 16. 

// so this is the practical eg how we have to solve the expression evaluation questions . 

// we have algorithms for postfix and prefix evaluation :


/** 1. add the right paranthesis at the end of the p 
    2. scan p from left to right until is encounetered 
    3. if operand is encountered push into the stack 
    4. if an operator is encounetered
        1. pop first two elements from stack a top element is b is next top element 
        2. evaluate b op a push the result into the stack . 
    5. set the result top == stack 
/**/
// so thsi is the basic algorithms to find the postfix evaluation. 

// prefix :
/**
1. add the right paranthesis at the end of p 
2. scan p from left to right . 
    a) if an operand  is encountered push into the stack . 
    b) if an operator is encountered 
        1. pop first two elements from stack a is top element and b is next to top element . 
        2 evaluate a op b and push the result into a stack 
3. set the result == top of stack . 
/**/

// so this are the basic algorithms which are used to operate prefix and postfix algorithm 