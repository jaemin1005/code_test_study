//
//  least_common_multiple.cpp
//  code_test_study
//
//  Created by 황재민 on 10/29/24.
//

/**
 문제 설명
 두 수의 최소공배수(Least Common Multiple)란 입력된 두 수의 배수 중 공통이 되는 가장 작은 숫자를 의미합니다. 예를 들어 2와 7의 최소공배수는 14가 됩니다. 정의를 확장해서, n개의 수의 최소공배수는 n 개의 수들의 배수 중 공통이 되는 가장 작은 숫자가 됩니다. n개의 숫자를 담은 배열 arr이 입력되었을 때 이 수들의 최소공배수를 반환하는 함수, solution을 완성해 주세요.

 제한 사항
 arr은 길이 1이상, 15이하인 배열입니다.
 arr의 원소는 100 이하인 자연수입니다.
 */

#include "least_common_multiple.hpp"

int least_common_multiple(vector<int> arr){
    
    int max_num = arr[arr.size()-1];
    int find = false;
    int multiple_idx = 1;
    
    while(true){
        int multiple_num = max_num * multiple_idx;
        int arr_check = true;
    
        for(int idx = 0 ; idx < arr.size() - 1 ; idx++){
            if(multiple_num % arr[idx] != 0)
                arr_check = false;
        }
        
        if(arr_check == true){
            break;
        } else {
            multiple_idx++;
        }
    }
    
    return max_num * multiple_idx;
}
