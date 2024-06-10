#include <iostream>
#include <vector>
#include <string>

void carArray();
void fillExample();
void userFillArray();
void multiDimensionalArr();


int main()
{
//    userFillArray();
    multiDimensionalArr();
    return 0;

     // getline is used only for returning std::string
}

void carArray()
{
  std::string cars[] = {"Corvette", "Ford", "HellCat"};
  for (std::string car : cars)
  {
    std::cout << car << std::endl;
  }
  std::cout << "std::string is " << sizeof(std::string) << " bytes." << std::endl; // sizeof returns number of bytes the type i
  std::cout << "double size: " << sizeof(double) << " bytes." << std::endl
            << "size of cars: " << sizeof(cars) << " because each string is 32. so total is 32*(num of values in the array)";
}

void fillExample()
{
    const int SIZE = 100;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
       
    fill(foods + (SIZE/3), foods + (2*(SIZE/3)), "ham");
      
    fill(foods + (2*(SIZE/3)), foods + SIZE, "spaghetti");
    
    for (std::string food : foods)
    {
        std::cout << food << std::endl;
    }

}

void userFillArray()
{
    const int size = 5;
    std::string hello[size];
    std::string temp; // keep value

    for (int i=0; i<5; i++)
    {
        std::cout << "enter something" << "\n";
        std::getline(std::cin, temp);
        if (temp == "q")
        {
            break;
        }
        else{
            hello[i] = temp;
        }
    }

    for (int i=0; !hello[i].empty(); i++)
    {
        std::cout << hello[i] << std::endl;
    }
}

void multiDimensionalArr()
{
    // arrayName[rowSize (how many elements in each row)][columnSize (how many columns)]
    std::string cars[][3] = {{"Ford", "Escape"},
                             {"corvette", "Equinox"},
                             {"suprano", "film"}};
    // to access do this
    std::cout << cars[1][1];
}

void pointers()
{
    // pointers store a memory address of a nother var.
    // & address-of operator
    // *derference operator

    std::string name = "Bro";
    std::string *pName = &name; // will store bro i think honeslty not sure

    std::cout << pName;
}

//dynamicMemory = Memory in the heap rather than stack. done by using new.

void dynamicMemory()
{
    // good for when we dont know the user input etc
    char *pGrades = NULL;

    int size;
    std::cout << "Enter how many grades";
    std::cin >> pGrades[i];
    pGrades = new char[size];
}
// void stringFuncs()
// {
//   std::string varName;
//   std::getline(std::cin, varName); // can only be used for obtaining strings

//   varName.length(); // this how to get length

//   if (varName.empty())
//   {
//     std::cout << "Enter your name";
//   } // returns boolean if string is empty
//   varName.insert(2, "F"); // insert character at index .insert(index, "character to insert")

//   varName.append("string to append"); // adds this to the end of the string

//   varName.clear(); // clears the string


//   std::cout << varName.at(0); //varName.at(index)

  
//   varName.find(' '); // returns the first instance of character given

//   varName.erase(0, 3); // .erase(beginningIndex, endIndex)




// }

