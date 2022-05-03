#include <iostream>
#include <vector>
#include <array>
#include <vector>
#include <algorithm>
//#include "PlayerArrays.cpp"
//a prototype that prints the information form a round
class draftRound{
public:
// set a variable for each of the players the user selected.
    void setTeam1(std::string team1Player){
        team1Pick = team1Player;
    }
    void setTeam2(std::string team2Player){
        team2Pick = team2Player;
    }
    void setTeam3(std::string team3Player){
        team3Pick = team3Player;
    }
    //sets a Vector for positions available
    void setRbsvec(std::vector<std::string>RbsVec){
        myRbsVec = RbsVec;
    }
    void setQbsvec(std::vector<std::string>QbsVec){
        myQbsVec = QbsVec;
    }
    void setWrsVec(std::vector<std::string>WrsVec){
        myWrsVec = WrsVec;
    }
    void setDefensesVec(std::vector<std::string>DefensesVec){
        myDefensesVec = DefensesVec;
    }

protected:
    std::string team1Pick, team2Pick, team3Pick;
    std::vector<std::string> myRbsVec;
    std::vector<std::string> myQbsVec;
    std::vector<std::string> myWrsVec;
    std::vector<std::string> myDefensesVec;
    //bool checkForTrade;


};

class printArraysAfterRound: public draftRound{
    //Prints the players selected in a certain round
public:
    std::vector<std::string> playerDraftedInRound;
    void printRoundRecap(){
        playerDraftedInRound.push_back(team1Pick);
        playerDraftedInRound.push_back(team2Pick);
        playerDraftedInRound.push_back(team3Pick);
        std::cout << "Draft picks taken this Round: " << std::endl;
        for (auto yu: playerDraftedInRound){
            std::cout << yu << " " ;
        }
        std::cout << "\n\n";
};
class RoundRecap: public draftRound {
public:
//iterates over each position to remove the players taken from each round to make a new vector.
//our check inventory function
    std::vector<std::string> rbsAvailable(std::vector<std::string> RbsVec, std::string team1Player, std::string team2Player, std::string team3Player ){
        if (std::count(RbsVec.begin(), RbsVec.end(), team1Player)){
            std::vector<std::string>:: iterator RbsAva;
            RbsAva = std::remove(RbsVec.begin(), RbsVec.end(), team1Player);
            //Removes the last element of the vector if it equals the input.
            if(team1Player == RbsVec.back()){
                RbsAva = RbsVec.erase(RbsVec.end()-1);
            }
        }
        if (std::count(RbsVec.begin(), RbsVec.end(), team2Player)){
            std::vector<std::string>:: iterator RbsAva;
            RbsAva = std::remove(RbsVec.begin(), RbsVec.end(), team2Player);
            if(team2Player == RbsVec.back()){
                RbsAva = RbsVec.erase(RbsVec.end()-1);
            }
        }


        if (std::count(RbsVec.begin(), RbsVec.end(), team3Player)){
            std::vector<std::string>:: iterator RbsAva;
            RbsAva = std::remove(RbsVec.begin(), RbsVec.end(), team3Player);
            if(team3Player == RbsVec.back()){
                RbsAva = RbsVec.erase(RbsVec.end()-1);
            }
        }

        std::vector<std::string> updatedRbs;
        std::cout << "Running Backs Available: " << std::endl;
        for (int i = 0; i < RbsVec.size(); i++){
            RbsVec[i];
        }
        return RbsVec;


    }
    std::vector<std::string> QbsAvailable(std::vector<std::string> QbsVec, std::string team1Player, std::string team2Player, std::string team3Player ){
        if (std::count(QbsVec.begin(), QbsVec.end(), team1Player)){
            std::vector<std::string>:: iterator QbsAva;
            QbsAva = std::remove(QbsVec.begin(), QbsVec.end(), team1Player);
            if(team1Player == QbsVec.back()){
                QbsAva = QbsVec.erase(QbsVec.end()-1);
            }
        }
        if (std::count(QbsVec.begin(), QbsVec.end(), team2Player)){
            std::vector<std::string>:: iterator QbsAva;
            QbsAva = std::remove(QbsVec.begin(), QbsVec.end(), team2Player);
            if(team2Player == QbsVec.back()){
                QbsAva = QbsVec.erase(QbsVec.end()-1);
            }
        }

        if (std::count(QbsVec.begin(), QbsVec.end(), team3Player)){
            std::vector<std::string>:: iterator QbsAva;
            QbsAva = std::remove(QbsVec.begin(), QbsVec.end(), team3Player);
            if(team3Player == QbsVec.back()){
                QbsAva = QbsVec.erase(QbsVec.end()-1);
            }
        }
        std::cout << "Quarterbacks Available: " << std::endl;
        for(int i = 0; i < QbsVec.size(); i++){
            QbsVec[i];
        }
        return QbsVec;


    }

