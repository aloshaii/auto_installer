#include <iostream>
#include <cstdlib>
#include "default.h"

void Installdefaultpkg(){
    system("sudo pacman -S flatpak");
    system("sudo pacman -S zip");
    system("sudo pacman -S vim");

}