#include "yaypkg.h"
#include <cstdlib>

void installYAYpkg() {
  std::system(
      "sudo pacman -S --needed git base-devel && git clone "
      "https://aur.archlinux.org/yay-bin.git && cd yay-bin && makepkg -si");
  // hidden packages. Very, very bad practice!
  // Don't install packages without telling the user
  // the user agreeing
  system("yay -S zen-browser");
  system("yay -S bottles");
  system("yay -S visual-studio-code-bin");
}
