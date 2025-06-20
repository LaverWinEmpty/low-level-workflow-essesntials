#ifndef LWE_SYS_EXCEPTIONAL
#define LWE_SYS_EXCEPTIONAL

#include "alert.hpp"

LWE_BEGIN
namespace diag {

template<typename T> class Expected {
public:
	Expected(const Alert&) noexcept;
	Expected(Alert&&) noexcept;
	Expected(const T&) noexcept;
	Expected(T&&) noexcept;
	Expected(const Expected&) noexcept;
	Expected(Expected&&) noexcept;
	~Expected();

public:
	Expected& operator=(const Expected&) noexcept;
	Expected& operator=(Expected&&) noexcept;

public:
	explicit operator bool() const;
	operator const Alert& () const;
	operator const T&() const;
	operator const char* () const;

public:
	T*       operator->();
	T&       operator*();
	const T* operator->() const;
	const T& operator*() const;

public:
	const char* what() const; //!< error message, return "" when succeeded
	T&&         move();       //!< move data, throw when failed 
	T&          as();         //!< get reference, throw when failed

private:
	union {
		Alert msg;
		T     data;
	};
	bool flag;
};

}
LWE_END

#include "expected.ipp"
#endif