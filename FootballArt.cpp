#include <iostream>
#include <string>

class graphics{
protected:
    std::string Helmet;
    std::string Football;
public:
    void printHelmet(){
        std::cout << Helmet << std::endl;
    }
    void printFootball(){
        std::cout << Football << std::endl;
    }

};

class HelmetGraphic: public graphics{
public:
    void printHelmet(){
        Helmet = R"(                               $#####R
                       $TT?!X!!!!!!!!!!!!X!TT#$
                  $RT!!!!~~:::!!!!!!!!!!:::~!!!!TT$
                $T!!?~:!!!!!!!!!!!!!!!!!!!!!!!:~~!!TT$
             $RTX?~:!!!!!!!!!!!!!!!!!!!!!!!!!!!!!:~!!!T$
           $R?U?~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!:~!!T$
          $T!T~:!!!!!!!!!!!!!!!!!!~!!!!!!!!!!!!!!!!!!!~!!?$
         $!!!~!!!!!!!!!!!!~~:!xiiUUUUiX!:~~!!!!!!!!!!!!!~!!$
        $?X!:!!!!!!!!!!!~:iW$$T##???###$$8U:~~!!!!!!!!!!!~!!$
       $T!!~!!!!!!!!!!~!X$$R?~       ~~~?TTT!~~!!!!!!!!!!!~!!$
       $!!~!!!!!!!!!!~!$$$$!     :::::~~~::~~:~~!!!!!!!!!!!~!!$
      $?!!~!!!!!!!!!!~!$$$$!::  !#T#####$$$$$$!~!!!!!!!!!!!~!!$
      $!H~!!!!!!!!!!!!~!#$$$U:~       :!8$$$$!~!!!!!!!!!!!!:~!#$
      $!!~!!!!!!!!!!!!!:~!T$$$8UUUiiUW$$$$T?~:!!!!!!!!!!!!!!~!~~~?$
      $!!~!!!!!!!!!!!!!!!::~~###TTTTTT#"~~:!!!!!!!!!!!!!!!!!~! ~~!$
      $!!~!!!!!!!!!!!!!!!!!!!!!!:::::!!!!!!!!!!!!!!!!~~~        ~!$
      $!!~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!~    !!!!!::   X$
      $!!~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!~~ :!! ~!UUUUiUUW$
      $!!~!!!!!!!!!!!!!!!!!!!!!!    X!!!!!!!!~   !!!!:~!$
      $!UUX!!!!!!!!!!!!!!!!!!!!      W!!!!~~ ::: ~!$! ~!$
      $!$$$8!!!!!!!!!!!!!!!!!!!!    T!!!    ~!!!~ ~$X:~!$
      $!T$$$$U!!!!!!!!!!!!!!!!!!!T?!!~  ::   ~!!~: ~!~~!$
       $UUUUUUUUUU!!!!!!!!!!!!!!!!!!:  ~!!!  :!!!W!  ~ !$
                    $U!!!!~!!!!!!!!!!!!::  ~!!!!!$$U!:  ~~#TT$
                      $U!!!!!!!!!!!!!!!!!!::  ~~T$  $~ ::::~  ~~~#TT$
                        $U!!!!!!!!!!!!!!!!!!!!:  ~~##~ ~$ $8UUi::~~~!$
                          $U!!!!!!!!!!!!!!!!!!U8U::    ~TR$     $M~~!$
                             $UU!!!!!!!!!!!!U$    $Wi:   ~ ~~"##T!~~!$
                                  $UUUUUW$          $!~ !Uiu:::    ~!$
                                                    $W:~!$     $W~ :$$
                                                     $X~:!$    $T~ !$$
                                                      $U~ ~?TR$$! ~U$$
                                        Kevin T. Nemec $8i:   ~~  !$$$
        ------------------------------------------------
Thank you for visiting https://asciiart.website/
This ASCII pic can be found at
https://asciiart.website/index.php?art=sports%20and%20activities/football
)";
        std::cout << Helmet << std::endl;
    }
};
class FootballGraphic: public graphics{
public:
    //This ASCII pic can be found at https://asciiart.website/index.php?art=sports%20and%20activities/football
    void printFootball(){
        Football = R"(
            $$$$$$$$$$$*"""""**$$$$$$$$$$$$$$$$$$$$$$$$$$$*Pigskin*$$$$$$$$$$$
            $$$$$$$$$"         .d**$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$         z$"    ^"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$F      .d*"         ^*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$F    z$"$cd"           "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$F .d*" zb*beP            "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$b$"      d*$.e"            *$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$         ze*c.d            "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$r          dP$.e"           ^$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$$           .d$c.d           ^$$$$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$$F            e$b.zr          ^$$$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$$$.            .K$c.e          3$$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$$$$           ^  e$b z=         $$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$$$$$            " .$$L.e        4$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$$$$$$.            " .*$ .r      z$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$$$$$$$c            " .$$L.z  .d*"$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$$$$$$$$$c            " J$E z$"   $$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$$$$$$$$$$$c           "".$P"     $$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$$$$$$$$$$$$$e.        z$"       .$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$$$$$$$$$$$$$$$$c.  .dP"         $$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$$$$$$$$$$$$$$$$$$$$E.         z$$$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ee$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
            $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$Gilo94'$$$$$$$

    )";
    std::cout << Football << std::endl;

    }
};


