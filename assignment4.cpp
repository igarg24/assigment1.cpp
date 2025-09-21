// #include <iostream>
// using namespace std;
// #define MAX 50

// class Queue {
//     int arr[MAX];
//     int front, rear;
// public:
//     Queue() { front = -1; rear = -1; }
//     bool isEmpty() { return front == -1; }
//     bool isFull() { return rear == MAX - 1; }
//     void enqueue(int x) {
//         if (isFull()) { cout << "Queue full\n"; return; }
//         if (front == -1) front = 0;
//         arr[++rear] = x;
//         cout << x << " added\n";
//     }
//     void dequeue() {
//         if (isEmpty()) { cout << "Queue empty\n"; return; }
//         cout << arr[front] << " removed\n";
//         if (front == rear) { front = -1; rear = -1; }
//         else front++;
//     }
//     void peek() {
//         if (isEmpty()) cout << "Queue empty\n";
//         else cout << "Front: " << arr[front] << "\n";
//     }
//     void display() {
//         if (isEmpty()) { cout << "Queue empty\n"; return; }
//         for (int i = front; i <= rear; i++) cout << arr[i] << " ";
//         cout << "\n";
//     }
// };

// int main() {
//     Queue q;
//     int ch, val;
//     do {
//         cout << "\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Check Empty 6.Check Full 0.Exit\n";
//         cin >> ch;
//         switch (ch) {
//             case 1: cin >> val; q.enqueue(val); break;
//             case 2: q.dequeue(); break;
//             case 3: q.peek(); break;
//             case 4: q.display(); break;
//             case 5: cout << (q.isEmpty() ? "Empty\n" : "Not empty\n"); break;
//             case 6: cout << (q.isFull() ? "Full\n" : "Not full\n"); break;
//         }
//     } while (ch != 0);
//     return 0;
// }
// ques 2
// #include <iostream>
// using namespace std;
// #define MAX 50

// class CQueue {
//     int arr[MAX];
//     int front, rear;
// public:
//     CQueue() { front = -1; rear = -1; }
//     bool isEmpty() { return front == -1; }
//     bool isFull() { return (front == 0 && rear == MAX - 1) || (rear + 1 == front); }
//     void enqueue(int x) {
//         if (isFull()) { cout << "Queue full\n"; return; }
//         if (front == -1) { front = 0; rear = 0; }
//         else if (rear == MAX - 1) rear = 0;
//         else rear++;
//         arr[rear] = x;
//         cout << x << " added\n";
//     }
//     void dequeue() {
//         if (isEmpty()) { cout << "Queue empty\n"; return; }
//         cout << arr[front] << " removed\n";
//         if (front == rear) { front = -1; rear = -1; }
//         else if (front == MAX - 1) front = 0;
//         else front++;
//     }
//     void peek() {
//         if (isEmpty()) cout << "Queue empty\n";
//         else cout << "Front: " << arr[front] << "\n";
//     }
//     void display() {
//         if (isEmpty()) { cout << "Queue empty\n"; return; }
//         int i = front;
//         while (true) {
//             cout << arr[i] << " ";
//             if (i == rear) break;
//             i = (i + 1) % MAX;
//         }
//         cout << "\n";
//     }
// };

// int main() {
//     CQueue q;
//     int ch, val;
//     do {
//         cout << "\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Check Empty 6.Check Full 0.Exit\n";
//         cin >> ch;
//         switch (ch) {
//             case 1: cin >> val; q.enqueue(val); break;
//             case 2: q.dequeue(); break;
//             case 3: q.peek(); break;
//             case 4: q.display(); break;
//             case 5: cout << (q.isEmpty() ? "Empty\n" : "Not empty\n"); break;
//             case 6: cout << (q.isFull() ? "Full\n" : "Not full\n"); break;
//         }
//     } while (ch != 0);
//     return 0;
// }

// //q3

// #include <iostream>
// using namespace std;
// #define MAX 100

// class Queue {
//     int arr[MAX];
//     int front, rear, count;
// public:
//     Queue() { front = 0; rear = -1; count = 0; }
//     bool isEmpty() { return count == 0; }
//     bool isFull() { return count == MAX; }
//     void enqueue(int x) {
//         if (isFull()) return;
//         rear = (rear + 1) % MAX;
//         arr[rear] = x;
//         count++;
//     }
//     int dequeue() {
//         if (isEmpty()) return -1;
//         int x = arr[front];
//         front = (front + 1) % MAX;
//         count--;
//         return x;
//     }
//     int size() { return count; }
//     int frontVal() { return arr[front]; }
//     void display() {
//         for (int i = 0; i < count; i++)
//             cout << arr[(front + i) % MAX] << " ";
//         cout << "\n";
//     }
// };

