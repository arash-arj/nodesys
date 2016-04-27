#ifndef __NODE_HPP__
#define __NODE_HPP__

#include <iostream>
#include <vector>
#include <memory>


namespace nodesys {
    namespace common {
	typedef int Int;
	typedef unsigned int UInt;
	typedef double Double;
	typedef std::string String;
    }
}


using namespace nodesys::common;

namespace nodesys {
    namespace core {
	class Node;
	typedef std::shared_ptr<Node> NodePtr;
	
	class Node {
	    
	public:
	    Node();
	    ~Node();
	    NodePtr GetParent();
	    void SetParent(NodePtr);
	    NodePtr GetChild(Int index);
	    std::vector<NodePtr> GetChildren();
	    nodesys::common::String GetName();
	    void SetName(nodesys::common::String name);
	    
	    	    
	private:
	    NodePtr parent_;
	    std::vector<NodePtr> children_;
	    String name_; 
	    
	};
    }
}

#endif
