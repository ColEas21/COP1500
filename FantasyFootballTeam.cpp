#include <iostream>
#include <vector>
class FantasyTeam{
private:
    std::string teamName;
    std::string round1selection, round2Selection, round3selection;
    bool tradeAcceptedRd1, tradeAcceptedRd2, tradeAcceptedRd3;
    std::string playerTradedRd1, playerTradedRd2, playerTradedRd3;
    std::string playerreceviedRd1, playerreceviedRd2, playerreceviedRd3;
public:
    //sets name of team
    void setTeamName(std::string teamName){
        this->teamName = teamName;
    }
    //sets the players chosen by round
    void setRound1Selection(std::string round1selection){
        this->round1selection = round1selection;

    }
    void setRound2Selection(std::string round2Selection){
        this->round2Selection = round2Selection;
    }
    void setRound3Selection(std::string round3selection){
        this->round3selection = round3selection;
    }
    // sets the boolean logic if a trade went through
    void setTradeAcceptedRd1(bool tradeAcceptedRd1){
        this->tradeAcceptedRd1 = tradeAcceptedRd1;
    }
    void setPlayerTradedRd1(std::string playerTradedRd1){
        this->playerTradedRd1 = playerTradedRd1;
    };
    //if a trade went through then this sets the player that gets received for the team from the trade
    void setplayerreceviedRd1(std::string playerreceviedRd1){
        this->playerreceviedRd1 = playerreceviedRd1;
    }
    void setTradeAcceptedRd2(bool tradeAcceptedRd2){
        this->tradeAcceptedRd2 = tradeAcceptedRd2;
    }
    void setplayerreceviedRd2(std::string playerreceviedRd2){
        this->playerreceviedRd2 = playerreceviedRd2;
    }
    void setTradeAcceptedRd3(bool tradeAcceptedRd3){
        this->tradeAcceptedRd3 = tradeAcceptedRd3;
    }
    void setplayerreceviedRd3(std::string playerreceviedRd3){
        this->playerreceviedRd3 = playerreceviedRd3;
    }
    std::vector<std::string> draftedPlayers;


    /*std::vector<std::string> orgDraftedPlayers() {
        std::vector<std::string> draftedPlayers;
        draftedPlayers.push_back(round1selection);
        draftedPlayers.push_back(round2Selection);
        draftedPlayers.push_back(round3selection);
        return draftedPlayers;
    }

    std::vector<std::string> tradedPlayers() {
        std::vector<std::string> PlayersAfterTrade;
        PlayersAfterTrade.push_back(playerreceviedRd1);
        PlayersAfterTrade.push_back(playerreceviedRd2);
        PlayersAfterTrade.push_back(playerreceviedRd3);
        return PlayersAfterTrade;
    }*/

    void printDraftPick(){
       /* if (tradeAcceptedRd1 == true) {
            draftedPlayers.push_back(playerreceviedRd1);
        }
        else {
            draftedPlayers.push_back(round1selection);
        }
        if (tradeAcceptedRd2 = true){
            draftedPlayers.push_back(playerreceviedRd2);
        }
        else {
            draftedPlayers.push_back(round2Selection);
        }
        if (tradeAcceptedRd3 == true) {
            draftedPlayers.push_back(playerreceviedRd2);
        }
        else {
            draftedPlayers.push_back(round3selection);
        }
        std::cout << teamName << " draft picks: ";
        for (auto it: draftedPlayers){
            std::cout << it << " ";
        }*/
        int rounds = 3;
        rounds -= 3;
        switch(rounds){
            case 0:
                if (tradeAcceptedRd1 == true) {
                    draftedPlayers.push_back(playerreceviedRd1);
                }else if (tradeAcceptedRd2 == false) {
                    draftedPlayers.push_back(round1selection);
                }
            case 1:
                if (tradeAcceptedRd2 = true){
                    draftedPlayers.push_back(playerreceviedRd2);
                }else if (tradeAcceptedRd2 == false) {
                    draftedPlayers.push_back(round2Selection);
                }
            case 2:
                if (tradeAcceptedRd3 == true) {
                    draftedPlayers.push_back(playerreceviedRd2);
                }else if (tradeAcceptedRd3 == false) {
                    draftedPlayers.push_back(round3selection);
                }
            default:
                std::cout << teamName << " draft picks: ";
                for (auto it: draftedPlayers){
                    std::cout << it << " ";
                }
                break;
        }

    };



};