    std::vector<std::string> WrsAvailable(std::vector<std::string> WrsVec, std::string team1Player, std::string team2Player, std::string team3Player ){
        if (std::count(WrsVec.begin(), WrsVec.end(), team1Player)){
            std::vector<std::string>:: iterator WrsAva;
            WrsAva = std::remove(WrsVec.begin(), WrsVec.end(), team1Player);
            if(team1Player == WrsVec.back()){
                WrsAva = WrsVec.erase(WrsVec.end()-1);
            }
        }
        if (std::count(WrsVec.begin(), WrsVec.end(), team2Player)){
            std::vector<std::string>:: iterator WrsAva;
            WrsAva = std::remove(WrsVec.begin(), WrsVec.end(), team2Player);
            if(team2Player == WrsVec.back()){
                WrsAva = WrsVec.erase(WrsVec.end()-1);
            }
        }
        if (std::count(WrsVec.begin(), WrsVec.end(), team3Player)){
            std::vector<std::string>:: iterator WrsAva;
            WrsAva = std::remove(WrsVec.begin(), WrsVec.end(), team3Player);
            if(team3Player == WrsVec.back()){
                WrsAva = WrsVec.erase(WrsVec.end()-1);
            }
        }
        std::cout << "Wide Receivers Available: " << std::endl;
        for(int i = 0; i < WrsVec.size(); i++){
            WrsVec[i];
        }
        return WrsVec;


    }
    std::vector<std::string> DefensesAvailable(std::vector<std::string> DefensesVec, std::string team1Player, std::string team2Player, std::string team3Player ){
        if (std::count(DefensesVec.begin(), DefensesVec.end(), team1Player)){
            std::vector<std::string>:: iterator DefAva;
            DefAva = std::remove(DefensesVec.begin(), DefensesVec.end(), team1Player);
            if(team1Player == DefensesVec.back()) {
                DefAva = DefensesVec.erase(DefensesVec.end() - 1);
            }
        }
        if (std::count(DefensesVec.begin(), DefensesVec.end(), team2Player)){
            std::vector<std::string>:: iterator DefAva;
            DefAva = std::remove(DefensesVec.begin(), DefensesVec.end(), team2Player);
            if(team2Player == DefensesVec.back()) {
                DefAva = DefensesVec.erase(DefensesVec.end() - 1);
            }
        }
        if (std::count(DefensesVec.begin(), DefensesVec.end(), team3Player)){
            std::vector<std::string>:: iterator DefAva;
            DefAva = std::remove(DefensesVec.begin(), DefensesVec.end(), team3Player);
            if(team3Player == DefensesVec.back()) {
                DefAva = DefensesVec.erase(DefensesVec.end() - 1);
            }
        }
        std::cout << "Defenses Available: " << std::endl;
        for(int i = 0; i < DefensesVec.size(); i++){
            DefensesVec[i];
        }
        return DefensesVec;


    }


};
};

//std::string team1Pick, std::string team2Pick, std::string team3Pick, )