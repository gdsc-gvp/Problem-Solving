class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> v(1001,0);
        for(int i=0;i<trips.size();i++){
            v[trips[i][1]]+=trips[i][0];
            v[trips[i][2]]-=trips[i][0];
        }
        int cap=0;
        for(auto i: v){
            cap+=i;
            if(cap>capacity)
                return false;
        }
        return true;
    }
};
