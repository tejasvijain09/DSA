#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> v={1,2,3,4,5};
    // int k=2;
    // k=k%v.size();
    // reverse(v.begin(),v.end());
    // reverse(v.begin(),v.begin()+k);
    // reverse(v.begin()+k,v.end());
    
    int array[]={1,2,3,4,5};
    int n = 5;
    int k=2; 
    // k can be greator than n
    k=k%n;
    int j=0;
    int ansarray[5];
    //inserting last k elements in the array
    for(int i=n-k;i<n;i++){
        ansarray[j++]=array[i];
    }
    // inserting first n-k elements in ans array
    for(int i=0;i<n-k;i++){ // i<=k also correct 
        ansarray[j++]=array[i];
    }
    for(int i=0;i<n;i++){
        cout<<ansarray[i]<<" ";
    }
 return 0;
}