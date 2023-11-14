#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here

     stringstream ss(macAddress);
    string hexNumber;
    int firstOctet;

    getline(ss, hexNumber, ':');
    stringstream(hexNumber) >> std::hex >> firstOctet;


    string addressType;
    if (firstOctet % 2 == 0) {
        addressType = "Unicast";
    } else if (firstOctet == 0xFF) {
        addressType = "Broadcast";
    } else {
        addressType = "Multicast";
    }
    return 0;
    // make use of control flow statements
    // return result;
}
