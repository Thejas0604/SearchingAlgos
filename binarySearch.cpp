#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[],int target,int start,int end ){
    if (target<0)
    {
        throw invalid_argument("Negative number are not allowed");
    }else{
        
            if (end<start)
        {
            return -1;
        }else
        {
        int mid = (start+end)/2;
        if (target==arr[mid])
        {
            return target;
        }else if (arr[mid]>target)
        {
            binarySearch(arr,target,start,mid-1);
        }else
        {
            binarySearch(arr,target,mid+1,end );
        }
        
        
        
        }
    
    }

}

int main(){
    int arr[] = {1,5,6,8,9}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = binarySearch(arr,10,0,n-1);
    if (x==-1)
    {
       cout<< "Not found";
    }else
    {
        cout<<"Found";
    }
    
    
    return 0;
}