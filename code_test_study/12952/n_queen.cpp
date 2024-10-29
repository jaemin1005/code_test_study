//
//  n_queen.cpp
//  code_test_study
//
//  Created by 황재민 on 10/29/24.
//

/**
 가로, 세로 길이가 n인 정사각형으로된 체스판이 있습니다. 체스판 위의 n개의 퀸이 서로를 공격할 수 없도록 배치하고 싶습니다.

 예를 들어서 n이 4인경우 다음과 같이 퀸을 배치하면 n개의 퀸은 서로를 한번에 공격 할 수 없습니다.
 
 체스판의 가로 세로의 세로의 길이 n이 매개변수로 주어질 때, n개의 퀸이 조건에 만족 하도록 배치할 수 있는 방법의 수를 return하는 solution함수를 완성해주세요.

 제한사항
 퀸(Queen)은 가로, 세로, 대각선으로 이동할 수 있습니다.
 n은 12이하의 자연수 입니다.
 */
#include "n_queen.hpp"
#include <vector>

using namespace std;

namespace inner {
    void n_queen_calc(vector<int> &queen, int col, int* result);
    bool n_queen_check(vector<int> &queen, int last);
}


void inner::n_queen_calc(vector<int> &queen, int col, int* result) {
    if (col == queen.size()) {
        (*result)++;
    } else {
        for (int place = 0; place < queen.size(); place++) {
            queen[col] = place;
            if (n_queen_check(queen, col)) {
                n_queen_calc(queen, col + 1, result);
            }
        }
    }
}

// 행, 대각선 검사
bool inner::n_queen_check(vector<int> &queen, int last) {
    for (int col = 0; col < last; col++) {
        if (queen[col] == queen[last] || abs(queen[last] - queen[col]) == last - col)
            return false;
    }
    return true;
}

int n_queen(int n){
    vector<int> cols(n, 0);
    int result = 0;
    
    inner::n_queen_calc(cols, 0, &result);
    
    return result;
}
