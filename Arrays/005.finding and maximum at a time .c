//  Finding an maximum and minimum of an array at a time. 

// we know tht the comparison of an array n-1  for minimum. 
// we know tht the comparison of an array n-1 for  maximum.

// if we calculate both we get 2n-2 comparisons for both minimum and maximum of an array . this is independent calculations 

// but there is an another method to dfind the array of maximum and minimum at aa time 
// as we know the array can be solved by pairs .
// we have to make another two pairs one is larger and another one is smaller 
// we have to compare the pairs and we have list smaller is for smaller and larger is for larger 
// by doing this operation we will get 3n/2-2 of an array for even only.
// add there is another formula [3n/2]-2. 
// by doing these formula we can find the maximum and minimum of an array at a time . 
//we want to just analyze the questions and have to solve it .

// eg : 1) find the number of comparisons to find the maximum of 150 elements.
// n-1 formuls 150-1 = 149 comparisons will happen for them .

// eg 2) the minimum no of comparisons required to find the maximum and minimum of 300 elements 
// ans) 3n/2 -2  3*300/2 -2  = 448 is the answer 

// 3) the minimum no of comparisons required to find the maximum and minimum of 163 elements 
// odd  ryt so the forumla = [3n/2]-2 so the formula will be 3*163/2-2  = 449/2-2 = 244.5-2 so the precision value is 245 -2 is 243 is the answer . 

// so this are the question and examples to find the maximum and minimum of an array at a time.
