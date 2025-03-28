#include <array>
#include <iostream>

int main(){
    
    // C-Style Array
    int myNums[] = {4, 7, 2, 0, 1, 6};

    //STL Array
    std::array<int, 4> myList = {3, 7, 5, 9};
    
    // Iterating through C-Style then STL
    for(int nums : myNums){
        std::cout << nums << " ";
    }

    std::cout << '\n';

    for(int nums : myList){
        std::cout << nums << " ";
    }



    return 0;
}
