//
//  frieds_four_block.cpp
//  code_test_study
//
//  Created by 황재민 on 10/30/24.
//

/**
 프렌즈4블록
 블라인드 공채를 통과한 신입 사원 라이언은 신규 게임 개발 업무를 맡게 되었다. 이번에 출시할 게임 제목은 "프렌즈4블록".
 같은 모양의 카카오프렌즈 블록이 2×2 형태로 4개가 붙어있을 경우 사라지면서 점수를 얻는 게임이다.

 TTTANT
 RRFACC
 RRRFCC
 TRRRAA
 TTMMMF
 TMMTTJ
 각 문자는 라이언(R), 무지(M), 어피치(A), 프로도(F), 네오(N), 튜브(T), 제이지(J), 콘(C)을 의미한다

 입력으로 블록의 첫 배치가 주어졌을 때, 지워지는 블록은 모두 몇 개인지 판단하는 프로그램을 제작하라.

 입력 형식
 입력으로 판의 높이 m, 폭 n과 판의 배치 정보 board가 들어온다.
 2 ≦ n, m ≦ 30
 board는 길이 n인 문자열 m개의 배열로 주어진다. 블록을 나타내는 문자는 대문자 A에서 Z가 사용된다.
 출력 형식
 입력으로 주어진 판 정보를 가지고 몇 개의 블록이 지워질지 출력하라.
 */


#include "frieds_four_block.hpp"
#include <set>

int friends_four_block(int m, int n, vector<string>& board) {
    vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {1, 1}};
    int total_removed = 0;

    while (true) {
        // 중복 방지
        set<pair<int, int>> set_remove_pt;

        // #1: 블록 찾기
        for (int row = 0; row < m - 1; row++) {
            for (int col = 0; col < n - 1; col++) {
                char block = board[row][col];
                if (block == '0') continue;

                bool is_check = true;
                for (auto dir : directions) {
                    int move_row = row + dir.first;
                    int move_col = col + dir.second;
                    if (board[move_row][move_col] != block) {
                        is_check = false;
                        break;
                    }
                }
                
                if (is_check) {
                    set_remove_pt.insert({row, col});
                    for (auto dir : directions) {
                        set_remove_pt.insert({row + dir.first, col + dir.second});
                    }
                }
            }
        }

        // #2: 지울 블록이 없으면 종료
        if (set_remove_pt.empty()) break;

        // #3: 블록 제거
        total_removed += set_remove_pt.size();
        for (auto pos : set_remove_pt) {
            board[pos.first][pos.second] = '0';
        }

        // #4: 블록 아래로 떨어뜨리기
        for (int col = 0; col < n; col++) {
            int swap_pt = m - 1;
            for (int row = m - 1; row >= 0; row--) {
                if (board[row][col] != '0') {
                    swap(board[swap_pt--][col], board[row][col]);
                }
            }
        }
    }

    return total_removed;
}
