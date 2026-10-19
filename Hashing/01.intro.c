// Hashing :

// Introduction to hashing . 
// *) hashing is a searching technique which can provide constant time . 
// means hashing is a technique which provides searching in an constant time . 

// now just recall what are the searching technique and their run time complexities . 

// 1) Arrays :
// *) linear search = runtime complexity O(n)
// *) Binary seach = run time complexity O(logn)

// 2) linked list :
// *) linear search = run time complexity O(n)

// 3) BST(Binary seach tree):
// *) worst case O(n)
// *) Best case O(logn)

// To use hash we use 
// *) hash function .
// *) hash table .

// Hashing technique : what are techniques available for hashing . 

// there are several hashing techniques :
// Hashing techniques :
// 1) Direct hashing .
// 2) subtraction hashing . 
// 3) Division hashing . 
// 4) Fold shifting hashing .
// 5) Fold Boundary hashing . 
// 6) Digit extraction hashing . 
// 7) Mid square hashing . 

// 1) Direct hashing :
// *) H(k) = loc 
// *) hash function key directly gives the location . 
// disadvantage :
// *) 00 to 99 only ( the range is limited ). 
// advantage : No collision. 

// 2) subtraction method hashing :
// l = H(k) = k - x .
// x = is any positive integer . 
// disadvantage :
// *) 00 to 00 ( the range is limited )
// maximum keys can be stored is 102. 
// advantage : No collision.


// 3) Division method hashing : ( the important one for gate and competative exams as well )
// H(K) = k % m ( % = modulor operator )
// advantage : unlimited range 
// disadvantage : collision occurs . 


// 4) Fold shifting method hashing :
// location range = 000 - 999
// make three folds and sum them we will get the location 
// eg: 123456789 we have to divide into threee and we have to sum them . 
// *) it is not standard ( and not important as well )


// 5) Fold Boundary method :
// eg: loc range => 000 - 999 
// key 123456789
// last three sum digits left and right . 
// if sum >= 1000 them L = (sum) % 1000.
// not an standard method ( and not important also ) 


// 6) Digit extraction method :
// location range = 000 - 999
// L = H(k) = 3 digit extracted . 
// extract digits thats it 
// eg: 1234546789
// left --> 123,  right --> 789. 
// this is the method 
// not an standard method ( and not important also )


// 7) Mid square method :
// eg : 123456789:
// take the middle one 456 . 
// this is the method. 
// // not an standard method ( and not important also ) 

// this is the hashing introduction and the method also . 