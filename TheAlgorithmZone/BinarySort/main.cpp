#include <array>
#include <iostream>

std::array<int, 2> bubbleSort(std::array<int, 6>& theList);
int binarySearch(std::array<int, 6>& theList, int num);

int main(){

    int num;
    std::array<int, 6> theList = {1, 2, 4, 3, 5, 6};
    
    std::array<int, 2> theValues = bubbleSort(theList);
    std::cout << "### VALUES SORTED ###\nIterations : " << theValues[0] << "\nSwaps Performed: " << theValues[1] << std::endl;
    std::cout << '\n';
    std::cout << "Enter Value To Find: ";
    std::cin >> num;

    int value = binarySearch(theList, num);
    
    if(value >= 0){
        std::cout << "Located At Index " << value << std::endl;
    }

    return 0;
}

int binarySearch(std::array<int, 6>& theList, int num){
    int l = 0;
    int r = 5;
    int midpoint;

    while(l <= r){
        midpoint = l + (r - l) / 2;
        if(theList[midpoint] == num){
            std::cout << "Value Identified" << std::endl;
            return midpoint;
        }
        else if(theList[midpoint] > num){
            r = midpoint - 1;
        }
        else{
            l = midpoint + 1;
        }
    }

    std::cout << "Value Not Deteced" << std::endl;
    return -1;
}

std::array<int, 2> bubbleSort(std::array<int, 6>& theList){
    int iNum = 0;
    int sNum = 0;
    std::array<int, 2> theReturns;

    for(int i = 0; i < theList.size() - 1; i++){
        bool swap = false;
        for(int j = 0; j < theList.size() - i - 1; j++){
            if(theList[j] > theList[j + 1]){
                swap = true;
                int temp;
                temp = theList[j + 1];
                theList[j + 1] = theList[j];
                theList[j] = temp;
                sNum++;       
            }
        }

        if(!swap){
            return theReturns = {iNum, sNum}; 
        }
        iNum++;
    }

    return theReturns = {iNum, sNum};
}
