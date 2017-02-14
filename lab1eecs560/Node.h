 
/**
*	@file : Node.h
*	@author : Richard Aviles
*	@date : 2015.08.26
	Purpose:  
*/

#ifndef NODE_H
#define NODE_H

class Node
{
    public:
        Node(); 
        void setValue(int value); 
        int getValue() const; 
        void setNext(Node* prev); 
        Node* getNext() const; 
        int m_value;
        Node* m_next;
        
};

#endif
    
    
