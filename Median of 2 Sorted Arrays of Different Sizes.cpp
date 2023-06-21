class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {

int newArray[array1.size() + array2.size()];
        int arr1Index = 0, arr2Index = 0, newArrayIndex = 0;
        
        // Comparing elements at different positions in both the arrays
        // to store them in sorted order
        
        while(arr1Index < array1.size() and arr2Index < array2.size()){
            if(array1[arr1Index] <= array2[arr2Index]){
                newArray[newArrayIndex] = array1[arr1Index];
                newArrayIndex++;
                arr1Index++;
            }   
            else{
                newArray[newArrayIndex] = array2[arr2Index];
                newArrayIndex++;
                arr2Index++;
            }
        }
        
        // If there are still left elements in either of the given arrays
        
        while(arr1Index < array1.size()){
            newArray[newArrayIndex] = array1[arr1Index];
            newArrayIndex++;
            arr1Index++;
        }
        while(arr2Index < array2.size()){
            newArray[newArrayIndex] = array2[arr2Index];
            newArrayIndex++;
            arr2Index++;
        }
        
        // Calculating median, this seems self explanatory!
        // Note : Do not forget to add .0 after 2 in last return statement
        //        As we need to return the double value
        
        int siz = array1.size() + array2.size();
        if(siz % 2 != 0){
            return newArray[siz / 2];
        }
        return (newArray[siz / 2] + newArray[(siz / 2) - 1]) / 2.0;
    }
