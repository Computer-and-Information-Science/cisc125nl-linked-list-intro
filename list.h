#pragma once

// A single node in the linked list.
template <typename T>
class ListNode {
public:

};

// A linked list of objects.
template <typename T>
class List {
protected:

public:
	List () { }
	~List () { }

	// Adds one object to the end of the list
	void append (const T& item);

	// Clears the list, making it empty
	void clear ();

	// Get index of first matching object, or size if object not found
	size_t find (const T& object) const;

	// Inserts an object prior to the object at the given index
	void insert (size_t index, const T& obj);

	// Removes the object at the given index
	void remove (size_t index);

	// Replace the object at the given index with the given object
	void replace (size_t index, const T& obj);

	// Return the number of objects in the list
	size_t size () const;

	// Return the object at the given index
	T operator[] (size_t index) const;
};
