#include "MenuPage.hpp"
#include "string"

void Core::Page::MenuPage::addMenu(std::string label, Page *page) {
  this->pageItems.push_back(new PageItem(label, page));
}

void Core::Page::MenuPage::execute() {
  int i = 1;
  for (auto pageItem : pageItems) {
    std::cout << i << ". " << pageItem->label << "\n";
    i++;
  }

  std::cout << "Masukkan input anda > ";
  std::cin >> this->input;
}

std::string Core::Page::MenuPage::getInput() { return this->input; }
