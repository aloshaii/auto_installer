#include "debiannvidia.h"
#include "default.h"
#include "nvidia.h"
#include "yaypkg.h"
#include <cstdlib>
#include <iostream>

using namespace std;
int main() {

  int ans;
  do {
    std::cout << "=====================================\n";
    std::cout << "|    /\\  AUTO INSTALLER v1.0  /\\    |\n";
    std::cout << "=====================================\n";

    std::cout << "Which linux base are you using ?" << '\n';

    std::cout
        << "1. for Arch-based distribution. 2. for Debian-based distribution: ";

    std::cin >> ans;
  } while (ans != 1 && ans != 2);

  if (ans == 1) {
    std::string anv;
    std::cout << "Do you want to install yay pkg ?";
    std::cout << "Please type 'Yes' or 'No' ";
    std::cin >> anv;

    if (anv == "Yes" || anv == "yes" || anv == "y" || anv == "Y") {
      installYAYpkg();
    }
  }

  // Installation part
  std::cout << "Linux packages are installing...\n";

  if (ans == 1) {
    // this should all just be 1 function but i cant be asked
    installNvidiaDrivers();
    Installdefaultpkg();
    system("sudo pacman -Syyu");
    std::cout << "Installation Complete.\n";
    system("sudo reboot now");
  } else if (ans == 2) {
    // same here
    Installdebnvidia();
    InstalldefaultpkgDeb();
    system("sudo apt update && sudo apt upgrade");
    std::cout << "Installation Complete.\n";
    system("sudo reboot now");
  } else {
    cout << "BASE ERROR!! Please try again";
  }
}
