#include <iostream>

void print(unsigned short int const array [], size_t size);
unsigned short int *apply_all(unsigned short int const array1 [], size_t size1, unsigned short int const array2 [], size_t size2);

int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};

    unsigned short int array1[] {1,2,3,4,5};
    unsigned short int array2[] {10, 20, 30};

    std::cout << "Array 1: ";
    print(array1, array1_size);

    std::cout << "Array 2: ";
    print(array2, array2_size);

    unsigned short int *results = apply_all(array1, array1_size, array2, array2_size);

    constexpr size_t results_size {array1_size * array2_size};

    std::cout << "Results: ";
    print(results, results_size);

    std::cout << std::endl; 

    return 0;
}

void print(unsigned short int const array[], size_t size) {
    std::cout << "[ ";
    for (size_t array_index {0}; array_index < size; array_index ++) {
        std::cout << array[array_index] << " ";
    } std::cout << "]" << std::endl;
}

 unsigned short int *apply_all(unsigned short int const array1 [], size_t size1, unsigned short int const array2 [], size_t size2) {
    unsigned short int *new_array {nullptr};

    new_array = new unsigned short int[size1 * size2];
    unsigned short int new_array_index {0};

    while (new_array_index < size1 * size2) {
        for (size_t array2_index {0}; array2_index < size2; array2_index ++) {
            for (size_t array1_index {0}; array1_index < size1; array1_index ++) {
                *(new_array + new_array_index) = array1[array1_index] * array2[array2_index];  
                new_array_index ++;
            }
        }
    } return new_array;
 }