// Hashing Load factor :

// Before learning this we will go for the revision of collision resolution techniques . 

// 1) Open addressing (closed hashing)
// *) If collision happens in any one location other addresses open to be generated . 
// *) limited no of elements can be stored . 
// *) overflow can be possible . 
// *) deletion are possible . 


// 2) Closed addressing (open hashing)
// *) no other locations can be generated . 
// *) unlimited no elemented can be stored . 
// *) over flow cannot be possible . 
// *) deletion can be possible . 

// Clustering :
// gathering no elements in an particlar place (not location ) it is known as clustering . 

// Two types of clustering . 
// 1) primary clustering . 
// 2) secondary clustering . 

// 1) Primary clustering :
// The tend is for long sequence of preoccupied position still become longer at one place. 
// (at one particular place long sequence of clustering happen) it is known as primary clustering . 

// 2) Secondary clustering :
// *) multiple clustering happening at different places . 
// *) The tend is for long sequence of preoccupied positions still become longer , priority at different places it is known as secondary clustering . 

// Load factor :
// Average number of keys per slot . 
// load factor = no of keys / total no of slots . 

// space utilization :
// no of space used / no of slots occupied . 
// space utilization = no of occupied slots / total no of slots . 

// collision resolution techniques :
// 1) Open addressing : 0 <= lf <= 1 . 
// 2) Closed addressing : 0 <= lf .
// 3) Space utilization : 0 <= 1 .



// PERFECT HASHING  : ( 0 Collisi0n )
// 1) If we have hash table no of slots and we want to insert n no of keys in it . 
// *) all n keys inseted on n slots without any collision then it is known as perfect hashing .

//  MINIMAL PERFECT HASHING :
// 1) If hash table with n no slots and m no of keys to be inserted where m>n . 
// *) keys inserted without any collision after that collsioon for all m-n keys . 

// UNIFORM HASHING :
// 1) Hash function which can generate in all location . 
// *) If H(k) = ( k*2 ) mod 10 ==> possible slots 
// generated slots = 0,2,4,6 and 8 
// This is the example for the hashing and all possible slots . 

// this is the end of hashing concept and end of data structures . 
