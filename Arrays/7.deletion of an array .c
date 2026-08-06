// Deletion  of an array :
// deleting an element from an array 

// there are two cases : 
// 1) in last :
// 2) based on index :

// 1) in last :
// deleting the last element in an array so tht ub gets decreased and the numbers gets decreased n-- 
// algorithm for tht :
deletion(item)
{
    if(n==0)
        printf("underflow");
            return 
    ub-- ;          // upper bound gets decreased 
    a[ub] = item   // so the item in tht it is also deleted  
    n-- ;         // elements got decreased 
}
// this is the algorithm for the deletion of an element from an array im last . 
// the time complexity of this algorithms is theta(n)
// because taking exact steps to delete and there is no shifting of elements 


// 2) based on the index :
// deleting an element based on index :  for(i=lb; i<=ub; i--) this is the condition 
// algorithm for based on index 
deletion(index,item)
{
    if(n==0)
        printf("underflow");
        return;
     for(i=lb; i<=ub; i++) // we have given condition for this lb == 0 ub == max element in the array and i++ we are going 
     {
        a[k] = a[k+1];  // the operation goes elements in forward direction and ub gets decreased and no of elements also ryt so it is k++;
     }
     ub--
     n--;
}

// this is the algorithm for deletion of an array using specific index 
// the time complexity of this algorithm is O(n).
// because the elements are to be shifted whether it 5 10 or more than 15 dont know how many elements to be shifted and the operation we cant do so tht wise we go for bigO(n). 

// this is the normal operation of deleting  an element in an array . 