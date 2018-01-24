//
//  main.cpp
//  LeetCode541_ReverseStringII
//
//  Created by Rui on 1/23/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i = 0; i < s.size(); i += 2*k)
            reverse(s.begin() + i, min(s.begin() + i + 2k, s.end()));
        
        return s;
    }
};
