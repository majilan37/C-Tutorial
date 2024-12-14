#include <iostream>
#include <map>

using namespace std;

int main()
{

    // Create a map of strings to integers
    map<string, int> mp;

    // Insert some values in the map
    mp["One"] = 1;
    mp["Two"] = 2;
    mp["Three"] = 3;

    cout << mp["DSQDSQ"];

    // Get an iterator pointing at the first element in the map
    map<string, int>::iterator it = mp.begin();

    while (it != mp.end())
    {
        cout << "Key: " << it->first << ", Value: " << it->second << "\n";

        it++;
    }

    // int nums[] = {2, 2, 1};
    // map<int, int> mp;

    // int size = sizeof(nums) / sizeof(int);

    // for (int i = 0; i < size; i++)
    // {
    //     if (mp[nums[i]])
    //     {
    //         mp[nums[i]] = mp[nums[i]] + 1;
    //     }
    //     else
    //     {
    //         mp[nums[i]] = 1;
    //     }
    // }

    // map<int, int>::iterator it = mp.begin();

    // while (it != mp.end())
    // {
    //     if (it->second == 1)
    //     {
    //         return it->first;
    //     };

    //     it++;
    // }

    return 0;
}