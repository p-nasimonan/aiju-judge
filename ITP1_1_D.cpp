#include<iostream>
#include<cmath>

int main(){
    int S;
    std::cin >> S;
    // S = h*3600 + m*60 + s
    int h = S/3600;
    int mps = S%3600;
    int m = mps/60;
    int s = mps%60;
    std::cout << h << ':' << m << ':' << s << std::endl;
}