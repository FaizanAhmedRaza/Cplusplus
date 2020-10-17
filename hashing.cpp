// C++ program to Implement Hash Tables
// A hash table is a data structure which is used to store key-value pairs. Hash function is used by hash table to compute an index into an array in which an element will be inserted or searched.
// Dynamic memory allocation is the process of assigning the memory space during the execution time or the run time.
// You need to use dynamic memory when:You cannot determine the maximum amount of memory to use at compile time. like (data structures)
#include <iostream>
using namespace std;

const int tableSize = 200;
class HashTableEntry
{
public:
    int key, value;
    HashTableEntry(int key, int value)
    {
        this->key = key;
        this->value = value;
    }
};
class HashMapTable
{
private:
    HashTableEntry **t;     //double pointer or is a pointer to a pointer(Dynamic 2d array)
//Dynamic memory is allocated using operator new. new is followed by a data type specifier and, if a sequence of more than one element is required, the number of these within brackets []. It returns a pointer to the beginning of the new block of memory allocated. 
public:
    HashMapTable()
    {
        t = new HashTableEntry *[tableSize];    //This expression is used to allocate a block(an array) of elements of type HashTableEntry(pointer) where number_of_elements is an integer value representing the amount of these.
        for (int i = 0; i < tableSize; i++)
        {
            t[i] = NULL;
        }
    }
    int HashFunc(int key)
    {
        return key % tableSize;       //It returns index where he store keys
    }
    void Insert(int key, int value)
    {
        int h = HashFunc(key);
        while (t[h] != NULL && t[h]->key != key)
        {
            h = HashFunc(h + 1);
        }
        if (t[h] != NULL)
            delete t[h];            
        t[h] = new HashTableEntry(key, value);
    }
    int SearchKey(int key)
    {
        int h = HashFunc(key);
        while (t[h] != NULL && t[h]->key != key)
        {
            h = HashFunc(h + 1);
        }
        if (t[h] == NULL)
            return -1;
        else
            return t[h]->value;
    }
    void Remove(int key)
    {
        int h = HashFunc(key);
        while (t[h] != NULL)
        {
            if (t[h]->key == key)
                break;
            h = HashFunc(h + 1);
        }
        if (t[h] == NULL)
        {
            cout << "No Element found at key " << key << endl;
            return;
        }
        else
            delete t[h];
        cout << "Element Deleted" << endl;
    }
    ~HashMapTable() //Call the destructor to destroy the objects created by the constructor
    {
        for (int i = 0; i < tableSize; i++)
        {
            if (t[i] != NULL)
                delete t[i];    // memory allocated dynamically is only needed during specific periods of time within a program; once it is no longer needed, it can be freed so that the memory becomes available again for other requests of dynamic memory. This is the purpose of delete operator 
            delete[] t;
        }
    }
};
int main()
{
    HashMapTable hash;
    int key, value;
    int c;
    while (1)
    {
        cout << "1.Insert element into the table" << endl;
        cout << "2.Search element from the keyey" << endl;
        cout << "3.Delete element at a keyey" << endl;
        cout << "4.Exit" << endl;
        cout << "Enter your choice: ";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter element to be inserted: ";
            cin >> value;
            cout << "Enter key at which element to be inserted: ";
            cin >> key;
            hash.Insert(key, value);
            break;
        case 2:
            cout << "Enter key of the element to be searched: ";
            cin >> key;
            if (hash.SearchKey(key) == -1)
            {
                cout << "No element found at key " << key << endl;
                continue;
            }
            else
            {
                cout << "Element at key " << key << " : ";
                cout << hash.SearchKey(key) << endl;
            }
            break;
        case 3:
            cout << "Enter key of the element to be deleted: ";
            cin >> key;
            hash.Remove(key);
            break;
        case 4:
            exit(1);
        default:
            cout << "\nEnter correct option\n";
        }
    }
    return 0;
}