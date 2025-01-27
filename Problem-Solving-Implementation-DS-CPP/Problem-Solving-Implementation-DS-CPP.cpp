#include <iostream>
#include <string>
#include "clsDbLinkedList.h"
#include "clsMyQueue.h"

using namespace std;

int main()
{

#pragma region Double Linked List
    clsDbLinkedList<short> DbLinkedList;
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
clsMyQueue<short> myQueue;

//#pragma region IsEmpty()
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
//#pragma endregion
//
//#pragma region Traverse Queue()
//cout << "3- Traverse Queue(): Size Queue = " << myQueue.size << "\n";
//myQueue.Traverse();
//#pragma endregion
//
//#pragma region pop()
//cout << "4- Remove The Front Item From The Queue:\n";
//myQueue.pop();
//myQueue.Traverse();
//#pragma endregion
//
//#pragma region Size && Front && Back
//cout << "Size Queue: " << myQueue.size << "\n\n";
//cout << "Front Queue: " << myQueue.front << "\n\n";
//cout << "Back Queue: " << myQueue.back << "\n\n";
//#pragma endregion  
//
//#pragma region GetItem
//cout << "Item(2) : " << myQueue.GetItem(2) << "\n\n";
//#pragma endregion
//
//#pragma region Reverse
//myQueue.Reverse();
//cout << "Queue After Reverse:\n";
//myQueue.Traverse();
//#pragma endregion
//
//#pragma region UpdateItem
//myQueue.UpdateItem(2, 600);
//cout << "Queue After Updating (2) To 600:\n";
//myQueue.Traverse();
//#pragma endregion
//
//#pragma region InsertAfter
//myQueue.InsertAfter(2, 800);
//cout << "Queue After Inserting 800 After Item (2):\n";
//myQueue.Traverse();
//#pragma endregion
//
//#pragma region InsertAtFront()
//myQueue.InsertAtFront(1000);
//cout << "Queue After Inserting 1000 at Front:\n";
//myQueue.Traverse();
//#pragma endregion
//
//#pragma region InsertAtBack()
//myQueue.InsertAtBack(2000);
//cout << "Queue After Inserting 1000 at Back:\n";
//myQueue.Traverse();
//#pragma endregion
//
//#pragma region Clear()
//myQueue.Clear();
//cout << "Queue After Clear: Size Queue : " << myQueue.size << "\n";
//myQueue.Traverse();
//#pragma endregion

#pragma endregion


}