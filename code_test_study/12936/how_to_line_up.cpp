//
//  how_to_line_up.cpp
//  code_test_study
//
//  Created by 황재민 on 10/28/24.
//

/**
 문제 설명
 n명의 사람이 일렬로 줄을 서고 있습니다. n명의 사람들에게는 각각 1번부터 n번까지 번호가 매겨져 있습니다. n명이 사람을 줄을 서는 방법은 여러가지 방법이 있습니다. 예를 들어서 3명의 사람이 있다면 다음과 같이 6개의 방법이 있습니다.

 [1, 2, 3]
 [1, 3, 2]
 [2, 1, 3]
 [2, 3, 1]
 [3, 1, 2]
 [3, 2, 1]
 사람의 수 n과, 자연수 k가 주어질 때, 사람을 나열 하는 방법을 사전 순으로 나열 했을 때, k번째 방법을 return하는 solution 함수를 완성해주세요.

 제한사항
 n은 20이하의 자연수 입니다.
 k는 n! 이하의 자연수 입니다.
 */
#include "how_to_line_up.hpp"

vector<int> how_to_line_up(int n, long long k){
    vector<int> result_vec;
    vector<int> num_vec;
    vector<long long> factorial_vec(n+1, 1);
    
    for(int num = 1 ; num <= n ; num++){
        num_vec.push_back(num);
        factorial_vec[num] = factorial_vec[num-1] * num;
    }

    k--;
    for(int idx = n - 1 ; idx >= 0 ; idx-- ){
        long long factorial_num = factorial_vec[idx];
        int find_idx = k / factorial_num;
        
        int find_num = num_vec[find_idx];
        result_vec.push_back(find_num);
        num_vec.erase(num_vec.begin() + find_idx);
        
        k %= factorial_num;
    }
    
    return result_vec;
}
