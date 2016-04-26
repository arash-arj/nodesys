// Copyright 2016 Arash Arj

#include <iostream>
#include "core/node.cpp"

int main(void) {
  nodesys::core::NodePtr node1(new nodesys::core::Node() );
  nodesys::core::NodePtr node2(new nodesys::core::Node() );
  node2->SetParent(node1);
  return 0;
}
