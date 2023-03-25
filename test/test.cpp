# include "../src/non_recursive.hpp"

#include<vector>
#include<iomanip>
#include<iostream>

int main(){
std::vector<int> tests = {1, 2, 3};
for (auto test : tests) {

    if(non_recursive(test) < 0){
        std::cerr << "Fail: negative value!" << std::endl;
        return 1;
    }

    else if(typeid(non_recursive(test)).name() != typeid(double).name()){
        std::cerr << "Fail: wrong variable type!" << std::endl;
        return 1;
    }
}

std::cout << "OK" << std::endl;
    return 0;
}