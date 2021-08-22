#include "SortedType.h"
#include "SortedType.cpp"

#include <iostream>

int main()
{
    SortedType<int> list;

    timeStamp time[5];
    cout << "insert 5 time values in the format ssmmhh:" << endl;
    for (int i = 0; i < 5; i++)
    {
        int ss, mm, hh;
        cin >> ss >> mm >> hh;
        time[i].setTimeStamp(ss, mm, hh);
    }
    // cout << "print Time stamps:" << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     time[i].PrintTimeStamp();
    // }
    int dss, dmm, dhh;
    cout << "delete the timestamp: " << endl;
    cin >> dss >> dmm >> dhh;
    timeStamp t(dss, dmm, dhh);

    for (int i = 0; i < 5; i++)
    {
        if (time[i].getSecond() == t.getSecond()
         && time[i].getMinute() == t.getMinute() 
         && time[i].getHour() == t.getHour())
        {
            time[i] = time[4];
            break;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (time[j].getHour() < time[i].getHour())
            {
                timeStamp temp = time[i];
                time[i] = time[j];
                time[j] = temp;
            }
        }
    }

    cout << endl;
    cout << "print Time stamps:" << endl;

    for (int i = 0; i < 4; i++)
    {
        time[i].PrintTimeStamp();
    }
}




void ReverseQueue()
{

    NodeType *temp;

    temp = front;

    while (temp != NULL)
    {
        rear = front;
        temp = temp->link;
    }
}