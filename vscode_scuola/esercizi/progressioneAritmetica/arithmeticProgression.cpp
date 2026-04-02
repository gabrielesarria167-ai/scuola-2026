#include <iostream>
#include <vector>


int main()
{   
    std::vector<int> arr = {3, 5, 1};
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    int gap = arr[1] - arr[0];
    for(int i = 0; i< arr.size()-1; i++){
        if(arr[i+1] - arr[i] == gap){
            std::cout<<"ok\n";
        }
        else{
            std::cout<<"no ok\n";
        }
    }
}