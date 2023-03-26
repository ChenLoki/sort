#include "data.h"

void countingSort()
{
    std::vector<int>arr{3,44,38,5,47,15,36,26,2,46,4,19,50,48,45,78,96,96,96,96,85,85,85,85,85,85,85,85,85,76,12,43,55,62,61,68};
    
    std::vector<int>temp(100);
    std::vector<int>out;
    
    for (int i=0; i<arr.size(); ++i)
        temp[arr[i]]++;
    
    for (int i=0; i<temp.size(); ++i)
    {
        if(temp[i] != 0)
        {
            for (int j=0; j<temp[i]; ++j)
                out.push_back(i);
        }
    }
    
    printVector(out);
}

int main()
{
    countingSort();
    
    return 0;
}
