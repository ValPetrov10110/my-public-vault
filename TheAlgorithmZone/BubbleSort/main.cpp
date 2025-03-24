#include <iostream>
#include <vector>

int bubbleSort(std::vector<int>& theList, int num);

int main(){

    std::vector<int> theList;
    int num;

    std::cout << "How Many Number To Store: ";
    std::cin >> num;
    for(int i = 0; i < num; i++){
        int value;
        std::cout << "Enter Value " << i + 1 << ": ";
        std::cin >> value;
        theList.push_back(value);
    }

    std::cout << '\n';
    std::cout << "Current Sort: ";
    for(int nums : theList){
        std::cout << nums << " ";
    }
    std::cout << '\n';
    std::cout << "Press Any Button To Sort...";
    std::cin.ignore();
    std::cin.get();

    int result = bubbleSort(theList, num);

    for(int nums : theList){
        std::cout << nums << " ";
    }
    
    std::cout << '\n';
    if(result == 0){
        std::cout << "Bubble Sort took as long as it possible could to complete :(" << std::endl;
    }
    else{
        std::cout << "Bubble Sort took " << result << " full iterations to completed" << std::endl;
    }


    return 0;
}

int bubbleSort(std::vector<int>& theList, int num){
    int counter = 0;
    
    for(int i = 0; i < num - 1; i++){
        counter++;
        bool swap = false;
        for(int j = 0; j < num - 1 - i; j++){
            if(theList[j] > theList[j + 1]){
                swap = true;
                int temp;
                temp = theList[j + 1];
                theList[j + 1] = theList[j];
                theList[j] = temp;
            }
        }
        if(!swap){
            return counter;
        }
    }
    
    return 0;
}
