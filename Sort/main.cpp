#include <iostream>
#include <string>
#include "../1stCBApp/1stCBApp/Collection.h"
#include "../Superheroes/Superhero.h"

using namespace std;

void swap(int, int, int*);
void prettyPrint(int*, int);
void linearSort(int*, int);
void bubbleSort(int*, int);

int main()
{
    Collection<Superhero> superfriends;

    superfriends.Add(Superhero("Hulk", "Smash", "Bruce Banner", 37, 1000));
    superfriends.Add(Superhero("Iron Man", "Suit", "Tony Stark", 45, 400));
    superfriends.Add(Superhero("Captain America", "Shield and super soldier serum", "Steve Rogers", 35, 800));
    superfriends.Add(Superhero("Ant Man", "Insects", "Henry Pym", 40, 100));

    superfriends.Sort();

    cout << superfriends << endl;

    return 0;
}

//code from 4/28
void sortTest()
{
    //int numbers[] = {5, 13, 7, 3, 11};

    //bubbleSort(numbers, 5);

    Collection<int> c;
    c.Add(5);
    c.Add(2);
    c.Add(11);
    c.Add(66);
    c.Add(22);
    c.Add(76);
    c.Add(84);
    c.Add(8);
    c.Add(100);
    cout << "Unsorted: " << c << endl;
    c.Sort();
    cout << "Sorted: " << c << endl;
   // cout << "Contains:5 = " << c.Contains(5) << endl;
   // cout << "Contains:17 = " << c.Contains(17) << endl;
}

void swap(int a, int b, int* numbers)
{
    int temp = numbers[a];
    numbers[a] = numbers[b];
    numbers[b] = temp;
}

void prettyPrint(int* numbers, int length)
{
    cout << "{";
    for(int i = 0; i < length; i++)
    {
        if (i > 0)
        {
            cout << ",";
        }
        cout << numbers[i];
    }
    cout << "}" << endl;
}

void linearSort(int* numbers, int length)
{
   for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (numbers[i] < numbers[j])
            {
                swap(i, j, numbers);
            }
        }
        prettyPrint(numbers, 5);
    }
}

void bubbleSort(int* numbers, int length)
{
    bool sorted = false;
    do
    {
        sorted = true;
        for (int i = 0; i < length - 1; i++)
        {
            if (numbers[i] > numbers[i + 1])
            {
                swap(i, i + 1, numbers);
                sorted = false;
            }
        }
        prettyPrint(numbers, length);
    } while (!sorted);
}

