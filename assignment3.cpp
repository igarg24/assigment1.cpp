// #include <iostream>
// using namespace std;
//1.
// int top = -1; 
// bool isEmpty() {
//     return (top == -1);
// }
// bool isFull(int size) {
//     return (top == size - 1);
// }
// void push(int stack[], int size, int value) {
//     if (isFull(size)) {
//         cout << "Stack is full. can't push " << value << endl;
//     }
//     else {
//        top = top + 1;          
//        stack[top] = value;   
//        cout << value << " pushed to stack at position " << top;
//     }
// }
// void pop(int stack[]) {
//     if (isEmpty()) {
//         cout << "Can't pop \n";
//     }
//     else {
//         cout << stack[top--] << " popped from stack.\n";
//     }
// }
// void peek(int stack[]) {
//     if (isEmpty()) {
//         cout << "Stack is empty, nothing to peek.\n";
//     } 
//     else {
//         cout << "Top element: " << stack[top] << endl;
//     }
// }
// void display(int stack[]) {
//     if (isEmpty()) {
//         cout << "Stack is empty.\n";
//     } 
//     else {
//         cout << "Stack elements: ";
//         for (int i = top; i >= 0; i--) {
//             cout << stack[i] << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int size;
//     cout << "Enter size of stack: ";
//     cin >> size;
//     int stack[size]; 
//     int choice, value;
//     do {
//         cout << "1. Push\n";
//         cout << "2. Pop\n";
//         cout << "3. Check isEmpty\n";
//         cout << "4. Check isFull\n";
//         cout << "5. Display\n";
//         cout << "6. Peek\n";
//         cout << "7. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;
//         switch (choice) {
//             case 1:
//                 cout << "Enter value to push: ";
//                 cin >> value;
//                 push(stack, size, value);
//                 break;
//             case 2:
//                 pop(stack);
//                 break;
//             case 3:
//                 cout << (isEmpty() ? "Stack is Empty.\n" : "Stack is NOT Empty.\n");
//                 break;
//             case 4:
//                 cout << (isFull(size) ? "Stack is Full.\n" : "Stack is NOT Full.\n");
//                 break;
//             case 5:
//                 display(stack);
//                 break;
//             case 6:
//                 peek(stack);
//                 break;
//             case 7:
//                 cout << "Exiting program...\n";
//                 break;
//             default:
//                 cout << "Invalid choice! Try again.\n";
//         }
//     } while (choice != 7);
//     return 0;
// }


//2.
// #include <string>
// const int MAX = 100;   
// char stackArr[100];
// int top = -1;
// void push(char c) {
//     if (top == MAX - 1) {
//         cout << "Stack Overflow \n";
//     } else {
//         stackArr[++top] = c;
//     }
// }
// char pop() {
//     if (top == -1) {
//         cout << "Stack Underflow!\n";
//         return '\0';
//     } else {
//         return stackArr[top--];
//     }
// }
// int main() {
//     string str;
//     cout << "Enter a string: ";
//     cin >> str;   
//     for (int i = 0; i < str.length(); i++) {
//         push(str[i]);
//     }
//     cout << "Reversed string: ";
//     while (top != -1) {
//         cout << pop();
//     }
//     cout << endl;
//     return 0;
// }


//3.
// #include <iostream>
// using namespace std;
// #define MAX 100
// class Stack {
//     char arr[MAX];
//     int top;
// public:
//     Stack() { top = -1; }
//     bool isEmpty() { return top == -1; }
//     bool isFull() { return top == MAX - 1; }
//     void push(char c) { if (!isFull()) arr[++top] = c; }
//     char pop() { return isEmpty() ? '\0' : arr[top--]; }
//     char peek() { return isEmpty() ? '\0' : arr[top]; }
// };
// bool isBalanced(string exp) {
//     Stack s;
//     for (int i = 0; i < exp.length(); i++) {
//         char ch = exp[i];
//         if (ch == '(' || ch == '{' || ch == '[') s.push(ch);
//         else if (ch == ')' || ch == '}' || ch == ']') {
//             if (s.isEmpty()) return false;
//             char top = s.pop();
//             if ((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '[')) return false;
//         }
//     }
//     return s.isEmpty();
// }
// int main() {
//     string exp;
//     cout << "Enter an expression: ";
//     cin >> exp;
//     if (isBalanced(exp)) cout << "Balanced" << endl;
//     else cout << "Not Balanced" << endl;
//     return 0;
// }


