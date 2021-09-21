#include <iostream>


void changeToBinaryNum(int quo){
    int div = quo % 2;
    quo = quo / 2;
    if(quo > 0){
        changeToBinaryNum(quo);
        std::cout << div;
    }
    else{
        std::cout << div;
        return;
    }
}

int main() {
    int num;
    std::cin >> num;
    changeToBinaryNum(num);
    return 0;
}
