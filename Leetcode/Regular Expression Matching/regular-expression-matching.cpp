// Problem Link - https://leetcode.com/problems/regular-expression-matching/
/*
  Description - 
  Given an input string s and a pattern p, implement regular expression matching with support for '.' and '*' where:
  '.' Matches any single character.​​​​ 
  '*' Matches zero or more of the preceding element.
  The matching should cover the entire input string (not partial).
*/
#include<iostream>
#include<bits/stdc++.h>

class Solution {
public:
    bool isMatch(string s, string pattern) {
        int m = s.length();
        int n = pattern.length();
        
      vector<vector<bool>>dp(m+1,vector<bool>(n+1));
       dp[0][0] = true; 
      for(int i=0;i<=m;++i) {
        for(int j=1;j<=n;++j) {
          if(pattern[j-1]=='*') 
            dp[i][j] = dp[i][j-2]||(i&&(s[i-1]==pattern[j-2]||pattern[j-2]=='.')&&dp[i-1][j]);
          else
            dp[i][j] = i&& dp[i-1][j-1] && (s[i-1]==pattern[j-1]||pattern[j-1]=='.');
        }
      }
      
      return dp[m][n];
    }
};