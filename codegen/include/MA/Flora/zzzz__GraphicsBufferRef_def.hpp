#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsBufferRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsBufferRef)
namespace MA::Flora {
struct GraphicsBufferDescriptor;
}
namespace MA::Flora {
struct GraphicsBufferGrowPolicy;
}
namespace MA::Flora {
struct GraphicsBufferTrimPolicy;
}
namespace System {
class Array;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct FixedString64Bytes;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine {
struct GraphicsBufferHandle;
}
namespace UnityEngine {
struct GraphicsBuffer_Target;
}
namespace UnityEngine {
struct GraphicsBuffer_UsageFlags;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace MA::Flora {
struct GraphicsBufferRef;
}
// Write type traits
MARK_VAL_T(::MA::Flora::GraphicsBufferRef);
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferRef, "MA.Flora", "GraphicsBufferRef");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.GraphicsBufferRef
struct CORDL_TYPE GraphicsBufferRef {
public:
// Declarations
 __declspec(property(get=get_BufferHandle)) ::UnityEngine::GraphicsBufferHandle  BufferHandle;

 __declspec(property(get=get_DebugName, put=set_DebugName)) ::StringW  DebugName;

 __declspec(property(get=get_Descriptor)) ::MA::Flora::GraphicsBufferDescriptor  Descriptor;

 __declspec(property(get=get_Exists)) bool  Exists;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Field Null, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::MA::Flora::GraphicsBufferRef  Null;

 __declspec(property(get=get_SizeInBytes)) int64_t  SizeInBytes;

 __declspec(property(get=get_Stride)) int32_t  Stride;

 __declspec(property(get=get_Target)) ::UnityEngine::GraphicsBuffer_Target  Target;

 __declspec(property(get=get_UsageFlags)) ::UnityEngine::GraphicsBuffer_UsageFlags  UsageFlags;

