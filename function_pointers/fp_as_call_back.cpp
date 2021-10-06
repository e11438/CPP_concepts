#include<iostream>
#include<vector>


using namespace std;

bool isGreater(const int i1, const int i2)
{
    if(i1 > i2) return true;
    else return false;
}


bool isLesser(int i1, int i2)   //const is not needed here, it will be usefull if we pass * or &
{
    if(i1 < i2) return true;
    else return false;
}

void sort(vector<int> & arr, bool (*compare)(int, int))
{
    int len = arr.size();
    for(int i =0; i < len; ++i)
    {
        for(int j = i+1; j < len; ++j) 
        {
            if(compare(arr[j], arr[i]))
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

void printArray(const vector<int> & arr)
{
    for(int num : arr)
        cout << num << " ";
    cout <<endl;
}

int main()
{
    vector<int> arr1 = {4,6,1,3,5,8,7};
    vector<int> arr2 = {4,6,1,3,5,8,7};

    sort(arr1, isGreater);
    printArray(arr1);

    sort(arr2, isLesser);
    printArray(arr2);

    return 0;
}