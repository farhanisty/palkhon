#ifndef Core_Page_HPP
#define Core_Page_HPP

namespace Core::Page {

class Page {
public:
  virtual void execute() = 0;
  virtual ~Page() {}
};

} // namespace Core::Page

#endif
