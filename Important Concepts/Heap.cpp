#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

class MinHeap {
    int *harr;
    int capacity;
    int size;
    public:
        MinHeap(int cap) : capacity {cap}, size {0} {
            harr = new int[cap];
        }

        int parent(int i) {return (i-1)/2;};
        int left(int i) {return (2*i + 1);};
        int right(int i) {return (2*i + 2);};

        void insertKey(int key);
        int getMin();
        int extractMin();
        void decreaseKeyValue(int i, int newValue);
        void deleteKey(int i);
        void heapify(int);
        void displayHeap();

};

void MinHeap :: insertKey(int key) {
    if (size == capacity)
        cout << "Capacity Overflow" << endl;
    else {
        harr[size] = key;
        int i = size;
        size += 1;
        while (i != 0 && harr[parent(i)] > key) {
            swap (harr[parent(i)], harr[i]);
            i = parent(i);
        }
    }
}

int MinHeap :: getMin() {
    if (size == 0)
        return -1;
    else
        return harr[0];
}

int MinHeap :: extractMin() {
    if (size == 0)
        return -1;
    int root = harr[0];
    size -= 1;
    if (size == 0)
        return root;
    else {
        harr[0] = harr[size];
        heapify(0);
    }
    return root;
}

void MinHeap :: deleteKey(int i) {
    decreaseKeyValue (i, INT_MIN);
    extractMin();
}

void MinHeap :: decreaseKeyValue(int i, int new_value) {
    harr[i] = new_value;
    while (i != 0 && harr[parent(i)] > harr[i]) {
        swap(harr[parent(i)], harr[i]);
        i = parent(i);
    }
}

void MinHeap :: heapify(int i) {
    int smallest = i;
    int l = left(i);
    int r = right(i);
    if (l < size && harr[l] < harr[i])
        smallest = l;
    if (r < size && harr[r] < harr[smallest])
        smallest = r;
    if (smallest != i) {
        swap (harr[i], harr[smallest]);
        heapify(smallest);
    }
}

void MinHeap :: displayHeap() {
    for (int i = 0; i < size; i++) {
        cout << harr[i] << " ";
    }
    cout << endl;
}

int main()
{
    IOS;
    MinHeap h(11);
    h.insertKey(3);
    h.insertKey(2);
    h.deleteKey(1);
    h.insertKey(15);
    h.insertKey(5);
    h.insertKey(4);
    h.insertKey(45);
    h.displayHeap();
    cout << h.extractMin() << " " << endl;
    h.displayHeap();
    cout << h.getMin() << " " << endl;
    h.decreaseKeyValue(2, 1);
    h.displayHeap();
    cout << h.getMin() << endl;
    h.displayHeap();
    return 0;
}