class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int i = 0;

        int Col = 0;   // number of $5 bills
        int give = 0;  // number of $10 bills

        while(i < bills.size()) {

            // Customer gives $5
            if(bills[i] == 5) {

                Col++;
            }

            // Customer gives $10
            else if(bills[i] == 10) {

                // need one $5
                if(Col == 0) {
                    return false;
                }

                Col--;
                give++;
            }

            // Customer gives $20
            else {

                // prefer $10 + $5
                if(give > 0 && Col > 0) {

                    give--;
                    Col--;
                }

                // otherwise 3 fives
                else if(Col >= 3) {

                    Col -= 3;
                }

                else {
                    return false;
                }
            }

            i++;
        }

        return true;
    }
};