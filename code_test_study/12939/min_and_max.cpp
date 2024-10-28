//
//  min_and_max.cpp
//  code_test_study
//
//  Created by 황재민 on 10/28/24.
//

/**
 
 문제 설명
 문자열 s에는 공백으로 구분된 숫자들이 저장되어 있습니다. str에 나타나는 숫자 중 최소값과 최대값을 찾아 이를 "(최소값) (최대값)"형태의 문자열을 반환하는 함수, solution을 완성하세요.
 예를들어 s가 "1 2 3 4"라면 "1 4"를 리턴하고, "-1 -2 -3 -4"라면 "-4 -1"을 리턴하면 됩니다.

 제한 조건
 s에는 둘 이상의 정수가 공백으로 구분되어 있습니다.
 
 */

#include <sstream>
#include <iostream>
#include "min_and_max.hpp"
#include <optional>

string min_and_max(string s){
    
    // string을 stream 방식으로 받는다.
    istringstream ss1(s);
    ostringstream oss;
    string temp_buffer;
    
    // rust의 option을 생각하면 편함.
    optional<int> min;
    optional<int> max;
    
    while (getline(ss1, temp_buffer, ' ')) {
        int num = stoi(temp_buffer);

        if (!min && !max) {  // min과 max가 아직 초기화되지 않은 경우
            min = num;
            max = num;
        } else {
            if (*min > num) {
                min = num;
            }
            if (*max < num) {
                max = num;
            }
        }
    }

    
    oss << *min << ' ' << *max;
    return oss.str();
}
