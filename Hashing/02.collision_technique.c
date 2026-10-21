// Collision :
// A situation that occurs when two distinct keys have the same hash value . 
// key generates the occupied location it is known as collision 
// eg : H(k) = k mod 10 , keys to insert 12,52 location comes at 2 only the collision happens 

// In basic way the location is occured when an element is tried to insert in the location where already the location is occupied by the other element it is known as the collision . 

// types of collisions :
// 1) open adressing collision (closed hashing) . 
// 2) closed adression collision (open hashing).

// 1) Open adressing collisions :
// *) linear probing .
// *) quadratic probing . 
// *) random probing . 
// *) double probing . 

// 2) closed adressing collision :
// *) chaning . 

// 1) Open addresing collision (closed hashing) . 

// *) linear probing . 
// when collision occurs we eventually jump to the next place and we usually check the free space to insert element by linearly . 
// Lnew = l+i mod m 



// *) quadratic probing  :
// when collision occurs we eventually jump to the next place and we usually check the free space to inset element by quadratically . 
// why this ?
// when we do linearly probing it takes more time / work to check linearly one by one so we did this to save or to find efficiency in the work . 
// Lnew = (l+i*i) mod m 



// *) random probing : 
// when collision occurs we eventual jump to the next to find the space that jump will be randomly like l+1,l+3...etc how many we want that much it is known as random probing .
// Lnew = (l + l+i) mod m 


// *) double probing :
// it is same as random probing but it becomes constant when new one occurs r becomes constant 
// Lnew = (l + i*r) mod m 


// 2) closed addresing collision (open hashing)
// *) chaining :
// it is collision resolve technique that stores multiple of data in one space using linked list, tree .... etc . 
// it is unlimited storage / no fixed element . 
// simple to implement . 
// hash table never fills up . 
// we can always add more element to the chain . 
// less sensitive to the hash map function or load factor . 
// it is used when it is unknown how many and how frequently keys may be inserted or deleted . 
// deletion is possible in chaining 


// deletion is not possible in open addressing collision (closed hashing)

// these are the methods used to resolve the collision techniques . 
