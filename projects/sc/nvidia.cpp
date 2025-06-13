#include <iostream>
#include <cstdlib>
#include "nvidia.h"

void installNvidiaDrivers() {
    std::cout << "[INFO] The NVIDIA drivers installing...\n";

    
    int ret = std::system("sudo pacman -Syu nvidia nvidia-utils nvidia-settings");
    int rak = std::system("sudo nvidia-xconfig");
    int rus = std::system("sudo pacman -S nvidia-dkms");
    int ruks = std::system("sudo nvidia-smi -pm 1");

    if (ret && rak && rus && ruks == 0) {
        std::cout << "[SUCCESS] The NVIDIA driver was successfully installed.\n";
    } else {
        std::cerr << "[ERROR] The NVIDIA driver could not be installed.(Try Again)\n"; 
    }
}
