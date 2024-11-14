#include<iostream>
using namespace std;
int partition(vector<int> &vec , int low , int high){
    // Selecting last element as the pivot 
    int pivot = vec[high];
    int sp = (low-1);
    for(int fp = low; fp <= high; fp++){
        // If current element is smaller than or equal to pivot
        if(vec[fp] <= pivot){
            sp++;
            if(vec[sp]>vec[fp]){
            swap(vec[sp], vec[fp]);
        } // end if
} // end if
    } // end for
    return (sp);
} // end function
void quicksort(vector<int> &vec, int low , int high){
    if(low<high){
        // pi is partitioning index, arr[p] is now at right place
        int pi = partition(vec, low, high);
        // Separately sort elements before partition and after partition
        quicksort(vec, low, pi-1);
        quicksort(vec, pi+1, high);
    } // end if 
} // end function
int main()
{
    // vector<int> vec = {10, 7, 8, 9, 1, 5};
    // Declare an empty vector
    vector<int> vec;

    // Use push_back to add elements to the vector
    vec.push_back(10);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(1);
    vec.push_back(5);

    // Displaying the elements of the vector
    cout << "Vector elements are: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    int n = vec.size();
    // calling quicksort for the vector vec
    quicksort(vec, 0, n-1);
    cout<<"Sorted array is: ";
    for(int i=0; i<n; i++){
        cout<<vec[i]<<" ";
    }
   
 return 0;
}