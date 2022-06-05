#include "iter.hpp"

template<typename T>
void    printItem(T item){
    std::cout << item << std::endl;
    return ;
}

int     main(void){
    int array[4] = {1, 2, 3, 4};
    iter(array, 4, printItem);
}