class Solution {
public:
    static bool cmp(vector <int> &a,vector <int> &b){
        int a1=pow(a[0],2)+pow(a[1],2);
        int a2=pow(b[0],2)+pow(b[1],2);
        return a1<a2;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(),points.end(),cmp);
        points.erase(points.begin()+k,points.end());
        return points;
    }
};