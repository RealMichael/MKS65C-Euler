#include <stdio.h>


int ProbJuan(){
  int ans = 0;
  for(int i = 0; i < 1000; i ++){
    if(i % 3 == 0 || i % 5 == 0){
      ans += i;
    }
  }
  return ans;
}


int ProbFive(){
  int ans = 20;
  // boolean solve = false;
  for(int i = 1; i <= 20; i ++){
    if(ans % i != 0){
      ans += 1;
      i = 1;
    }
  }
  return ans;
}
   



int main(){
 
  printf("Problem One- Find the sum of all the multiples of 3 or 5 below 1000. Solution is...... %d \n",ProbJuan());
  printf("Problem Five- What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?  Solution is...... %d \n", ProbFive());

  return 0;
}
