//
//  multiple_matrix.cpp
//  code_test_study
//
//  Created by 황재민 on 10/28/24.
//

/**
 문제 설명
 2차원 행렬 arr1과 arr2를 입력받아, arr1에 arr2를 곱한 결과를 반환하는 함수, solution을 완성해주세요.

 제한 조건
 행렬 arr1, arr2의 행과 열의 길이는 2 이상 100 이하입니다.
 행렬 arr1, arr2의 원소는 -10 이상 20 이하인 자연수입니다.
 곱할 수 있는 배열만 주어집니다.
 */
#include "multiple_matrix.hpp"

vector<vector<int>> multiple_matrix(vector<vector<int>> arr1, vector<vector<int>> arr2){
     int rows = arr1.size();
     int cols = arr2[0].size();
     int inner_dim = arr1[0].size();

    vector<vector<int>> result_vec(rows, vector<int>(cols, 0));
    
    for(int row = 0 ; row < rows ; row++){
        for(int col = 0 ; col < cols ; col++){
            for(int dim = 0 ; dim < inner_dim ; dim++){
                result_vec[row][col] += arr1[row][dim] * arr2[dim][col];
            }
        }
    }
    
    return result_vec;
}
