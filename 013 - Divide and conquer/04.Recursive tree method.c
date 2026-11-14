// Recursive tree method 
// a visual technique used to solve the recurrence relation the time complexity of the recursive algorithms. 

// T(n) = T(n-1) + T(n-2)
// *) if we substiture of go for tree recursive we will get . 
// T(n) = T(n-2) + T(n-3)
// as same we have to go and we have to find the big number and the method or side of the tree which is solving easily / fastly and we have to put answer 
// in this left side we get 1+2+3...
// in this right side we get 2+4+6....
// automatically we will get the answer of right side it is going to solve first so we will choose the method which is getting answer nearly . 
// T(n) <= 2^n
// T(n) >= 2^(n/2)
// so this is the equation which we get to solve the recurrence relation by using tree recursive method for this problem . 



// to find this we make a tree and we will solve this and we will get answer through the solving the tree recursion method . 


// if wee deeply go to solve this method we willl get geometric progression formula which is off 
// a(r^n-1)/(r-1) == formula of geometric progression . 