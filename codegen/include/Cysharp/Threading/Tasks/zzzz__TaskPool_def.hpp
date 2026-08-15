#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/TaskPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TaskPool)
namespace Cysharp::Threading::Tasks {
class TaskPool__GetCacheSizeInfo_d__4;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class TaskPool;
}
namespace Cysharp::Threading::Tasks {
class TaskPool__GetCacheSizeInfo_d__4;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::TaskPool*);
MARK_REF_T(::Cysharp::Threading::Tasks::TaskPool__GetCacheSizeInfo_d__4*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::TaskPool*, "Cysharp.Threading.Tasks", "TaskPool");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::TaskPool__GetCacheSizeInfo_d__4*, "Cysharp.Threading.Tasks", "TaskPool/<GetCacheSizeInfo>d__4");
// Dependencies System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Object, System.ValueTuple`2<T1, T2>
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.TaskPool/<GetCacheSizeInfo>d__4
class CORDL_TYPE TaskPool__GetCacheSizeInfo_d__4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator__System_Type_System_Int32___get_Current)) ::System::ValueTuple_2<::System::Type*,int32_t>  System_Collections_Generic_IEnumerator__System_Type_System_Int32___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::ValueTuple_2<::System::Type*,int32_t>  __2__current;

/// @brief Field <>7__wrap1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_1<int32_t>*>*  __7__wrap1;

/// @brief Field <>7__wrap2, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) bool  __7__wrap2;

/// @brief Field <>7__wrap3, offset 0x40, size 0x28 
 __declspec(property(get=__cordl_internal_get___7__wrap3, put=__cordl_internal_set___7__wrap3)) ::System::Collections::Generic::Dictionary_2_Enumerator<::System::Type*,::System::Func_1<int32_t>*>  __7__wrap3;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::Type*,int32_t>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::Type*,int32_t>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Type*,int32_t>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Type*,int32_t>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181e65290, size 0x280, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::TaskPool__GetCacheSizeInfo_d__4* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerable<(System.Type,System.Int32)>.GetEnumerator, addr 0x181e65510, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Type*,int32_t>>* System_Collections_Generic_IEnumerable__System_Type_System_Int32___GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<(System.Type,System.Int32)>.get_Current, addr 0x1802e2d70, size 0x10, virtual true, abstract: false, final true
inline ::System::ValueTuple_2<::System::Type*,int32_t> System_Collections_Generic_IEnumerator__System_Type_System_Int32___get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181e65510, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181e65580, size 0x30, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181e655b0, size 0xd0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::ValueTuple_2<::System::Type*,int32_t> const& __cordl_internal_get___2__current() const;

constexpr ::System::ValueTuple_2<::System::Type*,int32_t>& __cordl_internal_get___2__current() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_1<int32_t>*>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_1<int32_t>*>*& __cordl_internal_get___7__wrap1() ;

constexpr bool const& __cordl_internal_get___7__wrap2() const;

constexpr bool& __cordl_internal_get___7__wrap2() ;

constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::System::Type*,::System::Func_1<int32_t>*> const& __cordl_internal_get___7__wrap3() const;

constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::System::Type*,::System::Func_1<int32_t>*>& __cordl_internal_get___7__wrap3() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::ValueTuple_2<::System::Type*,int32_t>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_1<int32_t>*>*  value) ;

constexpr void __cordl_internal_set___7__wrap2(bool  value) ;

constexpr void __cordl_internal_set___7__wrap3(::System::Collections::Generic::Dictionary_2_Enumerator<::System::Type*,::System::Func_1<int32_t>*>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// @brief Method <>m__Finally1, addr 0x181e65680, size 0x20, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2, addr 0x181828a00, size 0x10, virtual false, abstract: false, final false
inline void __m__Finally2() ;

/// @brief Method .ctor, addr 0x180d6a3f0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::Type*,int32_t>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::Type*,int32_t>>* i___System__Collections__Generic__IEnumerable_1___System__ValueTuple_2___System__Type__int32_t__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Type*,int32_t>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Type*,int32_t>>* i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_2___System__Type__int32_t__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskPool__GetCacheSizeInfo_d__4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskPool__GetCacheSizeInfo_d__4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskPool__GetCacheSizeInfo_d__4(TaskPool__GetCacheSizeInfo_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskPool__GetCacheSizeInfo_d__4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskPool__GetCacheSizeInfo_d__4(TaskPool__GetCacheSizeInfo_d__4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14264};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::System::ValueTuple_2<::System::Type*,int32_t>  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_1<int32_t>*>*  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x38, size: 0x1, def value: None
 bool  _____7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x40, size: 0x28, def value: None
 ::System::Collections::Generic::Dictionary_2_Enumerator<::System::Type*,::System::Func_1<int32_t>*>  _____7__wrap3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::TaskPool__GetCacheSizeInfo_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TaskPool__GetCacheSizeInfo_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TaskPool__GetCacheSizeInfo_d__4, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TaskPool__GetCacheSizeInfo_d__4, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TaskPool__GetCacheSizeInfo_d__4, _____7__wrap2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TaskPool__GetCacheSizeInfo_d__4, _____7__wrap3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::TaskPool__GetCacheSizeInfo_d__4) == 0x68, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.TaskPool
class CORDL_TYPE TaskPool : public ::System::Object {
public:
// Declarations
using _GetCacheSizeInfo_d__4 = ::Cysharp::Threading::Tasks::TaskPool__GetCacheSizeInfo_d__4;

/// @brief Field MaxPoolSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MaxPoolSize, put=setStaticF_MaxPoolSize)) int32_t  MaxPoolSize;

/// @brief Field sizes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sizes, put=setStaticF_sizes)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_1<int32_t>*>*  sizes;

/// @brief Method GetCacheSizeInfo, addr 0x181e63090, size 0x30, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::Type*,int32_t>>* GetCacheSizeInfo() ;

/// @brief Method RegisterSizeGetter, addr 0x181e630c0, size 0x110, virtual false, abstract: false, final false
static inline void RegisterSizeGetter(::System::Type*  type, ::System::Func_1<int32_t>*  getSize) ;

/// @brief Method SetMaxPoolSize, addr 0x181e631d0, size 0x50, virtual false, abstract: false, final false
static inline void SetMaxPoolSize(int32_t  maxPoolSize) ;

static inline int32_t getStaticF_MaxPoolSize() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_1<int32_t>*>* getStaticF_sizes() ;

static inline void setStaticF_MaxPoolSize(int32_t  value) ;

static inline void setStaticF_sizes(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_1<int32_t>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskPool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskPool(TaskPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskPool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskPool(TaskPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14265};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::TaskPool) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
