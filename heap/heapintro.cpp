#include <iostream>
#include <queue>
using namespace std;

class Heap
{
    public:
        int arr[100];
        int size = 0;

        Heap()
        {
            arr[0] = -1;
            size = 0;
        }

        void insert(int val)
        {
            size = size + 1;
            int index = size;
            arr[index] = val;

            while(index > 1)
            {
                int parent = index/2;

                if(arr[parent] < arr[index])
                {
                    swap(arr[parent], arr[index]);
                    index = parent;
                }
                else
                    return;

            }

        }

        void print()
        {
            for(int i = 1; i <= size; i++)
            {
                cout << arr[i] << " ";
            } cout << endl;
        }

        void deleteFromHeap()
        {
            if(size == 0)
            {
                cout << "Nothing to delete." << endl;
                return;
            }

            arr[1] = arr[size--];
            // size--;

            // take root node to its correct position
            int i = 1;
            while(i < size)
            {
                int leftIndex = 2*i;
                int rightIndex = 2*i+1;

                if(leftIndex < size and arr[i] < arr[leftIndex])
                {
                    swap(arr[i], arr[leftIndex]);
                    i = leftIndex;
                }
                else if(rightIndex < size and arr[i] < arr[rightIndex])
                {
                    swap(arr[i], arr[rightIndex]);
                    i = rightIndex;
                }
                else
                    return;
            }
        }
}; 

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2*i + 1;

    if(left <= n and arr[largest] < arr[left])
        largest = left;
    if(right <= n and arr[largest] < arr[right])
        largest = right;

    if(largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int size = n;

    while(size > 1)
    {
        // step 1 - swap
        swap(arr[size], arr[1]);
        size--;

        // step 2 - heapify function calls
        heapify(arr, size, 1);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
      
    // h.print();
    // h.deleteFromHeap();
    // h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;  
    for(int i = n/2; i > 0; i--)
        heapify(arr, n, i);

    cout <<"Printing array." << endl;
    for(int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // heapSort(arr, n);

    cout <<"Printing sorted array." << endl;
    for(int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "Using priority queue" << endl;
    // priority_queue<int> pq; // max-heap
    // pq.push(4);
    // pq.push(2);
    // pq.push(5);
    // pq.push(3);

    // cout << "top: " << pq.top() << endl;
    // pq.pop();
    // cout << "after pop -> top: " << pq.top() << endl;
    // cout <<"size: " << pq.size() << endl;
    // cout <<"empty: " << pq.empty() << endl;

    priority_queue< int, vector<int>, greater<int> > minHeap;
    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(3);

    cout << "top: " << minHeap.top() << endl;
    minHeap.pop();
    cout << "after pop -> top: " << minHeap.top() << endl;
    cout <<"size: " << minHeap.size() << endl;
    cout <<"empty: " << minHeap.empty() << endl;

    

    return 0;
}