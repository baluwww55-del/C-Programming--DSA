// Implementation of queue using linked list 
// in linked list we know that there is 2 node for each linked list :
// one is data and another is pointer which stores adress of another variable 

// in this also we get some conepts which is needed enqueue and dequeue operation . 
// if queue is front ()
// :       returns front element of queue without any changes . 

// if queue rear ()
//           returns rear element of queue without any changes in queue .

// if queue is empty ()
//             only two conditions like true or false returns in boolean value whether it is true or not . 



// Doubly ended queue and priority queue 
// in double ended queue insertion and deletion both done by ended like front and rear as well . 
// queue in which the insertiona nd deltion bothe can be performed from both the ends 


// input restricted for double ended queue :
// insertion can be restructed from rear end 
// but the deletion can be perfoemed by the both ends front and rear . 


// output restricted for double ended queue :
// cant have restricted insertion 
// deletion can be  restricted in standard end like front end 

// priority queue :
// 1) in prioriryt queue every element is inserted with the priority attahed and deletion highest priority element is deleted . 
// 2) implementation :

// 1) handles priority at insertion time 
// 2) handles priority at deletion time 

// insert element at decreasing order to set priority of an element . 

// priority queue implementation using linked list :
// insertion :
//             insert the element based on this priority in such way tht the element are always arranged in decreasing order of priority from front to rear 
// and the run time complexity will be O(n)

// deletion 
// delete the front element which is indeed highest priority element 
// run time complexity will be O(1)

// priority handles at deletion time 
// Insertion :
//      insert the element at rear end (time complexity O(1)

// deletion : 
//       delete the higest priority element( time complexit O(n)

// so this is the implementation using linked list in queue data structure here ends our queue data structrue . 

