// Finding the minimum value in ann giver array:
// assume tht we have an array [ 5,8,9,12,14,6,8,9]
// for this we have to compare each element with the next element we have to do traversing for tht :


// for(i=lb;i<=ub;i++)
//      {
//         visit[i];
//      }
// visiting each element of an array is called traversing in an array. 

// this is the step we have to take for array to do traverse of each element 
// but to find the minimum value of array we have another algorithm we will define it later but for now let use understand what is the operation to find an minimum of an array .
// we do check the first element and keep it as lb and we do n+1 for checking the array 
// eg: min = arr[lb];



/**
// eg array = [18,9,2,3,4,5,1]
min = a[lb];
for(i=lb+1;i<=ub;i++)
{
if( a[i]<min)
{
    min = a[i];
}
return min;
}
/**/

// this is the algorithm to find the minimum value in an array using c programming language :
// the time complexity of this is n-1 steps to solve the array means to find the minimum value 
// the time complexity will be theta(n) where n is the number of elements in an array. 
// the space complexity will be theta(1) because we are not using any extra for space for to find the minimum of an array.

// we have another method to find the minimum value in an array . 
// it is to find by comparing value of an array . 
// it will make the array elements into pairs and it will compare the pairs several steps will be happen and answer will be given 
// if we go for comparisons we will get n-1 
// time complexity will be theta (n)
// and space complexity will be theta(n) 
// because we are using more space like we compare and store the values in first step 
// and next step also we are comparing untill we get the minimum value in an array. 

// so this is the alternative step to find the minimum value in an given array using in c programming language . 
