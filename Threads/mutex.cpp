#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

int count = 0;
mutex m;

void incCount()
{
    m.lock();       //if this was not locked a race condition will occur
    for(int i = 0;i <1000000; i++)
        ++count;
    m.unlock();
}

int main()
{
    cout << "check mutex" << endl;
    thread t1(incCount);
    thread t2(incCount);

    t1.join();
    t2.join();

    cout << count << endl;

    return 0; 
}