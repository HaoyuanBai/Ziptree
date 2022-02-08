#ifndef ZIPTREE_H
#define ZIPTREE_H

// each file that uses a WAVL tree should #include this file
template <typename KeyType, typename ValType>
class ZipTree
{
public:
	// DO NOT MODIFY METHOD SIGNATURES BELOW THIS LINE
	ZipTree();
	~ZipTree();
	static unsigned getRandomRank();
	void insert(const KeyType& key, const ValType& val, unsigned rank = getRandomRank());
	void remove(const KeyType& key);
	ValType find(const KeyType& key);
	unsigned getSize();
	int getHeight();
	unsigned getDepth(const KeyType& key);
	// DO NOT MODIFY METHOD SIGNATURES ABOVE THIS LINE

	// define new public methods

private:
	// define private methods
};

// fill in the definitions for each required member function and for any additional member functions you define


template <typename KeyType, typename ValType>
ZipTree<KeyType, ValType>::ZipTree()
{
	// TODO
}

template <typename KeyType, typename ValType>
ZipTree<KeyType, ValType>::~ZipTree()
{
	// TODO
}

template <typename KeyType, typename ValType>
unsigned ZipTree<KeyType, ValType>::getRandomRank()
{
	// TODO
	return 0u; // remove this line when you implement this function
}

template <typename KeyType, typename ValType>
void ZipTree<KeyType, ValType>::insert(const KeyType& key, const ValType& val, unsigned rank)
{
	// TODO
}

template <typename KeyType, typename ValType>
void ZipTree<KeyType, ValType>::remove(const KeyType& key)
{
	// TODO
}

template <typename KeyType, typename ValType>
ValType ZipTree<KeyType, ValType>::find(const KeyType& key)
{
	// TODO
	return 0; // remove this line when you implement this function
}

template <typename KeyType, typename ValType>
unsigned ZipTree<KeyType, ValType>::getSize()
{
	// TODO
	return 0u; // remove this line when you implement this function
}

template <typename KeyType, typename ValType>
int ZipTree<KeyType, ValType>::getHeight()
{
	// TODO
	return -1; // remove this line when you implement this function
}

template <typename KeyType, typename ValType>
unsigned ZipTree<KeyType, ValType>::getDepth(const KeyType& key)
{
	// TODO
	return 0u; // remove this line when you implement this function
}

#endif
