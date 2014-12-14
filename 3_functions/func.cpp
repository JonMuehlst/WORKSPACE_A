#include <iostream>
#include "gtest/gtest.h"

int main(int argc, char ** argv){
    
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    
}

// int abs(int val){
    
    
// }

// int max(int a, int b){
    
// }

void printSong(int place){

  
}

// int factorial(int num){
    
    
    
// }

// int gcd(int a, int b){
    
    
    
// }


/*================================================================================

                                    Tests

================================================================================*/

// TEST(Functions, abs){
    
//     int val = -10;
    
//     EXPECT_EQ(10,abs(val));
    
// }

// TEST(Functions, max){
    
//     int a = 5;
//     int b = 10;
    
//     EXPECT_EQ(b, max(a,b));
    
// }

TEST(Functions, printSong){
    
    for(int i = 0; i <= 10; i++)
        printSong(i);
    
}

// TEST(Functions, factorial){
    
//     int fact = factorial(5);
    
//     EXPECT_EQ(120,fact);
// }

// TEST(Functions, gcd){
    
//     EXPECT_EQ(7,gcd(21,14));
    
// }