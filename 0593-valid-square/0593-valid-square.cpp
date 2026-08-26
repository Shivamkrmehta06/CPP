class Solution {
private:
    int getD2(vector<int> &p1,vector<int>& p2){
        int dx = p2[0] - p1[0];
        int dy = p2[1] - p1[1];

        return dx * dx + dy * dy;
    }
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<int> d = {
            getD2(p1, p2),
            getD2(p1, p3),
            getD2(p1, p4),
            getD2(p2, p3),
            getD2(p2, p4),
            getD2(p3, p4)
        };

        sort(d.begin(), d.end());

        return d[0] > 0 &&
               d[0] == d[1] &&
               d[1] == d[2] &&
               d[2] == d[3] &&
               d[4] == d[5] &&
               d[4] == 2 * d[0];
    }
};