// int main() {
//     Queue q, first;
//     int x;
//     while (cin >> x) q.enqueue(x);
//     int n = q.size();
//     if (n % 2 != 0) { cout << "even number needed\n"; return 0; }
//     int half = n / 2;
//     for (int i = 0; i < half; i++) first.enqueue(q.dequeue());
//     for (int i = 0; i < half; i++) {
//         q.enqueue(first.dequeue());
//         q.enqueue(q.dequeue());
//     }
//     q.display();
//     return 0;
// }

// q4

// #include <iostream>
// using namespace std;
// #define MAX 1000

// class Queue {
//     char arr[MAX];
//     int front, rear, count;
// public:
//     Queue() { front = 0; rear = -1; count = 0; }
//     bool isEmpty() { return count == 0; }
//     void enqueue(char c) {
//         if (count == MAX) return;
//         rear = (rear + 1) % MAX;
//         arr[rear] = c;
//         count++;
//     }
//     void dequeue() {
//         if (isEmpty()) return;
//         front = (front + 1) % MAX;
//         count--;
//     }
//     char frontVal() { return arr[front]; }
// };

// int main() {
//     string s;
//     getline(cin, s);
//     Queue q;
//     int freq[256] = {0};
//     for (char c : s) {
//         if (c == ' ') continue;
//         freq[(unsigned char)c]++;
//         q.enqueue(c);
//         while (!q.isEmpty() && freq[(unsigned char)q.frontVal()] > 1) q.dequeue();
//         if (q.isEmpty()) cout << "-1 ";
//         else cout << q.frontVal() << " ";
//     }
//     return 0;
// }

// q5a
// #include <iostream>
// using namespace std;
// #define MAX 100

// class Queue {
//     int arr[MAX], f, r, cnt;
// public:
//     Queue() { f=0; r=-1; cnt=0; }
//     bool empty() { return cnt==0; }
//     void push(int x) { if(cnt<MAX){ r=(r+1)%MAX; arr[r]=x; cnt++; } }
//     int pop() { if(empty()) return -1; int v=arr[f]; f=(f+1)%MAX; cnt--; return v; }
//     int size() { return cnt; }
//     int front() { return arr[f]; }
// };

// class Stack {
//     Queue q1, q2;
// public:
//     void push(int x) { q2.push(x); while(!q1.empty()) { q2.push(q1.pop()); } Queue tmp=q1; q1=q2; q2=tmp; }
//     int pop() { return q1.empty() ? -1 : q1.pop(); }
//     int top() { return q1.empty() ? -1 : q1.front(); }
//     bool empty() { return q1.empty(); }
// };

// int main() {
//     Stack st;
//     st.push(10); st.push(20); st.push(30);
//     cout << st.pop() << " ";
//     cout << st.top() << " ";
//     return 0;
// }

// q5b

// #include <iostream>
// using namespace std;
// #define MAX 100

// class Queue {
//     int arr[MAX], f, r, cnt;
// public:
//     Queue() { f=0; r=-1; cnt=0; }
//     bool empty() { return cnt==0; }
//     void push(int x) { if(cnt<MAX){ r=(r+1)%MAX; arr[r]=x; cnt++; } }
//     int pop() { if(empty()) return -1; int v=arr[f]; f=(f+1)%MAX; cnt--; return v; }
//     int size() { return cnt; }
//     int front() { return arr[f]; }
// };

// class Stack {
//     Queue q;
// public:
//     void push(int x) {
//         int n = q.size();
//         q.push(x);
//         for (int i = 0; i < n; i++) q.push(q.pop());
//     }
//     int pop() { return q.empty() ? -1 : q.pop(); }
//     int top() { return q.empty() ? -1 : q.front(); }
//     bool empty() { return q.empty(); }
// };

// int main() {
//     Stack st;
//     st.push(5); st.push(15); st.push(25);
//     cout << st.pop() << " ";
//     cout << st.top() << " ";
//     return 0;
// }