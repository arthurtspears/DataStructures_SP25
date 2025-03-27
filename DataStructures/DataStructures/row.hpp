#ifndef ROW_H
#define ROW_H

#include "irow.hpp"
#include "iarray2d.hpp"

namespace data_structures
{
	template <class T>
	class IArray2D;

	template <class T>
	class Row final
	{
	public:
		Row(const IArray2D<T>& arr, const int row_index);
		~Row() = default;
		T& operator[](const int& column);
		T operator[](const int& column) const;

	private:
		const IArray2D<T>& arr_;
		const int row_;
	};


}
#endif 