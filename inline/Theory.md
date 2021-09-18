inline functions

** this is also hust a request for compiler. not a hard rule 

if a simple function is called thousands of times, context switching time will be more higher than function execution time.
inline used to remove this context switching overhead while keeping the readability of code.

compiler will replace function call with function body if inline is used

reducting factors
1. Function calling overhead
2. Varable push/pop on/from the stack
3. Return call from a function overhead

increasing factors
1. locality in instruction caches
2. intra-procedural optimizations

disadvanages
1. Too much inline functions will increase the size of program
2. when doing increment changes, if someone changes an inline function, all including files should be compiled from begining , so compilation time will be higher

situation compiler will not honour inline
recursive functions
vitual functions



