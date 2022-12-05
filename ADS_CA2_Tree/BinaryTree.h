#pragma once
//if E == Student (email, dob, address, id,...)
//then K = Key(email, dob, address)

template <typename K, typename E>
class BinaryTree
{
public:
	void add(T item);
	E* search(K key) {
		return nullptr;
	}
};

template <class T>
void BinaryTree<T>::add(T item)
{
	if (root == nullptr)
	{
		root = new BSTNode<T>();
		root->setItem(item);
	}
	else
	{
		root->add(item);
	}
}