#include "nvidia.h"
#include <cstdlib>
#include <iostream>

void installNvidiaDrivers() {
  std::cout << "[INFO] The NVIDIA drivers installing...\n";

    
    int ret = std::system("sudo pacman -Syu nvidia nvidia-utils nvidia-settings");
    int rak = std::system("sudo nvidia-xconfig");
    int rus = std::system("sudo pacman -S nvidia-dkms");
    int ruks = std::system("sudo nvidia-smi -pm 1 &&");
    int rr = std::system("sudo nvidia-smi -lgc 0,0");


    if (ret && rak && rus && ruks && rr == 1) {
        std::cout << "[SUCCESS] The NVIDIA driver was successfully installed.\n";
    } else {
        std::cerr << "[ERROR] The NVIDIA driver could not be installed.(Try Again)\n"; 
    }
}
