
class Student {
    public:
    int scores[5];
    void input()
    {   
        for (int i = 0; i < 5; i++) cin >> scores[i];
        return;
    }
    int calculateTotalScore()
    {
        int sum;
        for (int i =0; i < 5; i++) sum += scores[i];
        return sum; 
    }
};
// Write your Student class here