 __declspec(property(get=get_Value)) ::UnityEngine::GraphicsBuffer*  Value;

/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::GraphicsBufferRef>"
constexpr operator  ::System::IComparable_1<::MA::Flora::GraphicsBufferRef>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::GraphicsBufferRef>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::GraphicsBufferRef>*() ;

/// @brief Method CalculateNewGrowthSize, addr 0x1814fa830, size 0x60, virtual false, abstract: false, final false
static inline int32_t CalculateNewGrowthSize(int32_t  currentLength, int32_t  requiredLength, ::MA::Flora::GraphicsBufferGrowPolicy  growPolicy) ;

/// @brief Method CalculateNewSize, addr 0x1814fa890, size 0xb0, virtual false, abstract: false, final false
static inline int32_t CalculateNewSize(int32_t  currentLength, int32_t  requiredLength, ::MA::Flora::GraphicsBufferGrowPolicy  growPolicy, ::MA::Flora::GraphicsBufferTrimPolicy  trimPolicy) ;

/// @brief Method CalculateNewTrimSize, addr 0x1814fa940, size 0x50, virtual false, abstract: false, final false
static inline int32_t CalculateNewTrimSize(int32_t  currentLength, int32_t  requiredLength, ::MA::Flora::GraphicsBufferTrimPolicy  trimPolicy) ;

/// @brief Method CompareTo, addr 0x1805aa020, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::GraphicsBufferRef  other) ;

/// @brief Method Dispose, addr 0x1814fa990, size 0xe0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Equals, addr 0x180646390, size 0x60, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::GraphicsBufferRef  other) ;

/// @brief Method GetHashCode, addr 0x1803474c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GrowIfNeeded, addr 0x1814faa70, size 0x170, virtual false, abstract: false, final false
inline void GrowIfNeeded(int32_t  requiredLength, ::MA::Flora::GraphicsBufferGrowPolicy  growPolicy, bool  keepContents) ;

/// @brief Method IsValid, addr 0x1814fabe0, size 0xc0, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method Lock, addr 0x1814faca0, size 0x70, virtual false, abstract: false, final false
inline void Lock() ;

/// @brief Method LockForWrite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> LockForWrite(int32_t  startIndex, int32_t  length) ;

/// @brief Method RequestData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest RequestData(::by_ref<::Unity::Collections::NativeArray_1<T>>  data) ;

/// @brief Method RequestData, addr 0x1814fad10, size 0xe0, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest RequestData(int64_t  offsetInBytes, int64_t  sizeInBytes) ;

/// @brief Method ResizeAndCopyContents, addr 0x1814faed0, size 0x20, virtual false, abstract: false, final false
inline void ResizeAndCopyContents(int32_t  length) ;

/// @brief Method ResizeAndCopyContentsSOA, addr 0x1814fadf0, size 0xe0, virtual false, abstract: false, final false
inline void ResizeAndCopyContentsSOA(int32_t  arrayCount, int32_t  length) ;

/// @brief Method ResizeAndDiscardContents, addr 0x1814faef0, size 0x20, virtual false, abstract: false, final false
inline void ResizeAndDiscardContents(int32_t  length) ;

/// @brief Method ResizeIfNeeded, addr 0x1814faf10, size 0x1a0, virtual false, abstract: false, final false
inline void ResizeIfNeeded(int32_t  requiredLength, ::MA::Flora::GraphicsBufferGrowPolicy  growPolicy, ::MA::Flora::GraphicsBufferTrimPolicy  trimPolicy, bool  keepContents) ;

/// @brief Method SetData, addr 0x1814fb0b0, size 0xf0, virtual false, abstract: false, final false
inline void SetData(::System::Array*  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetData(::Unity::Collections::NativeArray_1<T>  data) ;

/// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetData(::Unity::Collections::NativeArray_1<T>  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetData(T*  data, int32_t  count) ;

/// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetData(T*  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetData, addr 0x1814fb1a0, size 0xe0, virtual false, abstract: false, final false
inline void SetData(void*  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  stride) ;

/// @brief Method ToString, addr 0x1814fb280, size 0x50, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TrimIfNeeded, addr 0x1814fb2d0, size 0x140, virtual false, abstract: false, final false
inline void TrimIfNeeded(int32_t  requiredLength, ::MA::Flora::GraphicsBufferTrimPolicy  trimPolicy, bool  keepContents) ;

/// @brief Method Unlock, addr 0x1814fb4e0, size 0x70, virtual false, abstract: false, final false
inline void Unlock() ;

/// @brief Method UnlockAfterWrite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void UnlockAfterWrite(int32_t  countWritten) ;

/// @brief Method UnlockBytesAfterWrite, addr 0x1814fb410, size 0xd0, virtual false, abstract: false, final false
inline void UnlockBytesAfterWrite(int32_t  bytesWritten) ;

/// @brief Method .ctor, addr 0x1814fb5b0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::GraphicsBufferDescriptor  descriptor, ::StringW  name) ;

/// @brief Method .ctor, addr 0x1814fb6f0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GraphicsBuffer_Target  target, int32_t  length, int32_t  stride, ::StringW  name) ;

/// @brief Method .ctor, addr 0x1814fb630, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GraphicsBuffer_Target  target, int32_t  length, int32_t  stride, ::by_ref<::Unity::Collections::FixedString64Bytes>  name) ;

/// @brief Method .ctor, addr 0x1814fb550, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GraphicsBuffer_Target  target, ::UnityEngine::GraphicsBuffer_UsageFlags  usageFlags, int32_t  length, int32_t  stride, ::StringW  name) ;

static inline ::MA::Flora::GraphicsBufferRef getStaticF_Null() ;

/// @brief Method get_BufferHandle, addr 0x1814fb750, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBufferHandle get_BufferHandle() ;

/// @brief Method get_DebugName, addr 0x180393520, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_DebugName() ;

/// @brief Method get_Descriptor, addr 0x1814fb7c0, size 0xb0, virtual false, abstract: false, final false
inline ::MA::Flora::GraphicsBufferDescriptor get_Descriptor() ;

/// @brief Method get_Exists, addr 0x1814f5800, size 0x70, virtual false, abstract: false, final false
inline bool get_Exists() ;

/// @brief Method get_IsCreated, addr 0x180785420, size 0x60, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_Length, addr 0x1814fb870, size 0x70, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_SizeInBytes, addr 0x1814fb8e0, size 0xb0, virtual false, abstract: false, final false
inline int64_t get_SizeInBytes() ;

/// @brief Method get_Stride, addr 0x1814f5870, size 0x70, virtual false, abstract: false, final false
inline int32_t get_Stride() ;

/// @brief Method get_Target, addr 0x1814f58e0, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer_Target get_Target() ;

/// @brief Method get_UsageFlags, addr 0x1814f5950, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer_UsageFlags get_UsageFlags() ;

/// @brief Method get_Value, addr 0x180cb54d0, size 0x48f0, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* get_Value() ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::GraphicsBufferRef>"
constexpr ::System::IComparable_1<::MA::Flora::GraphicsBufferRef>* i___System__IComparable_1___MA__Flora__GraphicsBufferRef_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::GraphicsBufferRef>"
constexpr ::System::IEquatable_1<::MA::Flora::GraphicsBufferRef>* i___System__IEquatable_1___MA__Flora__GraphicsBufferRef_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::GraphicsBufferRef  lhs, ::MA::Flora::GraphicsBufferRef  rhs) ;

/// @brief Method op_Implicit, addr 0x1814fb990, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::GraphicsBuffer* op_Implicit___UnityEngine__GraphicsBuffer_(::MA::Flora::GraphicsBufferRef  value) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::GraphicsBufferRef  lhs, ::MA::Flora::GraphicsBufferRef  rhs) ;

static inline void setStaticF_Null(::MA::Flora::GraphicsBufferRef  value) ;

/// @brief Method set_DebugName, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void set_DebugName(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferRef() ;

// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GraphicsBufferRef(int32_t  Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13329};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Index, offset: 0x0, size: 0x4, def value: None
 int32_t  Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::GraphicsBufferRef, Index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::GraphicsBufferRef) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
