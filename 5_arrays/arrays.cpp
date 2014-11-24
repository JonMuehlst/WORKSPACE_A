#include <iostream>
#include <cstdlib>
#include <ctime>
#include "gtest/gtest.h"
#include "arrays.h"

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char ** argv){
    
    int a[10];
    fillArrayRandomly(a, 10);
    printArray(a, 10);
    
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

double arraySum(double a[], size_t a_size){
    
    double sum = 0;
    
    return sum;
    
}

void bubbleSort(double * a, size_t a_size){
    
    
    
}

void swap(double * a, double * b){
    

    
}

int stringLength(char str[ ]){
    
     size_t i = 0;
     
     return i;
     
}

void printArray(int * a, size_t a_size){
    
    
}

void fillArrayRandomly(int * a, size_t a_size){

    srand(time(0));

	
}

int getMax(int * a, size_t a_size){
	
	int max = a[0];
	
	
	return max;
	
}

bool find(int * a, size_t a_size, int num){
    
    bool ans = false;

	return ans;
	
}


/*================================================================================

                                    Tests

================================================================================*/

TEST(Arrays, array_sum){
    
    double a[100];
    
    for(size_t i = 0; i < 100; i++){
        a[i] = i+1;
    }
    
    EXPECT_DOUBLE_EQ(5050, arraySum(a, 100));
    
}

TEST(Arrays, bubble_sort){
    
    
    
}

TEST(Arrays, string_length){
    
    
    
}

TEST(Arrays, get_max){
    
    
}

TEST(Arrays, find_num){
    
    int a[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 100 };
    
    EXPECT_TRUE(find(a, 10, 5));
    EXPECT_FALSE(find(a, 10, 75));
    
}