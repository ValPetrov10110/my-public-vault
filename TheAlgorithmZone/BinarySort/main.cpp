#include <array>
#include <iostream>

std::array<int, 2> bubbleSort(std::array<int, 6>& theList);
void binarySearch();

int main(){

    std::array<int, 6> theList = {1, 2, 4, 3, 5, 6};
    
    std::array<int, 2> theValues = bubbleSort(theList);
    std::cout << theValues[0] << " and " << theValues[1] << std::endl; //Test Line

    return 0;
}

void binarySearch(){

}

// Function in question
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
