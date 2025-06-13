#include <iostream>
#include <cstdlib>
#include "debiannvidia.h"

void Installdebnvidia() {
    std::cout << "Downloading NVIDIA drivers for Debian...";
    system("sudo apt update && sudo apt upgrade -y");
    system("sudo sudo apt install build-essential dkms && sudo apt install nvidia-driver-535");

}