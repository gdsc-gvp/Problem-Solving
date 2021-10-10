class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        vector<int> v;
        v.push_back(0);
        int n=temperatures.size();
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
          while(!st.empty()&&temperatures[st.top()]<=temperatures[i]){
              st.pop();
          }
            if(st.empty()){
                v.push_back(0);
            }
            else{
                v.push_back(st.top()-i);
            }
            st.push(i);
        }
         reverse(v.begin(),v.end());
        return v;
    }
};
