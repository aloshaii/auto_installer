#include "default.h"
#include <cstdlib>

void Installdefaultpkg() {
  system("sudo pacman -S flatpak");
  system("sudo pacman -S zip");
  system("sudo pacman -S vim");
};

void InstalldefaultpkgDeb() {
  system("sudo apt install flatpak");
  system("sudo apt install zip");
  system("sudo apt install vim");
};
