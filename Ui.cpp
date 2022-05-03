#include <iostream>
#include <vector>
#include <array>
void enterTeamName(){
    std::cout << "\nEnter Team Name: " << std::endl;
}
void printDraftQuestion(){
    std::cout << "Enter pick: " << std::endl;
}
//takes a structured array and puts into a vector we can manipulate elements
std::vector<std::string> convertArrayToVec(std::array<std::string, 3> myArray){
    std::vector<std::string> myVec(std::begin(myArray), std::end(myArray));
    return myVec;

}
std::vector<std::string> updateVec(std::vector<std::string> Rd1Vec, std::vector<std::string> Rd2Vec){
    Rd1Vec.insert(Rd1Vec.begin(), Rd2Vec.begin(), Rd2Vec.end());
    return Rd1Vec;
}
void printVector(std::vector<std::string> myVec1){
    for (int f = 0; f < myVec1.size(); f++){
        std::cout << myVec1[f] << std::endl;
    }
    std::cout << "\n\n\n";
}
void tradeQuest(){
    std::cout << "Do You want to trade a player? Yes or No?" << std::endl;
}

bool tradeCheck(std::string userAns1){
    if (userAns1 == "Yes"){
        return true;
    }
    if (userAns1 == "No"){
        return false;
    }
}
void tradePlayeroffer(){
    std::cout << "What Player do you want to trade ?: " << std::endl;
}
void desiredPlayerRec(){
    std::cout << "What player do you want to receive?: " << std::endl;
}
void TradeAcceptQ(){
    std::cout << "Do you accept this trade? Yes or No?: " << std::endl;
}

