//
//  main.cpp
//  code_test_study
//
//  Created by 황재민 on 10/28/24.
//

#include <iostream>
#include <algorithm>
#include "number_block/number_block.hpp"
#include "representation_of_numbers/representation_of_numbers.hpp"
#include "12936/how_to_line_up.hpp"
#include "12939/min_and_max.hpp"
#include "12941/make_min.hpp"
#include "12945/fivonachi.hpp"
#include "12946/hanoi.hpp"
#include "12949/multiple_matrix.hpp"
#include "12951/jaden_case.hpp"
#include "12952/n_queen.hpp"
#include "12953/least_common_multiple.hpp"
#include "12973/pair_removal.hpp"
#include "12978/delivery.hpp"
#include "12980/jump_and_teleport.hpp"
#include "12981/word_game.hpp"
#include "12985/predicted_matchup.hpp"

int main(int argc, const char * argv[]) {
    
    // number_block
    vector<int> result_number_block = Number_Block(1, 10);
    vector<int> expected_result = {0, 1, 1, 2, 1, 3, 1, 4, 3, 5};
    
    bool is_equal = (result_number_block == expected_result);
    
    cout << "result number block: ";
    for (int num : result_number_block) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "Result number block is correct: " << (is_equal ? "true" : "false") << '\n' << endl;
    //
    
    // representation_of_numbers
    int result_representation_of_numbers = representation_of_numbers(15);
    
    is_equal = (result_representation_of_numbers == 4);
    
    cout << "representation of numbers: " << result_representation_of_numbers << endl;
    cout << "Result representation of numbers: " << (is_equal ? "true" : "false") << '\n' << endl;
    //
    
    // how_to_line_up
    vector<int> result_how_to_line_up = how_to_line_up(3, 5);
    
    is_equal = (result_how_to_line_up == vector<int>({3,1,2}));
    
    
    cout << "Result how_to_line_up : " << (is_equal ? "true" : "false") << '\n' << endl;
    //
    
    // min_and_max
    string result_min_and_max = min_and_max("1 2 3 4");
    
    is_equal = (result_min_and_max == "1 4");
    
    cout << "Result min_and_max : " << (is_equal ? "true" : "false") << '\n' << endl;
    
    // make_min
    int result_make_min = make_min({1, 4, 2}, {5, 4, 4});
    
    is_equal = (result_make_min == 29);
    
    cout << "Result make_min : " << (is_equal ? "true" : "false") << '\n' << endl;
    //
    
    // fivonachi
    int result_fivonachi = fivonachi(5);
    
    is_equal = (result_fivonachi == 5);
    
    cout << "Result fivonachi : " << (is_equal ? "true" : "false") << '\n' << endl;
    
    vector<vector<int>> result_hanoi = hanoi(2);
    vector<std::vector<int>> expected_hanoi = {{1, 2}, {1, 3}, {2, 3}};

    is_equal = std::equal(result_hanoi.begin(), result_hanoi.end(), expected_hanoi.begin());
    
    cout << "Result hanoi : " << (is_equal ? "true" : "false") << '\n' << endl;
    //
    
    // multiple_matrix
    vector<vector<int>> result_multiple_matrix = multiple_matrix({{1, 4}, {3, 2}, {4, 1}}, {{3, 3}, {3, 3}});
    vector<vector<int>> expected_multiple_matrix =  {{15, 15}, {15, 15}, {15, 15}};
    
    is_equal = equal(result_multiple_matrix.begin(), result_multiple_matrix.end(), expected_multiple_matrix.begin());
    
    cout << "Result multiple_matrix : " << (is_equal ? "true" : "false") << '\n' << endl;
    //
    
    // jaden_case
    string result_jaden_case = jaden_case("3people unFollowed me");
    
    is_equal = result_jaden_case == "3people Unfollowed Me";
    
    cout << "Result jaden_case : " << (is_equal ? "true" : "false") << '\n' << endl;
    //
    
    // n_queen
    
    int result_n_qeen = n_queen(4);
    
    is_equal = result_n_qeen == 2;
    
    cout << "Result n_queen : " << (is_equal ? "true" : "false") << '\n' << endl;
    
    //
    
    // least_common_multiple
    int result_leaset_common_multiple = least_common_multiple({2,6,8,14});
    
    is_equal = result_leaset_common_multiple == 168;
    
    cout << "Result least_common_multiple : " << (is_equal ? "true" : "false") << '\n' << endl;
    
    //
    
    // pair_removal
    string pair_removal_args = "baabaa";
    int result_pair_removal = pair_removal(pair_removal_args);
    
    is_equal = result_pair_removal == 1;
    
    cout << "Result pair_removal : " << (is_equal ? "true" : "false") << '\n' << endl;
    //
    
    // delivery
    int result_delivery = delivery(5, {{1,2,1},{2,3,3},{5,2,2},{1,4,2},{5,3,1},{5,4,2}}, 3);
    
    is_equal = result_delivery == 4;
    
    cout << "Result delivery : " << (is_equal ? "true" : "false" ) << '\n' << endl;
    
    //
    
    // jump_and_teleport
    int result_jump_and_teleport = jump_and_teleport(5000);
    
    is_equal = result_jump_and_teleport == 5;
    
    cout << "Result jump_and_teleport : " << (is_equal ? "true" : "false") << '\n' << endl;
    //
    
    // word_game
    vector<int> result_word_game = word_game(3, {"tank", "kick", "know", "wheel", "land", "dream", "mother", "robot", "tank"});
    vector<int> expected_word_game = {3,3};
    
    is_equal = equal(result_word_game.begin(), result_word_game.end(), expected_word_game.begin());
    
    cout << "Result word_game : " << (is_equal ? "true" : "false" ) << '\n' << endl;
    
    // predicted_matchup
    int result_predicted_matchup = predicted_matchup(8, 4, 7);
    
    is_equal = result_predicted_matchup == 3;
    
    cout << "Result predicted_matchup : " << (is_equal ? "true" : "false") << '\n' << endl;
    
    return 0;
}
