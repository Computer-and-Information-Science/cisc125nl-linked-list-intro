#pragma once

#include <cstddef>
#include <iostream>

// A linked list of objects.
template <typename T>
class List {
protected:

	// A node in the linked list, contains the object stored in the node
	// and a pointer to the next node in the list.
	class Node {
	};

	// Pointers to head and tail nodes

	// Current list size

public:

	// Default Constructor
	List () { }

	// Copy Constructor
	List (const List<T>& list);

	// Assignment
	List<T>& operator= (const List<T>& list);

	// Destructor
	~List () { }

	// Adds one object to the end of the list
	void append (const T& obj);

	// Clears the list, making it empty
	void clear ();

	// Get index of first matching object, or size if object not found
	size_t find (const T& object) const;

	// Inserts an object prior to the object at the given index
	void insert (size_t index, const T& obj);

	// Adds one object to the start of the list
	void prepend (const T& obj);

	// Navigate the list, printing each object with its index
	void print () const;

	// Removes the object at the given index
	void remove (size_t index);

	// Return the number of objects in the list
	size_t size () const;

	// Return the object at the given index
	T& operator[] (size_t index);

	// Return the object at the given index (constant version)
	T operator[] (size_t index) const;
};
