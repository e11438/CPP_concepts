#include<iostream>
#include<algorithm>
#include<vector>



void ForEach(const std::vector<int>& values, void(*func)(int))
{
    for(int value : values)
        func(value);
}   

int main()
{
    std::cout << "testing lambda functions " <<std::endl;
    std::vector<int> values = {1, 2, 3, 4, 5};

    auto it = std::find_if(values.begin(), values.end(), [](int value){ 
        std::cout <<"pre value in lambda " << value << std::endl;
        value = value + 1; 
        std::cout <<"post value in lambda " << value << std::endl;
        return value > 3;
        }); 

    std::cout<< "first item greater that target " << *it << std::endl;
    auto lambda = [](int value){std::cout << "Value :  " << value << std::endl;};
    ForEach(values, lambda);

    const int *  name = new int(1);
    name = new int(2);
    
    return 0;
}