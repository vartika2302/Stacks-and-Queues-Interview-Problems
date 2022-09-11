class MyCircularQueue {
public:
    vector<int>arr;
    int rear,front,cnt,cap;
    MyCircularQueue(int k) {
        arr.resize(k);
        cap=k;
        cnt=0;
        front=0;
        rear=0;
    }
    
    bool enQueue(int value) {
        if(cnt==cap) return false;
        arr[rear%cap]=value;
        rear++;
        cnt++;
        return true;
        
    }
    
    bool deQueue() {
        if(cnt==0) return false;
        int elem = arr[front%cap];
        arr[front%cap]=-1;
        front++;
        cnt--;
        return true;
    }
    
    int Front() {
        if(cnt==0) return -1;
        return arr[front%cap];
    }
    
    int Rear() {
        if(cnt==0) return -1;
        return arr[(rear-1)%cap];
    }
    
    bool isEmpty() {
        return cnt==0;
    }
    
    bool isFull() {
        return cnt==cap;
    }
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