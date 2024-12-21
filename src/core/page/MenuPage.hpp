#ifndef Core_MenuPage_HPP
#define Core_MenuPage_HPP

#include "Page.hpp"
#include "PageItem.hpp"
#include "string"
#include "vector"

namespace Core::Page {

class MenuPage : public Page {
private:
  std::vector<PageItem *> pageItems;
  std::string input = "";

public:
  void addMenu(std::string label, Page *page);
  void execute();
  std::string getInput();
};

} // namespace Core::Page

#endif
