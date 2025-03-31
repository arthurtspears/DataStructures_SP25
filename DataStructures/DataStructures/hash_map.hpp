#ifndef HASH_MAP_H
#define HASH_MAP_H

#include <vector>
#include <list>
#include <functional>
#include "adt_exception.hpp"
using std::list;
using std::vector;
using std::function;
using std::move;
using std::pair;

namespace data_structures
{


	template <class K, class V>
	class HashMap final
	{
	public:
		HashMap() = delete;
		HashMap(const size_t& table_size, const function<int(K key)>& hash_function);

		HashMap(const HashMap& copy);
		auto operator=(const HashMap& rhs) -> HashMap&;

		HashMap(HashMap&& copy) noexcept;
		auto operator=(HashMap&& rhs) noexcept -> HashMap&;

		~HashMap() = default;

		auto Insert(const K& key, const V& value) -> void;
		auto HashFunction(const function<int(const K& key)>& hash) -> void;
		auto operator [](const K& key) -> V&;
		auto operator [](const K& key) const -> V;
		auto Remove(const K& key) -> void;
		auto Traverse(const function<void(const K& key, const V& value)>& visit) const -> void;
		auto Contains(const K& key) -> bool;
		auto Count() const -> size_t;

		auto GetOrAdd(const K& key, const function<V()>& create_function) -> V&;


	private:
		vector<list<pair<K, V>>> buckets_ {};
		function<int(K key)> hash_function_ {nullptr};

	};


}
#endif