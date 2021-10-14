#include<iostream>
#include<thread>
#include <chrono>


typedef unsigned long long oldU;
using newU = unsigned long long;

using namespace std;

oldU evenSum = 0;
newU oddSum = 0;

void getEvenSum(oldU start, oldU end)
{

    for(oldU i = start; i <= end; ++i)
    {
        if(i%2 == 0)
            evenSum += i;
    }

}

void getOddSum(newU start, newU end)
{
    for(newU i = start; i <= end; ++i)
    {
        if(i%2 == 1)
            oddSum += i;
    }
}

void countToIntMax(int threadId)
{
    for(int i = 0; i < 1000; ++i)
    {
        cout << "Count in thread " << threadId << " " << i << endl; 
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
}

//Compile with g++ Basics.cpp -std=c++11 -pthread
int main()
{
    cout << "test threading " << endl;

    newU start = 1;
    newU end = 1900000000;
    

    //std::thread t1(getEvenSum, start, end); //spawn a thread to execut function
    //std::thread t2(getOddSum, start, end);  //spawn a thread to execut function

    //t1.join();      //wait for t1 to complete
    //t2.join();      //wait for t2 to complete

    //getEvenSum(start, end);   //Average 3.5 seconds take to run both functions, with threads its 7.5
    //getOddSum(start, end);
    auto startTime = std::chrono::high_resolution_clock::now();
    //countToIntMax();      // vaverage time to run both 218650 ms with 2 threads 109057
    //countToIntMax();
    std::thread t3(countToIntMax, 1);
    std::thread t4(countToIntMax, 2);
    if(t3.joinable())   t3.join();
    if(t4.joinable())   t4.join();
    if(t3.joinable())   t3.join();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    
    auto endTime = std::chrono::high_resolution_clock::now();
    
    cout << "evenSum " << evenSum << endl;
    cout << "evenSum " << oddSum << endl;
    

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime);
    cout << "time in milli seconds " << duration.count()/1000 << endl;

    return 0;
}

