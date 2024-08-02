#include<vector>
#include<iostream>
using namespace std;
/*Solution For https://neetcode.io/problems/buy-and-sell-crypto */
class BuyAndSell
{
public:
    int profit = 0;
    int maxProfit(vector<int>& prices) {
        int SmallestNumb = 0;
        for (int i = 0; i < prices.size()-1; i++)
        {
            if (prices[SmallestNumb] >= prices[i]) SmallestNumb = i;
            int iter = i+1;
            if (prices[i]<prices[i + 1])
            {
                int MaxNumb = prices[i + 1];
                while ((prices[SmallestNumb] < prices[iter]) && (iter != prices.size()))
                {
                    if (MaxNumb < prices[iter]) MaxNumb = prices[iter];
                    iter++;
                    if (iter == prices.size()) break;
                }
                if (profit < (MaxNumb - prices[SmallestNumb])) profit = (MaxNumb - prices[SmallestNumb]);

            }
            
        }
        cout << profit << endl;
        return profit;
    }
};


