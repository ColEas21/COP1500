#include <iostream>
#include <array>
#include <vector>
/*std::vector<std::string> convertArrayToVec(std::array<std::string, 3> Rbs){
    std::vector<std::string> RbsVec(std::begin(Rbs), std::end(Rbs));
    return RbsVec;

}*/



inline void printPlayerArrays(std::array<std::string, 3> Rbs, std::array<std::string, 3> Qbs, std::array<std::string, 3> Wrs, std::array<std::string, 3> Defenses){
    //std::array<std::string, 3> Rbs = {"Joe Mixon", "Barry Sanders", "Adrian Peterson"};

    std::cout << "Running Backs available: " << std::endl;
    for (int i = 0; i < Rbs.size(); i++){
        std::cout << Rbs[i] << "," << " "; //<< std::endl;
    };
    std::cout << "\nQuateracks available: " << std::endl;
    for (int j = 0; j < Qbs.size(); j++){
        std::cout << Qbs[j] << "," << " ";
    };
    std::cout << "\nWide Receivers available: " << std::endl;
    for (int a = 0; a < Wrs.size(); a++){
        std::cout << Wrs[a] << "," << " ";
    };
    std::cout << "\nDefenses available: " << std::endl;
    for (int b = 0; b < Defenses.size(); b++){
        std::cout << Defenses[b] << "," << " ";
    };
}


