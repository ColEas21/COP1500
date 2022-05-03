//
// Created by colli on 5/2/2022.
//
#include "Ui.cpp"
#ifndef FINALPROJECT_UI_H
#define FINALPROJECT_UI_H
void enterTeamName();
void printDraftQuestion();
std::vector<std::string> convertArrayToVec(std::array<std::string, 3> myArray);
std::vector<std::string> updateVec(std::vector<std::string> Rd1Vec, std::vector<std::string> Rd2Vec);
void printVector(std::vector<std::string> myVec1);
void tradeQuest();
bool tradeCheck(std::string userAns1);
void tradePlayeroffer();
void desiredPlayerRec();
void TradeAcceptQ();
#endif //FINALPROJECT_UI_H
