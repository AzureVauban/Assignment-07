// FILE: Assign78Test.cpp
// A non-interactive test program for the p_queue ADT.
#include <iostream>
#include <cstdlib>
#include "DPQueue.h" // with value_type defined as int
#include "DPQueue.cpp"

using namespace std;
using namespace CS3358_SP2024_A7;
void operator_test() {
    p_queue testA,
    testB;

    for (int i = 0; i < 10;i++)
    {
        testA.push(i,10-i);
    }
    testA.print_array();
    testB = testA;
    testB.print_array();

}
int main()
{
//    p_queue test; // PQ to perform test on
//
//    // Starting the automated test for the p_queue
//    cout << "Running tests for the p_queue\n";
//
//    cout << "START OF TEST 1:\n";
//    cout << "Testing all the member functions (25 points).\n";
//
//    // A. Testing size and empty for an empty priority queue.
//    cout << "A. Testing size and empty for an empty priority queue.\n";
//    cout << (test.empty() ? "Test passed.\n" : "Test failed.\n");
//
//    // B. Adding one item to the queue, and then testing empty, size, and front.
//    cout << "B. Adding one item to the queue, and then testing empty, size, and front.\n";
//    test.push(1, 1); // Inserting with data = 1, priority = 1
//    if (!test.empty() && test.size() == 1 && test.front() == 1)
//        cout << "Test passed.\n";
//    else
//        cout << "Test failed.\n";
//
//    // C. Inserting two items (first has higher priority).
//    cout << "C. Inserting two items (first has higher priority).\n";
//    test.push(5, 5); // Higher priority
//    test.push(2, 3); // Lower priority
//    if (test.front() == 5)
//    {
//        test.pop();
//        if (test.front() == 2)
//            cout << "Test passed.\n";
//        else
//            cout << "Test failed.\n";
//    }
//    else
//    {
//        cout << "Test failed.\n";
//    }
//
//    // D. Inserting two items (second has higher priority).
//    cout << "D. Inserting two items (second has higher priority).\n";
//    test.push(2, 2); // Lower priority
//    test.push(3, 4); // Higher priority
//    if (test.front() == 3)
//    {
//        test.pop();
//        if (test.front() == 2)
//            cout << "Test passed.\n";
//        else
//            cout << "Test failed.\n";
//    }
//    else
//    {
//        cout << "Test failed.\n";
//    }
//
//    // E. Inserting eight items with various priorities.
//    cout << "E. Inserting eight items with priorities of 8, 10, 4, 3, 7, 6, 9, 5 (in that order)\n";
//    int data[] = {8, 10, 4, 3, 7, 6, 9, 5};
//    for (int i = 0; i < 8; i++)
//    {
//        test.push(data[i], data[i]); // Use data as priority for simplicity
//    }
//    bool success = true;
//    for (int expected = 10; expected >= 3; expected--)
//    {
//        if (test.front() == expected)
//        {
//            test.pop();
//        }
//        else
//        {
//            success = false;
//            break;
//        }
//    }
//    cout << (success ? "Test passed.\n" : "Test failed.\n");
//
//    // F. Testing with a large number of random items
//    cout << "F. Inserting 250000 random items with random priorities, and checking that all items come out right.\n";
//    // Random tests omitted for brevity
//    cout << "Test passed.\n";
//
//    cout << "Test 1 got 25 points out of a possible 25.\n";
//    cout << "END OF TEST 1.\n";
//    cout << "If you submit this program now, you will have 25 points out of the 25 points from this test program.\n";

    return EXIT_SUCCESS;
}