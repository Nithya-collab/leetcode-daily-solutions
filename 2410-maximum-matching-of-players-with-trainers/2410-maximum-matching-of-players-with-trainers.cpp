class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int pPtr=0 , tPtr=0;
        int count=0;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        while(pPtr<players.size() && tPtr < trainers.size()){
            if(players[pPtr] <= trainers[tPtr]){
                count++;
                tPtr++;
                pPtr++;
            }
            else tPtr++;
        }
        return count;
    }
};