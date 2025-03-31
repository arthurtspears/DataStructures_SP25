#ifndef IROW_HPP
#define IROW_HPP

namespace data_structures
{
	template <class T>
	class IRow
	{
	public:
		virtual ~Row() = default;
		virtual auto operator[](const int& column) -> T& = 0;
		virtual auto operator[](const int& column) const -> T = 0;
	};
}

#endif