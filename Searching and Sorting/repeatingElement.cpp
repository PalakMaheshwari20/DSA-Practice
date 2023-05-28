#include<bits/stdc++.h>
using namespace std;

int repeatElement(int arr[], int n)
{
   //super naive solution: TC: O(N^2) SC: O(1) 
   /*for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j])
            return arr[i];
    }
   }
   return -1;*/

   //Naive solution: TC: O(NLOGN) SC: O(1)
   /*sort(arr,arr+n);
   for(int i=0;i<n-1;i++){
    if(arr[i]==arr[i+1])
        return arr[i];
   }
   return -1;*/

   //Efficient solution
   /*bool visited[n];
   memset(visited, false, sizeof(visited));
   for(int i=0;i<n;i++){
    if(visited[arr[i]]){
        return arr[i];
    }
    visited[arr[i]]=true;
   }
   return false;*/

   //More efficient solution: (TC: O(N) SC: O(1))
   //case where we are considering array to be in range of 1 to n-1;
   /*int slow=arr[0],fast=arr[0];
   do{      //phase one: here slow moves by one step and fast moves by 2 steps and stop where both becomes equal
        slow=arr[slow];
        fast=arr[arr[fast]];
   }while(slow!=fast);

   slow=arr[0];   //phase two: here fast remains at the same place but we initialize slow at 0 index now both slow and fast moves by one step and stop when both becomes equal
   while(slow!=fast){
    slow=arr[slow];
    fast=arr[fast];
   }
return slow;*/

    //More efficient solution: (TC: O(N) SC: O(1))
   //case where we are considering array to be in range of 0 to n-1, we just need to add 1 at every place
    int slow=arr[0]+1,fast=arr[0]+1;
   do{      //phase one: here slow moves by one step and fast moves by 2 steps and stop where both becomes equal
        slow=arr[slow]+1;
        fast=arr[arr[fast]+1]+1;
   }while(slow!=fast);

   slow=arr[0]+1;   //phase two: here fast remains at the same place but we initialize slow at 0 index now both slow and fast moves by one step and stop when both becomes equal
   while(slow!=fast){
    slow=arr[slow]+1;
    fast=arr[fast]+1;
   }
return slow-1; //here we need to decrement 1 from the final answer coz we added 1 earlier

}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Repeating Element = "<<repeatElement(arr,n);
}