// Binary search :


// binary search is an concept which is used to find the element in an sorted array . 
// there are some formulas to do binary search
// binary search is a concept in data stracture we find the element by dividing an array . 
// analyzing the mid we get whether it is upper bound of an array or lower bound of an array .



// algorithm for the binary search :

int binary search (a[],lb,ub,item) // these are the things we need to do operation on binary search :
{
    low = lb;   // first we have taken the lower bound here 
    mid = (low+high) // to calculate the mid we have taken mid here .
    while((a[mid]!=item)&&(low<=high))   // there is a loop running in this item is not equal to mid or low less than equal to high 
    {
        if(item<a[mid])    // if item is less than equal to mid  we are choosing mid lower bound means leftside mid - 1 
            high = mid-1;
        else 
            low = mid+1    // if the item is more than equal to  mid we are chooosing the mid upper bound means right side of the array mid+1             mid= (low+high)
    }
    if (a[mid] == item ) return mid;  // if the item is mid then we are goind to choose the mid and we are getting return 
    else return lb-1
}


// but onething we have to go however we do calculations we are going to get the mid only these lower bound left side and upper bound right side these are the steps to get mid 
// the run time complexity of this algorithms is O(log2n)  



// this is the algorithm for the binary search using c programming language 
