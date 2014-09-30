#include <iostream>
#include <vector>

using namespace std;

class WidgetRepairs
{
public:
    int days(vector<int> arrivals, int numPerDay)
    {
        int totalRepairDays = 0;
        for (auto & it : arrivals)
        {
            if (it > 0){
                totalRepairDays++;
            }
            it -= numPerDay;
            while (it > 0){
                totalRepairDays++;
                it -= numPerDay;
            }
        }
        return totalRepairDays;
    }
};