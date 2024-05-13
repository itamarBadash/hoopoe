#include <iostream>
#include <cstdint>
#include "PiSBUS/src/SBUS.h"

int main() {
    SBUS::SBUS Sbus("/dev/ttyS0");

    if (!Sbus.begin()) {
        std::cerr << "Failed to initialize SBUS communication." << std::endl;
        return -1;
    }

    uint16_t channels[16] = {1500, 1500, 1500, 2000, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500}; // All channels set to mid-point except channel 4

    Sbus.write(channels);

    std::cout << "Channel 4 set to 2000 successfully." << std::endl;

    return 0;
}