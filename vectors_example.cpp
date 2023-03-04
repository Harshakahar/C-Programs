#include<iostream>
#include<vector>

int main()
{
    std::vector<int> a;
    a={1,2,3,4,5,6};
    //std::cout<<a.at(2);
    std::vector<int> b={3,4,1,2,3,6};
    for(int i=0;i<a.size();i++)
    {
        std::cout<<a[i]<<"\t";
    }
    std::cout<<"\n";
    for(int i=0;i<a.size();i++)
    {
        std::cout<<b[i]<<"\t";
    }
}
