Assignment 2 guidelines and regulations:
1. This is an individual assignment. Each student must do the assignment by themselves. You might seek conceptual help from your classmates, but your code must be your own.
2. Any sort of plagiarism (code copied from a classmate or Google, Chegg, ChatGPT or any other website) will be strictly dealt with. If found guilty of plagiarism, the student will be awarded an F grade for the course and reported to the ECE department and the Proctor's office for further disciplinary action as per the NSU Code of Conduct. If any plagiarism is caught, you will be awarded an F grade for the whole course. Its better to get bad marks than to get an F. 
3. There are 6 questions and each question holds 10 marks.
Submission Guidelines:
1. Open one single doc/MS Word file. Write all your answers in this doc file. Convert this doc file into a pdf file. Open a folder in your desktop. The name of this folder will be your name along with your NSU ID. For example, the name of the folder should be something like this "Shafayat Oshman 1211211042". In this folder, place your pdf file. Convert this folder into a zip file using Winrar or other software and name the zip file in the same format "Shafayat Oshman 1211211042". Submit the .zip file through Canvas. If you do not follow this submission guidelines, 3 marks will be deducted.
2. Submission deadline is 18th June 11:59 pm. No assignment will be accepted after this deadline.
3. In Canvas, you will only get 1 attempt to submit your assignment. Please make sure you are submitting only after you are completely done with your assignment. Once you submit, you cannot submit again. 

If you have any questions or confusion regarding the assignment, please email the TA or reach out to me.


# Solve

1. Observe the code below and Explain the lines of code in detail. And what will be the output and why?
    
    ```cpp
    // this is the declaration of the special "main" function, which serves as the entry point of the program and returns an integer value, taking no arguments
    int main(void)
    {
        int a = 40;         // declare and initialize variable 'a' with the value 40
        int b = 25;         // declare and initialize variable 'b' with the value 25
        int *ptr = &a;      // declare pointer 'ptr' and assign the address of 'a' to it
        
        proc1(&a);          // call proc1 and pass the address of 'a'
        proc2(b);           // call proc2 and pass 'b' by reference
        
        *ptr = 67;          // assign the value 67 to the variable pointed to by 'ptr' (i.e., 'a')
        
        std::cout << a << '\n';      // print the value of 'a'
        std::cout << &a << '\n';     // print the address of 'a'
        std::cout << b << '\n';      // print the value of 'b'
        std::cout << &b << '\n';     // print the address of 'b'
        std::cout << ptr << '\n';    // print the value stored in 'ptr' (i.e., the address of 'a')
        std::cout << *ptr << '\n';   // print the value pointed to by 'ptr' (i.e., the value of 'a')
        std::cout << &ptr << '\n';   // print the address of 'ptr'
        
        return 0;
    }
    
    // definition of function proc1 which takes an integer pointer, returns null
    void proc1(int *i)
    {
        *i = 15;    // assign the value 15 to the variable pointed to by 'i' (i.e., 'a')
    }
    
    // definition of function proc2 which takes an integer reference, returns null
    void proc2(int &i)
    {
        i = 15;     // assign the value 15 to the reference variable 'i'
    }
    ```
    
    **Output**: Syntex Error
    **Explaination**: The definition of “proc1” and “proc2” function is not found before the main function. So the compiler returns errors that "proc1" & "proc2" is not declared in the scope.
    
2. Explain the code in detail. Explain the output.
    
    ```cpp
    // function that creates and returns a pointer to an integer array
    int* createIntArray()
    {
        int* ptr = new int[5]; // allocate memory for an integer array of size 5
        return ptr;           // return the pointer to the allocated memory
    }
    
    int main()
    {
        int* arrayPtr = createIntArray();  // call the createIntArray function and assign the returned pointer to arrayPtr
        delete[] arrayPtr;                 // deallocate the memory pointed to by arrayPtr
    
        // attempt to access a deallocated memory location and print in the stdout
        std::cout << "Value of arrayPtr[0]: " << arrayPtr[0] << std::endl;
    
        return 0;
    }
    ```
    
    Output: Unpredictable
    Explaination: the dynamically allocated array 'arrayPtr' has been deallocated using delete[], attempting to access its elements using 'arrayPtr' results in undefined behavior. The output in this case cannot be predicted reliably and can vary depending on the compiler and system. It may print garbage values, crash, or behave unpredictably.
    
3. In terms of search efficiency, what are the advantages and disadvantages of using a sorted list over an unsorted list?
    
    
    | Sorted List | Unsorted List |
    | --- | --- |
    | Faster Search using algorithms like binary search O(log n) | Slower search using linear search O(n) |
    | Slower due to the need for maintaining sorted order | Faster as elements can be added or removed without affecting order |
    | Improved performance due to faster search times | Lower performance compared to sorted list |
    | Additional memory or computational overhead for maintaining sorted order | No additional overhead for sorting algorithms |
