#include <iostream>
#include <cstdlib>
#include "nvidia.h"
#include "yaypkg.h"
#include "default.h"
#include "debiannvidia.h"

using namespace std;
int main() {

    int ans;
    do{
        std::cout << "=====================================\n";
        std::cout << "|    /\\  AUTO INSTALLER v1.0  /\\    |\n";
        std::cout << "=====================================\n";

        std::cout << "Which linux base are you using ?"<< '\n';
    
        std::cout << "1. for Arch-based distribution. 2. for Debian-based distribution: ";
        
        std::cin >> ans;
    }
    while(ans != 1 && ans!= 2);

    std::string anv;
    std::cout << "Do you want to install yay pkg ?";
    std::cout << "Please type 'Yes' or 'No' ";
    std::cin >> anv;

    //Installation part 
    std::cout << "Linux packages are installing...\n";
    
    if(anv == "Yes"){
        installYAYpkg();
    }

    
    if(ans = 1){
        installNvidiaDrivers();
    }
    else if(ans = 2){
        Installdebnvidia();
    }
    else{
        cout << "BASE ERROR!! Please try again";
    }

    Installdefaultpkg();
    system("sudo pacman -Syyu");
    system("sudo reboot now");
    
    
    std::cout << "Installation Complete.\n";
}