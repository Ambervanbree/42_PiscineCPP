#include "iter.hpp"

template<typename T>
void    printItem(T item){
    std::cout << item << std::endl;
    return ;
}

void    addOne(int &n){
    n++;
    std::cout << "n is " << n << std::endl;
    return ;
}

int     main(void){
    int array[4] = {1, 2, 3, 4};
    iter(array, 4, printItem);
    iter(array, 4, addOne);
    iter(array, 4, printItem);
}