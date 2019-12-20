#pragma once
#include <iostream>
#include <vector>
#include <string>

namespace tables {

class Cell {
public:
  explicit Cell(const std::string& data) : data_(data) {}

  std::string data() const {
    return data_;
  }

  size_t size() const {
    return data_.size();
  }

private:
  std::string data_;
};

}