#pragma once
// IWYU pragma private; include "MA/Flora/NativeBuffer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeBuffer_1)
namespace MA::Flora {
struct NativeBufferHeader;
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
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1_Enumerator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
// Forward declare root types
namespace MA::Flora {
template<typename T>
struct NativeBuffer_1;
}
// Write type traits
MARK_GEN_VAL_T(::MA::Flora::NativeBuffer_1);
DEFINE_IL2CPP_GEN_CLASS(::MA::Flora::NativeBuffer_1, "MA.Flora", "NativeBuffer`1");
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace MA::Flora {
// cpp template
template<typename T>
// Is value type: true
// CS Name: MA.Flora.NativeBuffer`1<T>
struct CORDL_TYPE NativeBuffer_1 {
public:
// Declarations
 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Add(T  elem) ;

/// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddRange(::Unity::Collections::NativeArray_1<T>  newElems) ;

/// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddRange(T*  newElems, int32_t  length) ;

/// @brief Method AsArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<T> AsArray() ;

/// @brief Method AsReadOnlySpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<T> AsReadOnlySpan() ;

/// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Span_1<T> AsSpan() ;

/// @brief Method AssertReinterpretSizesMatch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U>
static inline void AssertReinterpretSizesMatch() ;

/// @brief Method CheckBounds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CheckBounds(int32_t  index) ;

/// @brief Method CheckReadAccess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CheckReadAccess() ;

/// @brief Method CheckWriteAccess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CheckWriteAccess() ;

/// @brief Method CheckWriteAccessAndInvalidateArrayAliases, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CheckWriteAccessAndInvalidateArrayAliases() ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyFrom(::ArrayW<T>  v) ;

/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyFrom(::MA::Flora::NativeBuffer_1<T>  v) ;

/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<T>  v) ;

/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyFrom(::Unity::Collections::NativeSlice_1<T>  v) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyTo(::by_ref<::ArrayW<T>>  array) ;

/// @brief Method ElementAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> ElementAt(int32_t  index) ;

/// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void EnsureCapacity(int32_t  length) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1_Enumerator<T> GetEnumerator() ;

/// @brief Method GetSubArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<T> GetSubArray(int32_t  index, int32_t  count) ;

/// @brief Method GetUnsafePtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T* GetUnsafePtr() ;

/// @brief Method GetUnsafeReadOnlyPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T* GetUnsafeReadOnlyPtr() ;

/// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Insert(int32_t  index, T  elem) ;

/// @brief Method Reinterpret, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U>
inline ::MA::Flora::NativeBuffer_1<U> Reinterpret() ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveAtSwapBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveAtSwapBack(int32_t  index) ;

/// @brief Method RemoveRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveRange(int32_t  index, int32_t  count) ;

/// @brief Method RemoveRangeSwapBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveRangeSwapBack(int32_t  index, int32_t  count) ;

/// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Resize(int32_t  length, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method ResizeUninitialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ResizeUninitialized(int32_t  length) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<T> ToArray(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method TrimExcess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void TrimExcess() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::NativeBufferHeader*  header, int32_t  internalCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Method set_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeBuffer_1() ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::MA::Flora::NativeBufferHeader*", modifiers: "", def_value: None }, CppParam { name: "m_InternalCapacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }]
constexpr NativeBuffer_1(::MA::Flora::NativeBufferHeader*  m_Buffer, int32_t  m_InternalCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  m_Allocator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12874};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::NativeBufferHeader*  m_Buffer;

/// @brief Field m_InternalCapacity, offset: 0x8, size: 0x4, def value: None
 int32_t  m_InternalCapacity;

/// @brief Field m_Allocator, offset: 0xc, size: 0x4, def value: None
 ::Unity::Collections::AllocatorManager_AllocatorHandle  m_Allocator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def MA::Flora
