#ifndef ROW_H
#define ROW_H

#include "irow.hpp"
#include "iarray2d.hpp"

namespace data_structures
{
	template <class T>
	class IArray2D;

	template <class T>
	class Row final : public IRow<T>
	{
	public:
		Row(const IArray2D<T>& arr, const int row_index);
		~Row();
		auto operator[](const int& column) -> T& override;
		auto operator[](const int& column) const -> T override;

	private:
		const IArray2D<T>& arr_;
		const int row_;
	};


}
#endif 