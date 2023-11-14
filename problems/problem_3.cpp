#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here

    switch (S){
        case 'M':
            if (height < 1.70)
                return "Short";
            else if (height >= 1.70 and height < 1.85)
                return "Normal";
            else
                return "Tall";
            break;
        case 'F':
            if (height < 1.60)
                return "Short";
            else if (height >= 1.60 and height < 1.75)
                return "Normal";
            else
                return "Tall";
            break;
    }
    // use return to return your result
    // make use of control flow statements
}