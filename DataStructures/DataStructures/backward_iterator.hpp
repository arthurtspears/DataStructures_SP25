#ifndef BACKWARDITERATOR_HPP
#define BACKWARDITERATOR_HPP

#include "list_iterator.hpp"

namespace data_structures
{
	template <class T>
	class BackwardIterator : public ListIterator<T>
	{
	public:
		BackwardIterator() = default;
		~BackwardIterator() = default;
		BackwardIterator(const BackwardIterator& copy) noexcept;
		explicit BackwardIterator(ListNode<T>* const copy) noexcept;
		BackwardIterator(BackwardIterator&& copy) noexcept;
		BackwardIterator& operator=(const BackwardIterator& rhs) noexcept;
		BackwardIterator& operator=(ListNode<T>* const rhs) noexcept override;
		BackwardIterator& operator=(BackwardIterator&& rhs) noexcept;

		bool operator==(const BackwardIterator<T>& rhs) const noexcept;

		void MoveNext() override;
		void Reset() noexcept override;
		BackwardIterator& operator++();
		BackwardIterator operator++(int);
	};



}
#endif 
