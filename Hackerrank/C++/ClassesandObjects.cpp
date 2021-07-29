


class Student {
    vector<int> scores;
    
    public:
    void input(){
        int num;
        for (int i=0;i<5;i++){
            cin >> num;
            scores.push_back(num);
        }
    }
    int calculateTotalScore(){
        int sum=0;
        for (int i=0;i<scores.size();i++){
            sum +=scores[i];
        }
        return sum;
    }
};
// Write your Student class here

