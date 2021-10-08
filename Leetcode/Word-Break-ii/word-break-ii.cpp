//Problem Link - https://leetcode.com/problems/word-break-ii/
/*
    Given a string s and a dictionary of strings wordDict, add spaces in s to construct a sentence where each word is a valid dictionary word.
    Return all such possible sentences in any order.
    Note that the same word in the dictionary may be reused multiple times in the segmentation.
*/
#include<iostream>
#include<bits/stdc++.h>

class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>dict;
        for(auto it:wordDict) {
            dict.insert(it);
        }
        
        int n = s.length();
        
        vector<vector<string>>dp(s.length()+1);
        
        dp[0].push_back("");
        
        for(int i=1;i<=n;++i) {
            for(int j=i-1;j>=0;--j) {
                if(dp[j].size()>0) {
                    string tmp = s.substr(j,i-j);
                    
                    if(dict.find(tmp) != dict.end()) {
                        for(auto it:dp[j]) {
                            string t = it;
                            
                            if(it!="")
                                t+=" ";
                            
                            t+=tmp;
                            dp[i].push_back(t);
                        }
                    }
                }
            }
        }
          
        return dp[s.length()];
    }
};