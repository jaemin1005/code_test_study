//
//  word_game.cpp
//  code_test_study
//
//  Created by 황재민 on 10/29/24.
//

#include "word_game.hpp"
#include <algorithm>

vector<int> word_game(int n, vector<string> words){
    vector<string> stored_words;
    
    for(int idx = 0 ; idx < words.size() ; idx++){
        string current_word = words[idx];
        // 끝말잇기 검사 || 단어가 중복됬는지 검사;
        if(idx != 0 && (current_word[0] != words[idx-1][words[idx-1].size()-1] || std::find(stored_words.begin(), stored_words.end(), current_word) != stored_words.end())){
            return {idx % n + 1, idx / n + 1};
        }
        
        stored_words.push_back(current_word);
    }
    
    return {0, 0};
}
