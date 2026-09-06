
// Implementation using an array in an queue data structure :

// in an queue we use implementation using an array to store the elements of the queue. 
// we use to indexes which is used for operation : insertion and deletion opearations .
// 1) front 
// 2) rear 

// the first element of the queue is known as the front 
// the last element of the queue is known as the rear 

// there are certain concepts when we use an array to implement data structure :


// 1) when the array is an empty :

front = -1
rear = -1

// when an single element in an array :

front = 0
rear = 0

// when an array is full :

front = 0 
rear = size/n-1

// so basically the concept of overflow comes when the queue is full 

// so what is  overflow and what is underflow :
// 1) overflow :
         when an array is full and we have to insert an element and there is no space in an queue then the overflow concept occurs . 


// 2) so what is underflow :
// 2) underflow :
            when an array empty and we have to delete the element and there is no element in an queue then occurs the concept of underflow .
