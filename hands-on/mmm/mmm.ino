/*
  Created by Olga Saukh
  Embedded Machine Learning at TU Graz
*/

#include <cmath>
#include "arm_math.h" /* Install Arduino-CMSIS-DSP*/
/* Arduino-CMSIS-DSP is a suite of common signal processing functions 
for use on Cortex-M and Cortex-A processor based */

const int n = 4;
float A[n*n] = {1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9, 1, 2, 3, 4, 5};
float C[n*n];

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("Starting computation:");
}

void loop() {
    /* Exercise 1: Compute mmm(A,A,C) and verify that you get 
       the same result as in the lecture. Use floats instead of doubles. */
    /* ### START CODE HERE ### */
    
    /* ### END CODE HERE */

    
    /* Exercise 2: Time mmm computation over 5000 function calls */
    /* ### START CODE HERE ### */
    
    /* ### END CODE HERE */


    /* Exercise 3: Install Arduino-CMSIS-DSP library. Compute mmm using 
       CMSIS arm_mat_mult_f32() function. */
    /* ### START CODE HERE ### */
    
    /* ### END CODE HERE */


    /* Exercise 4: Time mmm computation with CMSIS over 5000 function calls
       and compare to above. */
    /* ### START CODE HERE ### */
    
    /* ### END CODE HERE */

    delay(5000); // 5s
}
