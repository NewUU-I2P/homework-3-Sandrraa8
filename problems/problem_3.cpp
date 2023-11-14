#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
switch (S) {
        case 'M':
            if (height<1.7){
                result = "Short";
            }else if (height>=1.7&&height<1.85){
                result = "Normal";
            }else (height >= 1.85){
                result = "Tall";
            }
        case 'F':
            if (height<1.6){
                result = "Short";
            }else if(height>=1.6&&height<1.75){
                result = "Normal";
            }else(height >= 1.75){
                result = "Tall";
            }
    }
    // use return to return your result
    return result;
    // make use of control flow statements
}
