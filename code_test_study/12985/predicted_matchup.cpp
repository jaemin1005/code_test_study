//
//  predicted_matchup.cpp
//  code_test_study
//
//  Created by 황재민 on 10/29/24.
//

#include "predicted_matchup.hpp"

int predicted_matchup(int n, int a, int b){
    int find_idx = 1;
    
    while(true){
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        if(a == b){
            break;
        }
        find_idx++;
    }
    
    return find_idx;
}
   
