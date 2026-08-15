#pragma once
// IWYU pragma private; include "Dissonance/Extensions/IEnumerableExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IEnumerableExtensions)
namespace Dissonance::Extensions {
template<typename T>
class IEnumerableExtensions__ConcatUnsafe_d__1_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Dissonance::Extensions {
class IEnumerableExtensions;
}
namespace Dissonance::Extensions {
template<typename T>
class IEnumerableExtensions__ConcatUnsafe_d__1_1;
}
// Write type traits
MARK_REF_T(::Dissonance::Extensions::IEnumerableExtensions*);
MARK_GEN_REF_T_PTR(::Dissonance::Extensions::IEnumerableExtensions__ConcatUnsafe_d__1_1);
DEFINE_IL2CPP_CLASS(::Dissonance::Extensions::IEnumerableExtensions*, "Dissonance.Extensions", "IEnumerableExtensions");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Extensions::IEnumerableExtensions__ConcatUnsafe_d__1_1, "Dissonance.Extensions", "IEnumerableExtensions/<ConcatUnsafe>d__1`1");
// Dependencies System.Object
namespace Dissonance::Extensions {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Dissonance.Extensions.IEnumerableExtensions/<ConcatUnsafe>d__1`1<T>
class CORDL_TYPE IEnumerableExtensions__ConcatUnsafe_d__1_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current)) T  System_Collections_Generic_IEnumerator_T__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) T  __2__current;

/// @brief Field <>3__enumerable, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__enumerable, put=__cordl_internal_set___3__enumerable)) ::System::Collections::Generic::IEnumerable_1<T>*  __3__enumerable;

/// @brief Field <>3__tail, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__tail, put=__cordl_internal_set___3__tail)) T  __3__tail;

/// @brief Field <>7__wrap1, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<T>*  __7__wrap1;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field enumerable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerable, put=__cordl_internal_set_enumerable)) ::System::Collections::Generic::IEnumerable_1<T>*  enumerable;

/// @brief Field tail, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_tail, put=__cordl_internal_set_tail)) T  tail;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Dissonance::Extensions::IEnumerableExtensions__ConcatUnsafe_d__1_1<T>* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr T const& __cordl_internal_get___2__current() const;

constexpr T& __cordl_internal_get___2__current() ;

constexpr ::System::Collections::Generic::IEnumerable_1<T>* const& __cordl_internal_get___3__enumerable() const;

constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __cordl_internal_get___3__enumerable() ;

constexpr T const& __cordl_internal_get___3__tail() const;

constexpr T& __cordl_internal_get___3__tail() ;

constexpr ::System::Collections::Generic::IEnumerator_1<T>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<T>*& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Collections::Generic::IEnumerable_1<T>* const& __cordl_internal_get_enumerable() const;

constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __cordl_internal_get_enumerable() ;

constexpr T const& __cordl_internal_get_tail() const;

constexpr T& __cordl_internal_get_tail() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(T  value) ;

constexpr void __cordl_internal_set___3__enumerable(::System::Collections::Generic::IEnumerable_1<T>*  value) ;

constexpr void __cordl_internal_set___3__tail(T  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<T>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_enumerable(::System::Collections::Generic::IEnumerable_1<T>*  value) ;

constexpr void __cordl_internal_set_tail(T  value) ;

/// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IEnumerableExtensions__ConcatUnsafe_d__1_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IEnumerableExtensions__ConcatUnsafe_d__1_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IEnumerableExtensions__ConcatUnsafe_d__1_1(IEnumerableExtensions__ConcatUnsafe_d__1_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IEnumerableExtensions__ConcatUnsafe_d__1_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEnumerableExtensions__ConcatUnsafe_d__1_1(IEnumerableExtensions__ConcatUnsafe_d__1_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16930};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 T  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field enumerable, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<T>*  ___enumerable;

/// @brief Field <>3__enumerable, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<T>*  _____3__enumerable;

/// @brief Field tail, offset: 0x38, size: 0x8, def value: None
 T  ___tail;

/// @brief Field <>3__tail, offset: 0x40, size: 0x8, def value: None
 T  _____3__tail;

/// @brief Field <>7__wrap1, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<T>*  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Extensions
// Dependencies System.Object
namespace Dissonance::Extensions {
// Is value type: false
// CS Name: Dissonance.Extensions.IEnumerableExtensions
class CORDL_TYPE IEnumerableExtensions : public ::System::Object {
public:
// Declarations
template<typename T>
using _ConcatUnsafe_d__1_1 = ::Dissonance::Extensions::IEnumerableExtensions__ConcatUnsafe_d__1_1<T>;

/// @brief Method Concat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* Concat(::System::Collections::Generic::IEnumerable_1<T>*  enumerable, T  tail) ;

/// @brief Method ConcatUnsafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* ConcatUnsafe(::System::Collections::Generic::IEnumerable_1<T>*  enumerable, T  tail) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IEnumerableExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IEnumerableExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IEnumerableExtensions(IEnumerableExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IEnumerableExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEnumerableExtensions(IEnumerableExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16931};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Extensions::IEnumerableExtensions) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Extensions
