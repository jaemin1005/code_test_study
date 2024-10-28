//
//  main.cpp
//  code_test_study
//
//  Created by 황재민 on 10/28/24.
//

#include <iostream>
#include "number_block/number_block.hpp"
#include "representation_of_numbers/representation_of_numbers.hpp"
#include "12936/how_to_line_up.hpp"
#include "12939/min_and_max.hpp"

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
    
    return 0;
}
