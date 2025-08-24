class MyCircularQueue {
public:
    int f, r, k,count=0;
    vector<int> c_que;
    MyCircularQueue(int k) {
        c_que.resize(k);
        f = 0, r = -1;
       this->k = k;
    }

    bool enQueue(int value) {
        if (!isFull()) {
            r = (r + 1) % k;
            c_que[r] = value;
            count++;
            return true;
        } else {
            return false;
        }
    }

    bool deQueue() {
        if (!isEmpty()) {
            f = (f + 1) % k;
            count--;
            return true;
        } else {
            return false;
        }
    }

    int Front() { return isEmpty() ? -1 : c_que[f]; }

    int Rear() { return isEmpty() ? -1 : c_que[r]; }

    bool isEmpty() { return (count==0); }

    bool isFull() { return count==k; }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */