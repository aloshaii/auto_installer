#include <iostream>
#include <cstdlib>
#include "yaypkg.h"

void installYAYpkg(){
    std::system("sudo pacman -S --needed git base-devel && git clone https://aur.archlinux.org/yay-bin.git && cd yay-bin && makepkg -si");
    system("yay -S zen-browser");
    system("yay -S bottles");
    system("yay -S visual-studio-code-bin");
}