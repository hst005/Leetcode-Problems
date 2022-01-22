class Solution {
public:
    static bool comparator(pair<int,int>f,pair<int,int>s){
        return f.first>s.first;
    }
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
        vector<pair<int,int>>pairSum;
          for(int i=0;i<aliceValues.size();i++)
              pairSum.push_back({aliceValues[i]+bobValues[i],i});
        
        
          sort(pairSum.begin(),pairSum.end(),comparator);
        
          int a{0},b{0};
          for(int i=0;i<aliceValues.size();i++){
              if(i%2==0)a+=aliceValues[pairSum[i].second];
              else b+=bobValues[pairSum[i].second];
          }
         
          return a > b ? 1 : a < b ? -1 : 0;
    }
};