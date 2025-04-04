#ifndef BST_TREE_HPP
#define BST_TREE_HPP

#include "bst_node.hpp"
#include "itree.hpp"
#include "list_queue.hpp"
#include <functional>

namespace data_structures
{
	template <class K, class V>
	class BstTree final : ITree<K, V>
	{
	public:
		BstTree() = default;
		~BstTree();
		BstTree<K, V>(const BstTree<K, V>& copy) noexcept(false);
		auto operator=(const BstTree<K, V>& rhs) noexcept(false)->BstTree<K, V> &;
		BstTree<K, V>(BstTree<K, V>&& copy) noexcept;
		auto operator=(BstTree<K, V>&& rhs) noexcept->BstTree<K, V> &;
		auto VisitFunction(const std::function<void(const PairNode<K, V>* node)>& visit) noexcept -> void override;
		auto Clear() noexcept -> void override;
		auto Height() noexcept->size_t;
		auto InOrder() const noexcept -> void override;
		auto PreOrder() const noexcept -> void override;
		auto Empty() const noexcept -> bool override;
		auto PostOrder() const noexcept -> void override;
		auto BreadthFirst() const noexcept -> void override;
		auto Insert(const K& key, const V& value) noexcept(false) -> void override;
		auto Remove(const K& key) noexcept(false) -> void override;
		auto Search(const K& key) const noexcept(false)->V override;
		auto Search(const K& key) noexcept(false)->V & override;

		bool operator==(const BstTree<K, V>& rhs) const noexcept;

	private:
		BstNode<K, V>* root_ = nullptr;
		function<void(const BstNode<K, V>* const node)> visit_ = nullptr;

		auto Clear(BstNode<K, V>* node) noexcept -> void;
		auto Height(BstNode<K, V>* node) noexcept -> int;
		auto InOrder(BstNode<K, V>* node) const noexcept -> void;
		auto PreOrder(BstNode<K, V>* node) const noexcept -> void;
		auto PostOrder(BstNode<K, V>* node) const noexcept -> void;
		auto BreadthFirst(BstNode<K, V>* node) const noexcept -> void;
		auto Insert(BstNode<K, V>*& root, const K& key, const V& value) noexcept(false) -> void;
		auto DeleteFromTree(BstNode<K, V>*& parent) noexcept -> void;
		auto Copy(BstNode<K, V>* node) noexcept(false) -> void;
		auto Search(BstNode<K, V>* root, const K& key) const noexcept(false)->V;
		auto Search(BstNode<K, V>* root, const K& key) noexcept(false)->V &;
	};

	
}

#endif
