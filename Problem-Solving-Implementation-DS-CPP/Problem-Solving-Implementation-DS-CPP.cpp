#include <iostream>
#include <string>
#include "clsDbLinkedList.h"
#include "clsMyQueue.h"
#include "clsMyStack.h"
#include "clsDynamicArray.h"
#include "clsMyQueueUseArray.h"
#include "clsMyStackUseArray.h"
#include "clsMyStringUseStack.h"
#include "clsQueueLine.h"


using namespace std;

int main()
{

#pragma region Double Linked List
    //clsDbLinkedList<short> DbLinkedList;
//#pragma region IsEmpty()
//    cout << "1- Empty Linked List: Size List = " << DbLinkedList.size << "\n";
//    if (DbLinkedList.IsEmpty())
//    {
//        cout << "Empty Linked List.\n\n";
//    }
//#pragma endregion
//
//#pragma region InsertAtBeginning() && Size()
    //cout << "2- Adding Node From 50 To 10:\n";
    //DbLinkedList.InsertAtBeginning(10);
    //DbLinkedList.InsertAtBeginning(20);
    //DbLinkedList.InsertAtBeginning(30);
    //DbLinkedList.InsertAtBeginning(40);
    //DbLinkedList.InsertAtBeginning(50);
    //cout << "Size After Insert: Size List = " << DbLinkedList.size << "\n\n";
//#pragma endregion
//
//#pragma region TraverseBeginning()
//    cout << "3- Traverse Beginning(): Size List = " << DbLinkedList.size << "\n\n";
//    DbLinkedList.TraverseBeginning();
//#pragma endregion
//
//#pragma region TraverseEnding()
//    cout << "4- Traverse Ending(): Size List = " << DbLinkedList.size << "\n";
//    DbLinkedList.TraverseEnding();
//#pragma endregion
//
//#pragma region FindNode()
//    cout << "5- Find Node():\n";
//    auto node = DbLinkedList.FindNode(350);
//    if (node != nullptr)
//    {
//        cout << "Current Node = <" << node->Data << ">\n";
//        cout << "Preve Node = <" << node->Prev->Data << ">\n";
//        cout << "Next Node = <" << (node->Next == nullptr ? "Null" : to_string(node->Next->Data)) << ">\n\n";
//    }
//    else
//    {
//        cout << "Not Found Node\n\n";
//    }
//#pragma endregion
//
//#pragma region InsertAtEnding()
    //cout << "6- Insert At Ending():\n";
    //DbLinkedList.InsertAtEnding(100);
    //cout << "Size After Insert: Size List = " << DbLinkedList.size << "\n";
    //DbLinkedList.TraverseBeginning();
    //DbLinkedList.TraverseEnding();
//#pragma endregion
//
//#pragma region InsertAtAfter()
    //cout << "\n7- Insert At After():\n";
    // auto node = DbLinkedList.FindNode(20);
    // if(node != nullptr)
    // {
    //  DbLinkedList.InsertAtAfter(node, 200);
    //  cout << "Size After Insert: Size List = " << DbLinkedList.size << "\n";
    //  DbLinkedList.TraverseBeginning();
    //  DbLinkedList.TraverseEnding();
    // }
//#pragma endregion
//
//#pragma region DeleteAtBeginning()
//    cout << "\n8- Delete At Beginning():\n";
//    DbLinkedList.DeleteAtBeginning();
//    cout << "Size After Delete: Size List = " << DbLinkedList.size << "\n";
//    DbLinkedList.TraverseBeginning();
//    DbLinkedList.TraverseEnding();
//#pragma endregion
//
//#pragma region DeleteAtEnding()
//    cout << "\n9- Delete At Ending():\n";
//    DbLinkedList.DeleteAtEnding();
//    cout << "Size After Delete: Size List = " << DbLinkedList.size << "\n";
//    DbLinkedList.TraverseBeginning();
//    DbLinkedList.TraverseEnding();
//#pragma endregion
//
//#pragma region DeleteNode()
//    cout << "\n10- Delete Node():\n";
//    DbLinkedList.DeleteNode(30);
//    cout << "Size After Delete: Size List = " << DbLinkedList.size << "\n";
//    DbLinkedList.TraverseBeginning();
//    DbLinkedList.TraverseEnding();
//#pragma endregion
//
//#pragma region Reverse()
//    cout << "\n11- Reverse():\n";
//    DbLinkedList.Reverse();
//    DbLinkedList.TraverseBeginning();
//#pragma endregion
//
//#pragma region getNode()
//    cout << "\n12- Get Node By Index():\n";
//    auto nodeByIndex = DbLinkedList.getNode(3);
//    if (nodeByIndex != nullptr)
//    {
//        cout << "Get Node By Index : <" << nodeByIndex->Data << ">\n";
//        cout << "Prev Node : <" << (nodeByIndex->Prev == nullptr ? "Null" : to_string(nodeByIndex->Prev->Data)) << ">\n";
//        cout << "Next Node : <" << (nodeByIndex->Next == nullptr ? "Null" : to_string(nodeByIndex->Next->Data)) << ">\n";
//    }
//#pragma endregion
//
//#pragma region getItem()
//    cout << "\n13- Get Data Node By Index:\n";
//    auto data = DbLinkedList.getItem(1);
//    cout << "Get Data Node : <" << data << ">\n\n";
//#pragma endregion
//
//#pragma region setItemNode()
//    cout << "\n14- Updating Item Node By Index:\n";
//    DbLinkedList.setItemNode(3, 500);
//    DbLinkedList.TraverseBeginning();
//#pragma endregion  
#pragma endregion

#pragma region Queue
//clsMyQueue<short> myQueue;

#pragma region IsEmpty()
//cout << "1- Empty Queue: Size Queue = " << myQueue.size << "\n";
//if (myQueue.IsEmpty())
//{
//    cout << "Empty Queue.\n\n";
//}
//#pragma endregion
//
//#pragma region Push()
//cout << "2- Push Node In Queue: From (10) To (70) \n\n";
//myQueue.push(10);
//myQueue.push(20);
//myQueue.push(30);
//myQueue.push(40);
//myQueue.push(50);
//myQueue.push(60);
//myQueue.push(70);
#pragma endregion

#pragma region Traverse Queue()
//cout << "3- Traverse Queue(): Size Queue = " << myQueue.size << "\n";
//myQueue.Traverse();
#pragma endregion

#pragma region pop()
//cout << "4- Remove The Front Item From The Queue:\n";
//myQueue.pop();
//myQueue.Traverse();
#pragma endregion

#pragma region Size && Front && Back
//cout << "Size Queue: " << myQueue.size << "\n\n";
//cout << "Front Queue: " << myQueue.front << "\n\n";
//cout << "Back Queue: " << myQueue.back << "\n\n";
#pragma endregion  

#pragma region GetItem
//cout << "Item(2) : " << myQueue.GetItem(2) << "\n\n";
#pragma endregion

#pragma region Reverse
//myQueue.Reverse();
//cout << "Queue After Reverse:\n";
//myQueue.Traverse();
#pragma endregion

#pragma region UpdateItem
//myQueue.UpdateItem(2, 600);
//cout << "Queue After Updating (2) To 600:\n";
//myQueue.Traverse();
#pragma endregion

#pragma region InsertAfter
//myQueue.InsertAfter(2, 800);
//cout << "Queue After Inserting 800 After Item (2):\n";
//myQueue.Traverse();
#pragma endregion

#pragma region InsertAtFront()
//myQueue.InsertAtFront(1000);
//cout << "Queue After Inserting 1000 at Front:\n";
//myQueue.Traverse();
#pragma endregion

#pragma region InsertAtBack()
//myQueue.InsertAtBack(2000);
//cout << "Queue After Inserting 1000 at Back:\n";
//myQueue.Traverse();
#pragma endregion

#pragma region Clear()
//myQueue.Clear();
//cout << "Queue After Clear: Size Queue : " << myQueue.size << "\n";
//myQueue.Traverse();
#pragma endregion

#pragma endregion

#pragma region Stack
//clsMyStack <int> MyStack;
//
//#pragma region push()
//MyStack.push(10);
//MyStack.push(20);
//MyStack.push(30);
//MyStack.push(40);
//MyStack.push(50);
//cout << "\nStack: \n";
//MyStack.Traverse();
//#pragma endregion
//
//#pragma region Get => (size) , (top) , (bottom)
//cout << "\nStack Size: " << MyStack.size;
//cout << "\nStack Top: " << MyStack.top;
//cout << "\nStack Bottom: " << MyStack.bottom;
//#pragma endregion
//
//#pragma region pop()
//MyStack.pop();
//cout << "\n\nStack after pop() : \n";
//MyStack.Traverse();
//#pragma endregion
//
//#pragma region  MyStack.GetItem()
//cout << "\n\n Item(2) : " << MyStack.GetItem(2);
//#pragma endregion
//
//#pragma region Reverse()
//MyStack.Reverse();
//cout << "\n\nStack after reverse() : \n";
//MyStack.Traverse();
//#pragma endregion
//
//#pragma region UpdateItem()
//MyStack.UpdateItem(2, 600);
//cout << "\n\nStack after updating Item(2) to 600 : \n";
//MyStack.Traverse();
//#pragma endregion
//
//#pragma region InsertAfter()
//MyStack.InsertAfter(2, 800);
//cout << "\n\nStack after Inserting 800 after Item(2) : \n";
//MyStack.Traverse();
//#pragma endregion
//
//#pragma region InsertAtFront()
//MyStack.InsertAtFront(1000);
//cout << "\n\nStack after Inserting 1000 at top: \n";
//MyStack.Traverse();
//#pragma endregion
//
//#pragma region InsertAtBack()
//MyStack.InsertAtBack(2000);
//cout << "\n\nStack after Inserting 2000 at bottom: \n";
//MyStack.Traverse();
//#pragma endregion
//
//#pragma region Clear()
//MyStack.Clear();
//cout << "\n\nStack after Clear(): \n";
//MyStack.Traverse();
//#pragma endregion

#pragma endregion

#pragma region Dynamic Array

//clsDynamicArray <int> MyDynamicArray(5);

#pragma region SetItem()
//MyDynamicArray.SetItem(0, 10);
//MyDynamicArray.SetItem(1, 20);
//MyDynamicArray.SetItem(2, 30);
//MyDynamicArray.SetItem(3, 40);
//MyDynamicArray.SetItem(4, 50);
#pragma endregion

#pragma region IsEmpty()
//cout << "\nIs Empty?  " << MyDynamicArray.IsEmpty();
#pragma endregion

#pragma region GetSize()
//cout << "\nArray Size: " << MyDynamicArray.size;
#pragma endregion

#pragma region Display()
//cout << "\nArray Items: \n";
//MyDynamicArray.Display();
#pragma endregion

#pragma region Resize()
////MyDynamicArray.Resize(2);
////cout << "\nArray Size: " << MyDynamicArray.size;
////cout << "\nArray Items After Size: \n";
////MyDynamicArray.Display();
////cout << "\nArray Length: " << MyDynamicArray.length << "\n";
//
//MyDynamicArray.Resize(7);
//cout << "\nArray Size: " << MyDynamicArray.size;
//cout << "\nArray Items After Size: \n";
//MyDynamicArray.Display();
//cout << "\nArray Length: " << MyDynamicArray.length << "\n";
//#pragma endregion
//
//#pragma region GetItem()
//cout << "\nItem(2): " << MyDynamicArray.GetItem(2) << "\n";
#pragma endregion

#pragma region Reverse()
//MyDynamicArray.Reverse();
//cout << "\nArray Items after reverse: \n";
//MyDynamicArray.Display();
#pragma endregion

#pragma region DeleteItemAt()
//MyDynamicArray.DeleteItemAt(2);
//cout << "\nArray Items after deleting item(2): \n";
//cout << "\nArray Size: " << MyDynamicArray.size << "\n";
//MyDynamicArray.Display();  
#pragma endregion

#pragma region DeleteFirstItem()
//MyDynamicArray.DeleteFirstItem();
//cout << "\nArray Items after deleting FirstItem: \n";
//cout << "\nArray Size: " << MyDynamicArray.size << "\n";
//MyDynamicArray.Display();
#pragma endregion

#pragma region DeleteLastItem()
//MyDynamicArray.DeleteLastItem();
//cout << "\nArray Items after deleting LastItem: \n";
//cout << "\nArray Size: " << MyDynamicArray.size << "\n";
//MyDynamicArray.Display();
#pragma endregion

#pragma region Find()
//short Index = MyDynamicArray.Find(30);
//if (Index == -1)
//cout << "\nItem was not Found :-(\n ";
//else
//cout << "\n30 is found at index : " << Index;
#pragma endregion

#pragma region DeleteItem()
//MyDynamicArray.DeleteItem(30);
//cout << "\n\nArray Items after deleting 30:";
//cout << "\nArray Size: " << MyDynamicArray.size << "\n";
//MyDynamicArray.Display();
#pragma endregion

#pragma region InsertAt()
//MyDynamicArray.InsertAt(2, 500);
//cout << "\n\nArray after insert 500 at index 2:";
//cout << "\nArray Size: " << MyDynamicArray.size << "\n";
//MyDynamicArray.Display();
#pragma endregion

#pragma region InsertAtBeginning()
//MyDynamicArray.InsertAtBeginning(400);
//cout << "\n\nArray after insert 400 at Begining:";
//cout << "\nArray Size: " << MyDynamicArray.size << "\n";
//MyDynamicArray.Display();
#pragma endregion

#pragma region InsertBefore()
//MyDynamicArray.InsertBefore(2, 500);
//cout << "\n\nArray after insert 500 before index 2:";
//cout << "\nArray Size: " << MyDynamicArray.size << "\n";
//MyDynamicArray.Display();
#pragma endregion

#pragma region InsertAfter()
//MyDynamicArray.InsertAfter(2, 600);
//cout << "\n\nArray after insert 600 after index 2:";
//cout << "\nArray Size: " << MyDynamicArray.size << "\n";
//MyDynamicArray.Display();
#pragma endregion

#pragma region InsertAtEnd()
//MyDynamicArray.InsertAtEnd(800);
//cout << "\n\nArray after insert 800 at End:";
//cout << "\nArray Size: " << MyDynamicArray.size << "\n";
//MyDynamicArray.Display();
#pragma endregion

#pragma region Clear()
//MyDynamicArray.Clear();
//cout << "\nArray Items after clear: \n";
//MyDynamicArray.Display();
#pragma endregion
#pragma endregion

#pragma region My Queue Implement On Dynamic Array

//clsMyQueueUseArray <short> MyQueue;

#pragma region push()
//MyQueue.push(10);
//MyQueue.push(20);
//MyQueue.push(30);
//MyQueue.push(40);
//MyQueue.push(50);
//
//cout << "\nQueue: \n";
//MyQueue.Traverse();
#pragma endregion

#pragma region Get = > (size), (front), (back)
//cout << "\nQueue Size: " << MyQueue.size;
//cout << "\nQueue Front: " << MyQueue.front;
//cout << "\nQueue Back: " << MyQueue.back;
#pragma endregion

#pragma region pop()
//MyQueue.pop();
//cout << "\n\nQueue after pop() : \n";
//MyQueue.Traverse();
#pragma endregion

#pragma region MyQueue.GetItem()
//cout << "\n\n Item(2) : " << MyQueue.GetItem(2);
#pragma endregion

#pragma region Reverse()
//MyQueue.Reverse();
//cout << "\n\nQueue after reverse() : \n";
//MyQueue.Traverse();
#pragma endregion

#pragma region UpdateItem()
//MyQueue.UpdateItem(2, 600);
//cout << "\n\nQueue after updating Item(2) to 600 : \n";
//MyQueue.Traverse();
#pragma endregion

#pragma region InsertAfter()
//MyQueue.InsertAfter(2, 800);
//cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
//MyQueue.Traverse();
#pragma endregion

#pragma region InsertAtFront()
//MyQueue.InsertAtFront(1000);
//cout << "\n\nQueue after Inserting 1000 at front: \n";
//MyQueue.Traverse();
#pragma endregion

#pragma region InsertAtBack()
//MyQueue.InsertAtBack(2000);
//cout << "\n\nQueue after Inserting 2000 at back: \n";
//MyQueue.Traverse();
#pragma endregion

#pragma region Clear()
//MyQueue.Clear();
//cout << "\n\nQueue after Clear(): \n";
//MyQueue.Traverse();
#pragma endregion  
#pragma endregion

#pragma region My Stack Implement On Dynamic Array
//clsMyStackUseArray <int> MyStack;

#pragma region push()
//MyStack.push(10);
//MyStack.push(20);
//MyStack.push(30);
//MyStack.push(40);
//MyStack.push(50);
//
//cout << "\nStack: \n";
//MyStack.Traverse();
#pragma endregion

#pragma region Get = > (size), (front), (back)
//cout << "\nStack Size: " << MyStack.size;
//cout << "\nStack Top: " << MyStack.top;
//cout << "\nStack Bottom: " << MyStack.bottom;
#pragma endregion

#pragma region pop()
//MyStack.pop();
//cout << "\n\nStack after pop() : \n";
//MyStack.Traverse();
#pragma endregion

#pragma region GetItem()
//cout << "\n\n Item(2) : " << MyStack.GetItem(2);
#pragma endregion

#pragma region Reverse()
//MyStack.Reverse();
//cout << "\n\nStack after reverse() : \n";
//MyStack.Traverse();
#pragma endregion

#pragma region UpdateItem()
//MyStack.UpdateItem(2, 600);
//cout << "\n\nStack after updating Item(2) to 600 : \n";
//MyStack.Traverse();
#pragma endregion

#pragma region InsertAfter()
//MyStack.InsertAfter(2, 800);
//cout << "\n\nStack after Inserting 800 after Item(2) : \n";
//MyStack.Traverse();
#pragma endregion

#pragma region InsertAtFront()
//MyStack.InsertAtFront(1000);
//cout << "\n\nStack after Inserting 1000 at top: \n";
//MyStack.Traverse();
#pragma endregion

#pragma region InsertAtBack()
//MyStack.InsertAtBack(2000);
//cout << "\n\nStack after Inserting 2000 at bottom: \n";
//MyStack.Traverse();
#pragma endregion

#pragma region Clear()
//MyStack.Clear();
//cout << "\n\nStack after Clear(): \n";
//MyStack.Traverse();
#pragma endregion  
#pragma endregion

#pragma region Example => String Use Stack (Undo , Redo)
//cout << "\n\n\t\t\t\t\t\t Undo/Redo Project\n\n";

//clsMyStringUseStack S1;
//
//cout << "\nS1  = " << S1.value << "\n";
//
//S1.value = "Mohammed";
//
//cout << "S1  = " << S1.value << "\n";
//
//S1.value = "Mohammed2";
//
//cout << "S1  = " << S1.value << "\n";
//
//S1.value = "Mohammed3";
//
//cout << "S1  = " << S1.value << "\n";

#pragma region Undo()
//cout << "\n\nUndo: ";
//cout << "\n__________\n";
//
//S1.Undo();
//cout << "\nS1  after undo = " << S1.value << "\n";
//
//S1.Undo();
//cout << "S1  after undo = " << S1.value << "\n";
//
//S1.Undo();
//cout << "S1  after undo = " << S1.value << "\n";
#pragma endregion

#pragma region Redo()
//cout << "\n\nRedo: ";
//cout << "\n__________\n";
//
//S1.Redo();
//cout << "\nS1  after Redo = " << S1.value << "\n";
//
//S1.Redo();
//cout << "S1  after Redo = " << S1.value << "\n";
//
//S1.Redo();
//cout << "S1  after Redo = " << S1.value << "\n";
#pragma endregion  
#pragma endregion



clsQueueLine PayBillsQueue("A0", 10);
clsQueueLine SubscriptionsQueue("B0", 5);


PayBillsQueue.IssueTicket();
PayBillsQueue.IssueTicket();
PayBillsQueue.IssueTicket();
PayBillsQueue.IssueTicket();
PayBillsQueue.IssueTicket();

cout << "\nPay Bills Queue Info:\n";
PayBillsQueue.PrintInfo();

PayBillsQueue.PrintTicketsLineRTL();
PayBillsQueue.PrintTicketsLineLTR();



PayBillsQueue.PrintAllTickets();

PayBillsQueue.ServeNextClient();
cout << "\nPay Bills Queue After Serving One client\n";
PayBillsQueue.PrintInfo();

cout << "\nSubscriptions Queue Info:\n";

SubscriptionsQueue.IssueTicket();
SubscriptionsQueue.IssueTicket();
SubscriptionsQueue.IssueTicket();


SubscriptionsQueue.PrintInfo();

SubscriptionsQueue.PrintTicketsLineRTL();
SubscriptionsQueue.PrintTicketsLineLTR();

SubscriptionsQueue.PrintAllTickets();

SubscriptionsQueue.ServeNextClient();
cout << "\nSubscriptions Queue After Serving One client\n";
SubscriptionsQueue.PrintInfo();




}