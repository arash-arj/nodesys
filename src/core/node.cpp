#include "core/node.hpp"

using namespace nodesys;
using namespace core;
using namespace common;


Node::Node() {
  std::cout << "Hi!" << std::endl;
  
}

Node::~Node() {
  std::cout << "Bye!" << std::endl;
}

NodePtr Node::GetParent() {
  return this->parent_;  // copy the shared_ptr and return 
}

void Node::SetParent(NodePtr parent) {
  this->parent_ = parent;  // copy the given shared_ptr
}

std::vector<NodePtr> Node::GetChildren() {
  return this->children_; // copy shared_ptr vector and return
}

NodePtr Node::GetChild(Int index) {
  NodePtr child = this->children_.at(index);
  return child; // copy shared_ptr vector and return
}

void Node::SetName(String name) {
  this->name_ = name;
}

nodesys::common::String Node::GetName() {
  return this->name_;
}
