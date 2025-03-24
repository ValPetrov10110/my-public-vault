#include <iostream>
#include <vector>

using std::cout;
using std::cin;

int linearSearch(std::vector<int>& theList, int num);

int main(){
    int arNum;
    int num;

    cout << "--------- Linear Search by Valentin ---------" << std::endl;
    cout << '\n';
    cout << "How Many Numbers To Store: ";
    cin >> arNum;

    std::vector<int> theList;

    for(int i = 0; i < arNum; i++){
        int value;
        cout << "Enter Value " << i + 1 << ": ";
        cin >> value;
        theList.push_back(value);
    }

    system("clear");
    cout << "What Number To Find: ";
    cin >> num;

    linearSearch(theList, num);


    return 0;
}

int linearSearch(std::vector<int>& theList, int num){
    system("clear");

    for(int i = 0; i < theList.size(); i++){
        if(theList[i] == num){
            cout << "Your number " << num << " was found at index " << i << std::endl;
            return 0;
        }
    }
    std::cout << "Your Value Does Not Exist..." << std::endl;
    return 1;

}