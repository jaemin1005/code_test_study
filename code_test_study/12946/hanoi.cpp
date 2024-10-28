//
//  hanoi.cpp
//  code_test_study
//
//  Created by 황재민 on 10/28/24.
//

#include "hanoi.hpp"

namespace inner {
    void hanoi_calc(vector<vector<int>> &result_vec, int floor, int start, int goal, int another){
        if(floor == 1) {
            result_vec.push_back({start, goal});
            return;
        }
        
        hanoi_calc(result_vec, floor-1, start, another, goal);
        result_vec.push_back({start, goal});
        hanoi_calc(result_vec, floor-1, another, goal, start);
    }
}

vector<vector<int>> hanoi(int n){
    vector<vector<int>> result_vec;
    
    inner::hanoi_calc(result_vec, n, 1, 3, 2);
    return result_vec;
}
