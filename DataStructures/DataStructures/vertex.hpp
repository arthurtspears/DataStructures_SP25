#ifndef VERTEX_HPP
#define VERTEX_HPP

#include <list>
#include "arc.hpp"
#include "adt_exception.hpp"

namespace data_structures
{
	using std::list;
	using std::move;

	template <class V, class E>
	class Arc;

	template <class V, class E>
	class Vertex final
	{
	public:
		Vertex() = delete;
		explicit Vertex(V data);

		Vertex(const Vertex<V, E>& other);
		Vertex<V, E>& operator=(const Vertex<V, E>& rhs);

		Vertex(Vertex<V, E>&& other) noexcept;
		Vertex<V, E>& operator=(Vertex<V, E>&& rhs) noexcept;

		V Data() noexcept;
		void AddArc(Arc<V, E> arc);
		list<Arc<V, E>> Arcs();
		void RemoveArc(const E& arc_data);
		int OutDegree() const noexcept;
		void Processed(const bool& processed) noexcept;
		bool Processed() const noexcept;

		~Vertex() = default;
	private:
		V data_;
		bool processed_ = false;
		list<Arc<V, E>> arcs_;
	};

	

}
#endif
