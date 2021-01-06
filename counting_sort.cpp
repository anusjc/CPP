#include <bits/stdc++.h>
using namespace std;
void counting_Sort(vector<int> &arr)
{
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    int range = max - min + 1;

    vector<int> count(range), output(arr.size());
    for (int i = 0; i < arr.size(); i++)
        count[arr[i] - min]++;

    for (int i = 1; i < count.size(); i++)
        count[i] += count[i - 1];

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }

    for (int i = 0; i < arr.size(); i++)
        arr[i] = output[i];
}

// void countSort(int array[], int size)
// {
//     int output[10];
//     int count[10];
//     int max = array[0];

//     // Find the largest element of the array
//     for (int i = 1; i < size; i++)
//     {
//         if (array[i] > max)
//             max = array[i];
//     }

//     // Initialize count array with all zeros.
//     for (int i = 0; i <= max; ++i)
//     {
//         count[i] = 0;
//     }

//     // Store the count of each element
//     for (int i = 0; i < size; i++)
//     {
//         count[array[i]]++;
//     }

//     // Store the cummulative count of each array
//     for (int i = 1; i <= max; i++)
//     {
//         count[i] += count[i - 1];
//     }

//     // Find the index of each element of the original array in count array, and
//     // place the elements in output array
//     for (int i = size - 1; i >= 0; i--)
//     {
//         output[count[array[i]] - 1] = array[i];
//         count[array[i]]--;
//     }

//     // Copy the sorted elements into original array
//     for (int i = 0; i < size; i++)
//     {
//         array[i] = output[i];
//     }
// }
void print(vector<int> a)
{
    for (auto i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
}
// Function to print an array
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (auto i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        a.push_back(m);
    }
    // int a[n];
    // for (auto i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // print(a);
    counting_Sort(a);
    print(a);
    // countSort(a, n);
    // printArray(a, n);
}