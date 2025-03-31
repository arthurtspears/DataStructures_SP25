#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "adt_exception.hpp"

namespace data_structures
{
	template <class T>
	class Array final
	{
	public:
		explicit Array() = default;
		~Array();
		explicit Array(size_t length, int start_index = 0) noexcept(false);
		explicit Array(const T* storage, const size_t& length, const int& start_index = 0) noexcept(false);

		Array(const Array& copy) noexcept(false);
		Array& operator=(const Array& rhs) noexcept(false);
		Array(Array&& copy) noexcept;
		Array& operator=(Array&& rhs) noexcept;

		T& operator[](const int& index) noexcept(false);
		T operator[](const int& index) const noexcept(false);
		explicit operator bool() const noexcept;

		bool operator==(const Array<T>& rhs) noexcept;

		int StartIndex() const noexcept;
		size_t Length() const noexcept;

		void StartIndex(const int& start_index) noexcept;
		void Length(const size_t& length) noexcept(false);

	private:
		T* storage_;
		size_t length_;
		int start_index_;
	};


	template <class T>
	Array<T>::~Array()
	{
	}

	template <class T>
	Array<T>::Array(size_t length, int start_index) noexcept(false)
	{
	}

	template <class T>
	Array<T>::Array(const T* storage, const size_t& length, const int& start_index) noexcept(false)
	{
	}

	template <class T>
	Array<T>::Array(const Array& copy) noexcept(false)
	{
	}

	template <class T>
	Array<T>& Array<T>::operator=(const Array& rhs) noexcept(false)
	{
		return *this;
	}

	template <class T>
	Array<T>::Array(Array&& copy) noexcept
	{
	}

	template <class T>
	Array<T>& Array<T>::operator=(Array&& rhs) noexcept
	{
		return *this;
	}

	template <class T>
	T& Array<T>::operator[](const int& index) noexcept(false)
	{
		return storage_[0];
	}

	template <class T>
	T Array<T>::operator[](const int& index) const noexcept(false)
	{
		return storage_[0];
	}

	template <class T>
	Array<T>::operator bool() const noexcept
	{
		return false;
	}

	template <class T>
	bool Array<T>::operator==(const Array<T>& rhs) noexcept
	{
		return false;
	}

	template <class T>
	int Array<T>::StartIndex() const noexcept
	{
		return 0;
	}

	template <class T>
	size_t Array<T>::Length() const noexcept
	{
		return 0;
	}

	template <class T>
	void Array<T>::StartIndex(const int& start_index) noexcept
	{
	}

	template <class T>
	void Array<T>::Length(const size_t& length) noexcept(false)
	{
	}
}

#endif
