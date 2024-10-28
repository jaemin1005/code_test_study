//
//  make_min.cpp
//  code_test_study
//
//  Created by 황재민 on 10/28/24.
//

#include "make_min.hpp"
#include <algorithm>

int make_min(vector<int> A, vector<int> B){
    
    int result = 0;
    
    sort(A.begin(), A.end());
    sort(B.rbegin(), B.rend());
    

    for(size_t idx = 0 ; idx < A.size() ; ++idx){
        result += A[idx] * B[idx];
    }
    
    return result;
}
