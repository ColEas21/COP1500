#include <iostream>
#include <vector>
#include "FantasyFootballTeam.cpp"
#include "PlayerArrays.cpp"
#include "Round.cpp"
#include "FootballArt.cpp"
#include "Ui.h"
const std::array<std::string, 3> Rbs = {"Joe Mixon", "Barry Sanders", "Adrian Peterson"};
const std::array<std::string, 3> Qbs = {"Tom Brady", "Dax Prescott", "Joe Burrow"};
const std::array<std::string, 3> Wrs = {"Cooper Kupp", "Davante Adams", "Tyreek Hill"};
const std::array<std::string, 3> Defenses = {"Buffalo", "Tampa", "Dallas"};

int main()
{

    std::vector<std::string> team1draftedPlayers;
    FantasyTeam UserTeam;
    std::string team1Name;
    std::string team1RD1Pick, team1RD2Pick, team1RD3Pick;
    std::string team2Rd1pick, team2Rd2pick, team2Rd3pick;
    std::string team2name;
    FantasyTeam team2info;
    std::string team3Rd1pick, team3Rd2pick, team3Rd3pick;
    std::string team3name;
    FantasyTeam team3info;
    HelmetGraphic HelmetVisual;
    FootballGraphic FootballVisual;

    std::cout << "Welcome to my fantasy football draft!" << std::endl;
    FootballVisual.printFootball();
    std::cout << "\n\n\n\n";

    draftRound teamArrays;
    printPlayerArrays(Rbs, Qbs, Wrs, Defenses);


    enterTeamName();
    std::getline(std::cin >> std::ws, team1Name);
    UserTeam.setTeamName(team1Name);
    enterTeamName();
    std::getline(std::cin >> std::ws, team2name);
    team2info.setTeamName(team2name);
    enterTeamName();
    std::getline(std::cin, team3name);
    team3info.setTeamName(team3name);


    //Round 1
    draftRound roundOne;

    printArraysAfterRound RdOne;
    printArraysAfterRound::RoundRecap RD_one;
    std::cout << "First Round: " << std::endl;
    HelmetVisual.printHelmet();
    std::cout << "\n\n\n";
    std::cout << team1Name << std::endl;
    printDraftQuestion();
    std::getline(std::cin >> std::ws,team1RD1Pick);
    roundOne.setTeam1(team1RD1Pick);
    RdOne.setTeam1(team1RD1Pick);
    UserTeam.setRound1Selection(team1RD1Pick);
    std::cout << team2name << std::endl;
    printDraftQuestion();
    std::getline(std::cin >> std::ws, team2Rd1pick);
    roundOne.setTeam2(team2Rd1pick);
    RdOne.setTeam2(team2Rd1pick);
    team2info.setRound1Selection(team2Rd1pick);
    std::cout << team3name << std::endl;
    printDraftQuestion();
    std::getline(std::cin >> std::ws, team3Rd1pick);
    roundOne.setTeam3(team3Rd1pick);
    RdOne.setTeam3(team3Rd1pick);
    team3info.setRound1Selection(team3Rd1pick);
    RdOne.printRoundRecap();
    //RD_one.updatedPlayerAvailable(Rbs, Qbs, Wrs, Defenses, team1RD1Pick, team2Rd2pick, team3Rd1pick);
    std::vector<std::string> Rd1Rbs = convertArrayToVec(Rbs);
    std::vector<std::string> Rd1Qbs = convertArrayToVec(Qbs);
    std::vector<std::string> Rd1Wrs = convertArrayToVec(Wrs);
    std::vector<std::string> Rd1Defenses = convertArrayToVec(Defenses);
    RD_one.setRbsvec(Rd1Rbs);
    RD_one.setQbsvec(Rd1Qbs);
    RD_one.setWrsVec(Rd1Wrs);
    RD_one.setDefensesVec(Rd1Defenses);
    printVector(RD_one.rbsAvailable(Rd1Rbs, team1RD1Pick, team2Rd1pick, team3Rd1pick));
    printVector(RD_one.QbsAvailable(Rd1Qbs, team1RD1Pick, team2Rd1pick, team3Rd1pick));
    printVector(RD_one.WrsAvailable(Rd1Wrs, team1RD1Pick, team2Rd1pick, team3Rd1pick));
    printVector(RD_one.DefensesAvailable(Rd1Defenses, team1RD1Pick, team2Rd1pick, team3Rd1pick));
    std::string Team1Rd1TradeRes, Team2Rd1TradeRes, Team3Rd1TradeRes;
    std::cout << team1Name << std::endl;
    //trade which acts as a boss battle for this project
    tradeQuest();
    std::getline(std::cin >> std::ws, Team1Rd1TradeRes);

    if (tradeCheck(Team1Rd1TradeRes) == true){
        std::string Team1TradePlayerRd1, Team1TradeDesPlayerRd1;
        tradePlayeroffer();
        std::getline(std::cin >> std::ws, Team1TradePlayerRd1);
        UserTeam.setPlayerTradedRd1(Team1TradePlayerRd1);
        desiredPlayerRec();
        std::getline(std::cin >> std::ws, Team1TradeDesPlayerRd1);
        //UserTeam.setplayerreceviedRd1(Team1TradeDesPlayerRd1);
        if (Team1TradeDesPlayerRd1 == team2Rd1pick){
            std::string team2AoD;
            std::cout << team2name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team2AoD);
            UserTeam.setTradeAcceptedRd1(tradeCheck(team2AoD));
            if (tradeCheck(team2AoD) == true){
                UserTeam.setplayerreceviedRd1(Team1TradeDesPlayerRd1);
                team2info.setplayerreceviedRd1(Team1TradePlayerRd1);

            }

        }
        if (Team1TradeDesPlayerRd1 == team3Rd1pick){
            std::string team3AoD;
            std::cout << team3name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team3AoD);
            UserTeam.setTradeAcceptedRd1(tradeCheck(team3AoD));
            if (tradeCheck(team3AoD) == true){
                UserTeam.setplayerreceviedRd1(Team1TradeDesPlayerRd1);
                team3info.setplayerreceviedRd1(Team1TradePlayerRd1);

            }
        }
    }
    std::cout << team2name << std::endl;
    tradeQuest();
    std::getline(std::cin >> std::ws, Team2Rd1TradeRes);
    if (tradeCheck(Team2Rd1TradeRes) == true){
        std::string Team2TradePlayerRd1, Team2TradeDesPlayerRd1;
        tradePlayeroffer();
        std::getline(std::cin >> std::ws, Team2TradePlayerRd1);
        team2info.setPlayerTradedRd1(Team2TradePlayerRd1);
        desiredPlayerRec();
        std::getline(std::cin >> std::ws, Team2TradeDesPlayerRd1);
        //team2info.setplayerreceviedRd1(Team2TradeDesPlayerRd1);
        if (Team2TradeDesPlayerRd1 == team1RD1Pick){
            std::string team1AoD;
            std::cout << team1Name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team1AoD);
            team2info.setTradeAcceptedRd1(tradeCheck(team1AoD));
            if (tradeCheck(team1AoD) == true){
                UserTeam.setplayerreceviedRd1(Team2TradeDesPlayerRd1);
                team2info.setplayerreceviedRd1(Team2TradePlayerRd1);

            }

        }
        if (Team2TradeDesPlayerRd1 == team3Rd1pick){
            std::string team3AoD;
            std::cout << team3name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team3AoD);
            team2info.setTradeAcceptedRd1(tradeCheck(team3AoD));
            if (tradeCheck(team3AoD) == true){
                team3info.setplayerreceviedRd1(Team2TradeDesPlayerRd1);
                team2info.setplayerreceviedRd1(Team2TradePlayerRd1);

            }
        }

    }
    std::cout << team3name << std::endl;
    tradeQuest();
    std::getline(std::cin >> std::ws, Team3Rd1TradeRes);
    //team3info.setTradeYNCheckRd1(tradeCheck(Team3Rd1TradeRes));
    if (tradeCheck(Team3Rd1TradeRes) == true){
        std::string Team3TradePlayerRd1, Team3TradeDesPlayerRd1;
        tradePlayeroffer();
        std::getline(std::cin >> std::ws, Team3TradePlayerRd1);
        team2info.setPlayerTradedRd1(Team3TradePlayerRd1);
        desiredPlayerRec();
        std::getline(std::cin >> std::ws, Team3TradeDesPlayerRd1);
        //team3info.setplayerreceviedRd1(Team3TradeDesPlayerRd1);
        if (Team3TradeDesPlayerRd1 == team1RD1Pick){
            std::string team1AoD;
            std::cout << team1Name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team1AoD);
            team3info.setTradeAcceptedRd1(tradeCheck(team1AoD));
            if (tradeCheck(team1AoD) == true){
                UserTeam.setplayerreceviedRd1(Team3TradeDesPlayerRd1);
                team3info.setplayerreceviedRd1(Team3TradePlayerRd1);

            }
        }
        if (Team3TradeDesPlayerRd1 == team2Rd1pick){
            std::string team2AoD;
            std::cout << team2name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team2AoD);
            team3info.setTradeAcceptedRd1(tradeCheck(team2AoD));
            if (tradeCheck(team2AoD) == true){
                team2info.setplayerreceviedRd1(Team3TradeDesPlayerRd1);
                team3info.setplayerreceviedRd1(Team3TradePlayerRd1);

            }
        }

    }










    //round 2
    draftRound RD_two;
    printArraysAfterRound RdTwo;
    printArraysAfterRound::RoundRecap rTwo;
    std::cout << "Round 2: " << std::endl;
    FootballVisual.printFootball();
    std::cout << "\n\n\n";
    std::cout << team1Name << std::endl;
    printDraftQuestion();
    std::getline(std::cin >> std::ws,team1RD2Pick);
    RD_two.setTeam1(team1RD2Pick);
    RdTwo.setTeam1(team1RD2Pick);
    UserTeam.setRound2Selection(team1RD2Pick);
    std::cout << team2name << std::endl;
    printDraftQuestion();
    std::getline(std::cin >> std::ws,team2Rd2pick);
    RD_two.setTeam2(team2Rd2pick);
    team2info.setRound2Selection(team2Rd2pick);
    RdTwo.setTeam2(team2Rd2pick);
    std::cout << team3name << std::endl;
    printDraftQuestion();
    std::getline(std::cin >> std::ws,team3Rd2pick);
    RD_two.setTeam3(team3Rd2pick);
    team3info.setRound2Selection(team3Rd2pick);
    RdTwo.setTeam3(team3Rd2pick);
    RdTwo.printRoundRecap();
    std::vector<std::string> preRd2AvaRbs = RD_one.rbsAvailable(Rd1Rbs, team1RD1Pick, team2Rd1pick, team3Rd1pick);
    std::vector<std::string> postRd2AvaRbs =rTwo.rbsAvailable(preRd2AvaRbs, team1RD2Pick, team2Rd2pick, team3Rd2pick);
    printVector(postRd2AvaRbs);
    std::vector<std::string> preRd2AvaQbs = RD_one.QbsAvailable(Rd1Qbs, team1RD1Pick, team2Rd1pick, team3Rd1pick);
    std::vector<std::string> postRd2AvaQbs = rTwo.QbsAvailable(preRd2AvaQbs, team1RD2Pick, team2Rd2pick, team3Rd2pick);
    printVector(postRd2AvaQbs);
    std::vector<std::string> preRd2AvaWrs = RD_one.WrsAvailable(Rd1Wrs, team1RD1Pick, team2Rd1pick, team3Rd1pick);
    std::vector<std::string> postRd2AvaWrs = rTwo.QbsAvailable(preRd2AvaWrs, team1RD2Pick, team2Rd2pick, team3Rd2pick);
    printVector(postRd2AvaWrs);
    std::vector<std::string> preRd2AvaDefenses = RD_one.DefensesAvailable(Rd1Defenses, team1RD1Pick, team2Rd1pick, team3Rd1pick);
    std::vector<std::string> postRd2AvaDefenses = rTwo.DefensesAvailable(preRd2AvaDefenses, team1RD2Pick, team2Rd2pick, team3Rd2pick);
    printVector(postRd2AvaDefenses);
    std::string Team1Rd2TradeRes, Team2Rd2TradeRes, Team3Rd2TradeRes;
    std::cout << team1Name << std::endl;
    tradeQuest();
    std::getline(std::cin >> std::ws, Team1Rd2TradeRes);
    if (tradeCheck(Team1Rd2TradeRes) == true){
        std::string Team1TradePlayerRd2, Team1TradeDesPlayerRd2;
        tradePlayeroffer();
        std::getline(std::cin >> std::ws, Team1TradePlayerRd2);
        //UserTeam.setPlayerTradedRd2(Team1TradePlayerRd2);
        desiredPlayerRec();
        std::getline(std::cin >> std::ws, Team1TradeDesPlayerRd2);
        //UserTeam.setplayerreceviedRd1(Team1TradeDesPlayerRd2);
        if (Team1TradeDesPlayerRd2 == team2Rd2pick){
            std::string team2AoD;
            std::cout << team2name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team2AoD);
            UserTeam.setTradeAcceptedRd2(tradeCheck(team2AoD));
            if (tradeCheck(team2AoD) == true){
                UserTeam.setplayerreceviedRd2(Team1TradeDesPlayerRd2);
                team2info.setplayerreceviedRd2(Team1TradePlayerRd2);

            }

        }
        if (Team1TradeDesPlayerRd2 == team3Rd2pick){
            std::string team3AoD;
            std::cout << team3name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team3AoD);
            UserTeam.setTradeAcceptedRd2(tradeCheck(team3AoD));
            if (tradeCheck(team3AoD) == true){
                UserTeam.setplayerreceviedRd2(Team1TradeDesPlayerRd2);
                team3info.setplayerreceviedRd2(Team1TradePlayerRd2);

            }
        }
    }
    std::cout << team2name << std::endl;
    tradeQuest();
    std::getline(std::cin >> std::ws, Team2Rd2TradeRes);
    if (tradeCheck(Team2Rd2TradeRes) == true){
        std::string Team2TradePlayerRd2, Team2TradeDesPlayerRd2;
        tradePlayeroffer();
        std::getline(std::cin >> std::ws, Team2TradePlayerRd2);
        team2info.setPlayerTradedRd1(Team2TradePlayerRd2);
        desiredPlayerRec();
        std::getline(std::cin >> std::ws, Team2TradeDesPlayerRd2);
        //team2info.setplayerreceviedRd1(Team2TradeDesPlayerRd2);
        if (Team2TradeDesPlayerRd2 == team1RD2Pick){
            std::string team1AoD;
            std::cout << team1Name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team1AoD);
            team2info.setTradeAcceptedRd2(tradeCheck(team1AoD));
            if (tradeCheck(team1AoD) == true){
                team2info.setplayerreceviedRd2(Team2TradeDesPlayerRd2);
                UserTeam.setplayerreceviedRd2(Team2TradePlayerRd2);

            }
        }
        if (Team2TradeDesPlayerRd2 == team3Rd2pick){
            std::string team3AoD;
            std::cout << team3name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team3AoD);
            team2info.setTradeAcceptedRd2(tradeCheck(team3AoD));
            if (tradeCheck(team3AoD) == true){
                team2info.setplayerreceviedRd2(Team2TradeDesPlayerRd2);
                team3info.setplayerreceviedRd2(Team2TradePlayerRd2);

            }
        }

    }
    std::cout << team3name << std::endl;
    tradeQuest();
    std::getline(std::cin >> std::ws, Team3Rd2TradeRes);
    //team3info.setTradeYNCheckRd1(tradeCheck(Team3Rd1TradeRes));
    if (tradeCheck(Team3Rd2TradeRes) == true){
        std::string Team3TradePlayerRd2, Team3TradeDesPlayerRd2;
        tradePlayeroffer();
        std::getline(std::cin >> std::ws, Team3TradePlayerRd2);
        team2info.setPlayerTradedRd1(Team3TradePlayerRd2);
        desiredPlayerRec();
        std::getline(std::cin >> std::ws, Team3TradeDesPlayerRd2);
        //team3info.setplayerreceviedRd1(Team3TradeDesPlayerRd2);
        if (Team3TradeDesPlayerRd2 == team1RD2Pick){
            std::string team1AoD;
            std::cout << team1Name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team1AoD);
            team3info.setTradeAcceptedRd2(tradeCheck(team1AoD));
            if (tradeCheck(team1AoD) == true){
                team3info.setplayerreceviedRd2(Team3TradeDesPlayerRd2);
                UserTeam.setplayerreceviedRd2(Team3TradePlayerRd2);

            }

        }
        if (Team3TradeDesPlayerRd2 == team2Rd2pick){
            std::string team2AoD;
            std::cout << team2name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team2AoD);
            team3info.setTradeAcceptedRd2(tradeCheck(team2AoD));
            if (tradeCheck(team2AoD) == true){
                team3info.setplayerreceviedRd2(Team3TradeDesPlayerRd2);
                team2info.setplayerreceviedRd2(Team3TradePlayerRd2);

            }
        }

    }




    // round 3 and final round
    draftRound RD_three;
    printArraysAfterRound RdThree;
    printArraysAfterRound::RoundRecap rThree;
    std::cout << "Round 3: " << std::endl;
    FootballVisual.printFootball();
    std::cout << "\n\n\n";
    std::cout << team1Name << std::endl;
    printDraftQuestion();
    std::getline(std::cin >> std::ws,team1RD3Pick);
    RD_three.setTeam1(team1RD3Pick);
    UserTeam.setRound3Selection(team1RD3Pick);
    RdThree.setTeam1(team1RD3Pick);
    std::cout << team2name << std::endl;
    printDraftQuestion();
    std::getline(std::cin >> std::ws,team2Rd3pick);
    RD_three.setTeam2(team2Rd3pick);
    RdThree.setTeam2(team2Rd3pick);
    team2info.setRound3Selection(team2Rd3pick);

    std::cout << team3name << std::endl;
    printDraftQuestion();
    std::getline(std::cin >> std::ws,team3Rd3pick);
    RD_three.setTeam3(team3Rd3pick);
    team3info.setRound3Selection(team3Rd3pick);
    RdThree.setTeam3(team3Rd3pick);
    RdThree.printRoundRecap();
    //since all the Vectors will be empty no need to print out available players
    std::string Team1Rd3TradeRes, Team2Rd3TradeRes, Team3Rd3TradeRes;
    std::cout << team1Name << std::endl;
    tradeQuest();
    std::getline(std::cin >> std::ws, Team1Rd3TradeRes);
    if (tradeCheck(Team1Rd3TradeRes) == true){
        std::string Team1TradePlayerRd3, Team1TradeDesPlayerRd3;
        tradePlayeroffer();
        std::getline(std::cin >> std::ws, Team1TradePlayerRd3);
        //UserTeam.setPlayerTradedRd2(Team1TradePlayerRd2);
        desiredPlayerRec();
        std::getline(std::cin >> std::ws, Team1TradeDesPlayerRd3);
        //UserTeam.setplayerreceviedRd1(Team1TradeDesPlayerRd3);
        if (Team1TradeDesPlayerRd3 == team2Rd3pick){
            std::string team2AoD;
            std::cout << team2name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team2AoD);
            UserTeam.setTradeAcceptedRd2(tradeCheck(team2AoD));
            if (tradeCheck(team2AoD) == true){
                UserTeam.setplayerreceviedRd3(Team1TradeDesPlayerRd3);
                team2info.setplayerreceviedRd3(Team1TradePlayerRd3);

            }
        }
        if (Team1TradeDesPlayerRd3 == team3Rd3pick){
            std::string team3AoD;
            std::cout << team3name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team3AoD);
            UserTeam.setTradeAcceptedRd2(tradeCheck(team3AoD));
            if (tradeCheck(team3AoD) == true){
                UserTeam.setplayerreceviedRd3(Team1TradeDesPlayerRd3);
                team3info.setplayerreceviedRd3(Team1TradePlayerRd3);

            }
        }
    }
    std::cout << team2name << std::endl;
    tradeQuest();
    std::getline(std::cin >> std::ws, Team2Rd3TradeRes);
    if (tradeCheck(Team2Rd3TradeRes) == true){
        std::string Team2TradePlayerRd3, Team2TradeDesPlayerRd3;
        tradePlayeroffer();
        std::getline(std::cin >> std::ws, Team2TradePlayerRd3);
        team2info.setPlayerTradedRd1(Team2TradePlayerRd3);
        desiredPlayerRec();
        std::getline(std::cin >> std::ws, Team2TradeDesPlayerRd3);
        //team2info.setplayerreceviedRd1(Team2TradeDesPlayerRd3);
        if (Team2TradeDesPlayerRd3 == team1RD3Pick){
            std::string team1AoD;
            std::cout << team1Name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team1AoD);
            team2info.setTradeAcceptedRd3(tradeCheck(team1AoD));
            if (tradeCheck(team1AoD) == true){
                team2info.setplayerreceviedRd3(Team2TradeDesPlayerRd3);
                UserTeam.setplayerreceviedRd3(Team2TradePlayerRd3);

            }
        }
        if (Team2TradeDesPlayerRd3 == team3Rd3pick){
            std::string team3AoD;
            std::cout << team3name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team3AoD);
            team2info.setTradeAcceptedRd3(tradeCheck(team3AoD));
            if (tradeCheck(team3AoD) == true){
                team2info.setplayerreceviedRd3(Team2TradeDesPlayerRd3);
                team3info.setplayerreceviedRd3(Team2TradePlayerRd3);

            }
        }

    }
    std::cout << team3name << std::endl;
    tradeQuest();
    std::getline(std::cin >> std::ws, Team3Rd3TradeRes);
    //team3info.setTradeYNCheckRd1(tradeCheck(Team3Rd1TradeRes));
    if (tradeCheck(Team3Rd3TradeRes) == true){
        std::string Team3TradePlayerRd3, Team3TradeDesPlayerRd3;
        tradePlayeroffer();
        std::getline(std::cin >> std::ws, Team3TradePlayerRd3);
        team2info.setPlayerTradedRd1(Team3TradePlayerRd3);
        desiredPlayerRec();
        std::getline(std::cin >> std::ws, Team3TradeDesPlayerRd3);
        //team3info.setplayerreceviedRd1(Team3TradeDesPlayerRd3);
        if (Team3TradeDesPlayerRd3 == team1RD3Pick){
            std::string team1AoD;
            std::cout << team1Name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team1AoD);
            team3info.setTradeAcceptedRd2(tradeCheck(team1AoD));
            if (tradeCheck(team1AoD) == true){
                team3info.setplayerreceviedRd3(Team3TradeDesPlayerRd3);
                UserTeam.setplayerreceviedRd3(Team3TradePlayerRd3);

            }
        }
        if (Team3TradeDesPlayerRd3 == team2Rd3pick){
            std::string team2AoD;
            std::cout << team2name << std::endl;
            TradeAcceptQ();
            std::getline(std::cin >> std::ws, team2AoD);
            team3info.setTradeAcceptedRd3(tradeCheck(team2AoD));
            if (tradeCheck(team2AoD) == true){
                team3info.setplayerreceviedRd3(Team3TradeDesPlayerRd3);
                team2info.setplayerreceviedRd3(Team3TradePlayerRd3);

            }
        }

    }

    //prints the recap of the draft
    UserTeam.printDraftPick();

    team2info.printDraftPick();

    team3info.printDraftPick();



    //std::vector<std::string> Rd2Rbs = updateVec(Rd1Rbs, )


    return 0;
}
