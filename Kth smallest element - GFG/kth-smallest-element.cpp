// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
   public:
   int kthSmallest(int arr[], int l, int r, int k) 
   {
       priority_queue<int> max_hp;
       for(int i=0; i<=r; i++)
       {
           max_hp.push(arr[i]);
           if(max_hp.size()>k)
           {
               max_hp.pop();
           }
       }
       return max_hp.top();
   }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends