#include <iostream>
#include <vector>

using namespace std;

class WidgetRepairs
{
public:
    int days(vector<int> arrivals, int numPerDay)
    {
        int totalRepairDays = 0;
        int temp = 0;
        for (auto & it : arrivals)
        {
            temp = it - numPerDay;
            if (it > 0){
                totalRepairDays++;
            }
            while (temp > 0){
                totalRepairDays++;
                temp -= numPerDay;
            }


            temp = 0;
        }

        return totalRepairDays;
    }

};