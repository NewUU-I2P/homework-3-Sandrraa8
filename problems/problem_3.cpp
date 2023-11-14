#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
  switch (S) {
        case 'M':
            if (height<1.7){
                cout<<"Short\n";
            }else if (height>=1.7&&height<1.85){
                cout<<"Normal\n";
            }else{
                cout<<"Tall\n";
            }
            break;
        case 'F':
            if (height<1.6){
                cout<<"Short\n";
            }else if(height>=1.6&&height<1.75){
                cout<<"Normal\n";
            }else{
                cout<<"Tall\n";
            }
    }
    return 0;
    }
    // use return to return your result
    // make use of control flow statements
}
