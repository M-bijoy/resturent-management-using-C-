#include <iostream>
#include <fstream>
#include <string>
#include <vector>

const double TAX_RATE = 0.08; // Sales tax rate
const int MAX_ITEMS = 100; // Maximum number of menu items

// Class for a menu item
class Item {
public:
  std::string name;
  double price;
  Item(std::string name, double price) {
    this->name = name;
    this->price = price;
  }
};

// Class for an order item
class OrderItem {
public:
  std::string name;
  double price;
  OrderItem(std::string name, double price) {
    this->name = name;
    this->price = price;
  }
};

// Function to edit the menu
void editMenu(std::vector<Item> &menu) {
  while (true) {
    std::cout << "\nMenu editor:" << std::endl;
    std::cout << "1. Add item" << std::endl;
    std::cout << "2. Delete item" << std::endl;
    std::cout << "3. Display menu" << std::endl;
    std::cout << "4. Return to main menu" << std::endl;
    std::cout << "Enter choice: ";
    int choice;
    std::
