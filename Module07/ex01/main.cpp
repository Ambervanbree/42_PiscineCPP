void    plusOne(int *n){
    (*n)++;
    return ;
}

int     main(void){
    int array = {1, 2, 3, 4};
    for (int i = 0; i < 4, i++){
        std::cout << array[i] << std::endl;
    }
    iter(array, 4, plusOne(array));
    for (int i = 0; i < 4, i++){
        std::cout << array[i] << std::endl;
    }
}