//4.
// class Stack {
//     char arr[100];
//     int top;
// public:
//     Stack() { top = -1; }
//     void push(char x) {
//         if (top == 99) {
//             cout << "Stack Overflow\n";
//             return;
//         }
//         arr[++top] = x;
//     }
//     char pop() {
//         if (top == -1) {
//             return -1;
//         }
//         return arr[top--];
//     }
//     char peek() {
//         if (top == -1) return -1;
//         return arr[top];
//     }
//     bool isEmpty() {
//         return top == -1;
//     }
// };
// int precedence(char op) {
//     if (op == '+' || op == '-') return 1;
//     if (op == '*' || op == '/') return 2;
//     return 0;
// }
// bool isOperator(char c) {
//     return (c == '+' || c == '-' || c == '*' || c == '/');
// }
// void infixToPostfix(char infix[], char postfix[]) {
//     Stack s;
//     int i = 0;   
//     for (int k = 0; infix[k] != '\0'; k++) {
//         char ch = infix[k];
//         if (ch >= 48 && ch <= 57) {
//             postfix[i++] = ch;
//         }
//         else if (ch == '(') {
//             s.push(ch);
//         }
//         else if (ch == ')') {
//             while (!s.isEmpty() && s.peek() != '(') {
//                 postfix[i++] = s.pop();
//             }
//             s.pop(); 
//         }
//         else if (isOperator(ch)) {
//             while (!s.isEmpty() && precedence(s.peek()) >= precedence(ch)) {
//                 postfix[i++] = s.pop();
//             }
//             s.push(ch);
//         }
//     }
//     while (!s.isEmpty()) {
//         postfix[i++] = s.pop();
//     }
//     postfix[i] = '\0'; 
// }
// int main() {
//     char infix[100], postfix[100];
//     cout << "Enter an infix expression: ";
//     cin >> infix;
//     infixToPostfix(infix, postfix);
//     cout << "Postfix expression: " << postfix << endl;
//     return 0;
// }


//5.
// #include <cstring>
// #include <cmath>
// #define MAX 100
// class stack {
//     int arr[MAX];
//     int top;
// public:
//     stack() { top = -1; }
//     void push(int x) {
//         if (top == MAX - 1) return;
//         arr[++top] = x;
//     }
//     int pop() {
//         if (top == -1) return -1;
//         return arr[top--];
//     }
//     bool isEmpty() {
//         return top == -1;
//     }
// };
// int evaluatePostfix(char* exp) {
//     stack s;
//     for (int i = 0; exp[i]; i++) {
//         char c = exp[i];
//         if (c == ' ') continue;
//         if (isdigit(c)) {
//             s.push(c - '0');
//         } else {
//             int val2 = s.pop();
//             int val1 = s.pop();
//             switch (c) {
//                 case '+': s.push(val1 + val2); break;
//                 case '-': s.push(val1 - val2); break;
//                 case '*': s.push(val1 * val2); break;
//                 case '/': s.push(val1 / val2); break;
//                 case '^': s.push(pow(val1, val2)); break;
//             }
//         }
//     }
//     return s.pop();
// }
// int main() {
//     char exp[MAX];
//     cout << "Enter a postfix expression: ";
//     cin.getline(exp, MAX);
//     int result = evaluatePostfix(exp);
//     cout << "Result = " << result << endl;
//     return 0;
// }