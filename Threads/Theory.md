Threads are introduced with C++ 11
Thread is a light weight process, not as heavy as a process
compile with "-std=c++11 -pthread" switches

We must either join or detach a created thread otherwise program will be terminatted at the destructor of a created thread
can use joinable to check a thread can be joined 