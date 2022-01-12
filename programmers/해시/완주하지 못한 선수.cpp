#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string part, comp;
    bool isEq;
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    for(unsigned idx = 0; idx < participant.size(); idx++){
        part = participant.at(idx);
        comp = completion.at(idx);
        isEq = (part==comp);
        if(!isEq){
         return part;
        }
    }
}