// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 4.
void remove_negative(std::vector<int>& input) {
    for ( size_t i=0; i<size(input); ++i){
      if ( input[i]<0)
      {
        auto iter=input.cbegin();
        input.erase(iter+i);
        break;
      }
    }
}

void remove_last_even(std::vector<int>& input) {
    for ( size_t i=size(input); i>0; --i){
      if ( input[i]%2==0)
      {
        auto iter=input.cbegin();
        input.erase(iter+i);
        break;
      }
    }
}