4. Use the binary search algorithm and search for ‘56’ and ‘72’ in the given list. When do
you know that your search in over?
    
    
    | 12 | 23 | 29 | 56 | 78 | 91 | 98 | 103 | 110 |
    | --- | --- | --- | --- | --- | --- | --- | --- | --- |
    
    The given list is a sorted list in ascending order. We can perform binary search on a sorted list. Here are the steps:
    
    To perform a binary search on the given sorted list [12, 23, 29, 56, 78, 91, 98, 103, 110]:
    
    1. Start with a sorted list.
    2. Set the boundaries: `start = 0`, `end = 8`.
    3. Calculate the midpoint: `mid = (start + end) / 2`.
    4. Compare the target value with the midpoint value.
    5. If they match, the search is over.
    6. If the target is less, update `end = mid - 1`.
    7. If the target is greater, update `start = mid + 1`.
    8. Repeat steps 3-7 until the target is found or `start > end`.
    9. If `start > end`, the search is over, and the target is not present.
    
    For the search of '56':
    
    - Start with a sorted list: [12, 23, 29, 56, 78, 91, 98, 103, 110].
    - Compare '56' with the midpoint value of 78.
    - Since '56' is less than 78, update the end index to search in the lower half of the list.
    - Repeat the process with the new range.
    - Finally, '56' is found in the list.
    
    For the search of '72':
    
    - Start with a sorted list: [12, 23, 29, 56, 78, 91, 98, 103, 110].
    - Compare '72' with the midpoint value of 78.
    - Since '72' is less than 78, update the end index to search in the lower half of the list.
    - Repeat the process with the new range.
    - Eventually, the search ends when the start index becomes greater than the end index.
    - This indicates that '72' is not present in the list.
5. Write an algorithm to delete an item from a sorted list. You can use array or linked list based implementation.
    
    Here's an algorithm to delete an item from a sorted list:
    
    1. Start at the head of the list.
    2. If the list is empty, exit the algorithm as there is no item to delete.
    3. Initialize two pointers, current and previous, pointing to the head of the list.
    4. While the current pointer is not null and the value at the current node is not equal to the item you want to delete, do the following steps:
        - Move the previous pointer to the current pointer.
        - Move the current pointer to the next node.
    5. If the current pointer is null, it means the item to be deleted is not found in the list. Exit.
    6. If the current pointer is pointing to the head of the list, update the head to the next node and delete the current node.
    7. Otherwise, set the next pointer of the previous node to the next node of the current node and delete the current node.
    8. Exit.
6. Implement stack data structure using linked list. The following functions must be included:
    
    MakeEmpty(), IsEmpty(), IsFull(), Push(), Pop(), Top(). 
    
    A list of what each function does is given below:
    
    | MakeEmpty() | Makes the stack empty |
    | --- | --- |
    | IsEmpty() | Checks whether the stack is empty |
    | IsFull() | Checks whether the stack is full |
    | Push() | Pushes an item into the stack |
    | Pop() | Pops an item from the stack |
    | Top() | Returns the last inserted item without changing anything |
    
    ```cpp
    #include<iostream>
    
    class Node {
    public:
        int data;
        Node* next;
    
        Node(int value){
            data = value;
            next = nullptr;
        }
    };
    
    class Stack {
    private: 
        Node* top;
    public:
        Stack() {
            top = nullptr;
        }
    
        void Push(int value){
            Node* newNode = new Node(value);
            newNode->next = top;
            top = newNode;
        }
    
        void Pop(){
            if(top == nullptr){
                std::cout << "Error: Stack is empty. Cannot pop an element.\n";
                return;
            }
    
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    
        int Top() {
            if(top == nullptr){
                std::cout << "Error: Stack is empty. Cannot get top element.\n";
            }
    
            return top->data;
        }
    
        void MakeEmpty(){
            while(!(top == nullptr)){
                Pop();
            }
        }
    
        bool IsEmpty() {
            if(top == nullptr){
                return true;
            }else{
                return false;
            }
        }
    
        bool IsFull(){
            return false;
        }
    };
    
    int main()
    {
        Stack stack;
    
        stack.Push(1);
        stack.Push(2);
        stack.Push(3);
    
        std::cout << "Top element: " << stack.Top() << std::endl;
        stack.Pop();
        std::cout << "Top element after popping: " << stack.Top() << std::endl;
        
        stack.MakeEmpty();
    
        if(stack.IsEmpty()){
            std::cout << "Stack is empty.\n";
        }else{
            std::cout << "Stack is not empty.\n";
        }
    
        return 0;
    }
    ```
