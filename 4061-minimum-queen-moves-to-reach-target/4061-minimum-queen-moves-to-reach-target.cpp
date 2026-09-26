class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int sr = source[0], sc = source[1];
        int tr = target[0], tc = target[1];

        //CASE0:
        if (sr == tr && sc == tc) {
            return 0;
        }

        // Case 1: 
        if (sr == tr || sc == tc || abs(sr - tr)== abs(sc - tc)) {
            return 1;
        }
        //Case 2:
        return 2;
    }
};