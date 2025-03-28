#include <iostream>
#include <vector>

int main(){
    
    int num;
    int total = 0;
    
    std::cout << "How many values to store: ";
    std::cin >> num;
    std::vector<int> myList;

    std::cout << '\n';
    for(int i = 0; i < num; i++){
        int value;
        std::cout << "Value " << i + 1 << ": ";
        std::cin >> value;
        total += value;
        myList.push_back(value);
    }
    
    std::cout << '\n';
    for(int nums : myList){
        std::cout << nums << " ";
    }
    std::cout << "= " << total << std::endl;


    return 0;
}
