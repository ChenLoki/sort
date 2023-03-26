#include "data.h"


void radix()
{
    std::vector< std::vector<int> > bucket_low;
    std::vector< std::vector<int> > bucket_up;
    
    for (int i=0; i<10; ++i)
    {
        bucket_low.push_back(std::vector<int>());
        bucket_up.push_back(std::vector<int>());
//        loopAdd();
    }
    
    for(int i=0 ; i<arr.size() ; ++i)
    {
        bucket_low[arr[i]%10].push_back(arr[i]);
        loopAdd();
    }
    
    for (int i=0; i<bucket_low.size(); ++i)
    {
        auto tempVec = bucket_low[i];
        for (int j=0; j<tempVec.size(); ++j)
        {
            int index = tempVec[j]/10;
            bucket_up[index].push_back(tempVec[j]);
            loopAdd();
        }
    }
    
    for (int i=0; i<bucket_up.size(); ++i)
    {
        auto tempVec = bucket_up[i];
        for (int j=0; j<tempVec.size(); ++j)
        {
            std::cout<<tempVec[j]<<",";
            loopAdd();
        }
    }
}

int main(int argc, char* argv[])
{
    radix();
    
    std::cout<<"\n";
    printSwapLoop();
    
    return 0;
}

