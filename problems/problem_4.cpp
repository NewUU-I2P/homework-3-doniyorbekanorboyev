#include <string>
#include <sstream>
#include <cmath>
std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    // write your code here
    std::string macAddressX = macAddress.substr(0,2);
    std::string hexadecimal_letters[6] = {"A","B","C","D","E","F"};
    std::string hexadecimal_integers[6] = {"10","11","12","13","14","15"};
    std::string num;
    std::string result;
    int temp = 0;

    for (int count=1; count != -1; count--){
        num = macAddressX[count];
        if (int(num[0])>=65 & int(num[0]<=70) ){
            for (int i=0; i < 7; i++){
                if (hexadecimal_letters[i] == num){
                    num = hexadecimal_integers[i];
                    break;
                };
            };
        };
        temp = temp + (std::stoi(num))*pow(16, 2-count-1);
    }

    if (temp == 255){
        result = "Broadcast";
    } else {
        if (temp%2 == 1){
            result = "Multicast";
        } else{
            result = "Unicast";
        }
    }
    return result;
    // make use of control flow statements
    // return result;
}
