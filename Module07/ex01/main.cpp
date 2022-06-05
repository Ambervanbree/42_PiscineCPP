#include "iter.hpp"

template<typename T>
void    printItem(T item){
    std::cout << item << std::endl;
    return ;
}

void    spellBackwards(std::string sentence){
    for (int i = sentence.size() - 1; i ; i--){
        std::cout << sentence[i] << std::endl;
    }
    return ;
}

int     main(void){
    int         array[4] = {1, 2, 3, 4};
    std:string  stringArray[6] = {"yay", "this", "module", "is", "almost", "over"};
    iter(array, 4, printItem);
    iter(array, 6, spellBackwards);
}