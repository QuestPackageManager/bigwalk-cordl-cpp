#pragma once
// IWYU pragma private; include "UnityEngine/GraphicsBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsBuffer)
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct GraphicsBufferHandle;
}
namespace UnityEngine {
class GraphicsBuffer_BindingsMarshaller;
}
namespace UnityEngine {
struct GraphicsBuffer_IndirectDrawIndexedArgs;
}
namespace UnityEngine {
struct GraphicsBuffer_Target;
}
namespace UnityEngine {
struct GraphicsBuffer_UsageFlags;
}
// Forward declare root types
namespace UnityEngine {
struct GraphicsBuffer_Target;
}
namespace UnityEngine {
struct GraphicsBuffer_UsageFlags;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class GraphicsBuffer_BindingsMarshaller;
}
namespace UnityEngine {
struct GraphicsBuffer_IndirectDrawIndexedArgs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::GraphicsBuffer_Target);
MARK_VAL_T(::UnityEngine::GraphicsBuffer_UsageFlags);
MARK_REF_T(::UnityEngine::GraphicsBuffer*);
MARK_REF_T(::UnityEngine::GraphicsBuffer_BindingsMarshaller*);
MARK_VAL_T(::UnityEngine::GraphicsBuffer_IndirectDrawIndexedArgs);
DEFINE_IL2CPP_CLASS(::UnityEngine::GraphicsBuffer_Target, "UnityEngine", "GraphicsBuffer/Target");
DEFINE_IL2CPP_CLASS(::UnityEngine::GraphicsBuffer_UsageFlags, "UnityEngine", "GraphicsBuffer/UsageFlags");
DEFINE_IL2CPP_CLASS(::UnityEngine::GraphicsBuffer*, "UnityEngine", "GraphicsBuffer");
DEFINE_IL2CPP_CLASS(::UnityEngine::GraphicsBuffer_BindingsMarshaller*, "UnityEngine", "GraphicsBuffer/BindingsMarshaller");
DEFINE_IL2CPP_CLASS(::UnityEngine::GraphicsBuffer_IndirectDrawIndexedArgs, "UnityEngine", "GraphicsBuffer/IndirectDrawIndexedArgs");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.GraphicsBuffer/Target
struct CORDL_TYPE GraphicsBuffer_Target {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GraphicsBuffer_Target_Unwrapped
enum struct __GraphicsBuffer_Target_Unwrapped : int32_t {
__E_Vertex = static_cast<int32_t>(0x1),
__E_Index = static_cast<int32_t>(0x2),
__E_CopySource = static_cast<int32_t>(0x4),
__E_CopyDestination = static_cast<int32_t>(0x8),
__E_Structured = static_cast<int32_t>(0x10),
__E_Raw = static_cast<int32_t>(0x20),
__E_Append = static_cast<int32_t>(0x40),
__E_Counter = static_cast<int32_t>(0x80),
__E_IndirectArguments = static_cast<int32_t>(0x100),
__E_Constant = static_cast<int32_t>(0x200),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GraphicsBuffer_Target_Unwrapped () const noexcept {
return static_cast<__GraphicsBuffer_Target_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBuffer_Target() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GraphicsBuffer_Target(int32_t  value__) noexcept;

/// @brief Field Append value: I32(64)
static ::UnityEngine::GraphicsBuffer_Target const Append;

/// @brief Field Constant value: I32(512)
static ::UnityEngine::GraphicsBuffer_Target const Constant;

/// @brief Field CopyDestination value: I32(8)
static ::UnityEngine::GraphicsBuffer_Target const CopyDestination;

/// @brief Field CopySource value: I32(4)
static ::UnityEngine::GraphicsBuffer_Target const CopySource;

/// @brief Field Counter value: I32(128)
static ::UnityEngine::GraphicsBuffer_Target const Counter;

/// @brief Field Index value: I32(2)
static ::UnityEngine::GraphicsBuffer_Target const Index;

/// @brief Field IndirectArguments value: I32(256)
static ::UnityEngine::GraphicsBuffer_Target const IndirectArguments;

/// @brief Field Raw value: I32(32)
static ::UnityEngine::GraphicsBuffer_Target const Raw;

/// @brief Field Structured value: I32(16)
static ::UnityEngine::GraphicsBuffer_Target const Structured;

/// @brief Field Vertex value: I32(1)
static ::UnityEngine::GraphicsBuffer_Target const Vertex;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10519};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GraphicsBuffer_Target, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::GraphicsBuffer_Target) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.GraphicsBuffer/UsageFlags
struct CORDL_TYPE GraphicsBuffer_UsageFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GraphicsBuffer_UsageFlags_Unwrapped
enum struct __GraphicsBuffer_UsageFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LockBufferForWrite = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GraphicsBuffer_UsageFlags_Unwrapped () const noexcept {
return static_cast<__GraphicsBuffer_UsageFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBuffer_UsageFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GraphicsBuffer_UsageFlags(int32_t  value__) noexcept;

/// @brief Field LockBufferForWrite value: I32(1)
static ::UnityEngine::GraphicsBuffer_UsageFlags const LockBufferForWrite;

/// @brief Field None value: I32(0)
static ::UnityEngine::GraphicsBuffer_UsageFlags const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10520};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GraphicsBuffer_UsageFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::GraphicsBuffer_UsageFlags) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.GraphicsBuffer/IndirectDrawIndexedArgs
struct CORDL_TYPE GraphicsBuffer_IndirectDrawIndexedArgs {
public:
// Declarations
 __declspec(property(put=set_indexCountPerInstance)) uint32_t  indexCountPerInstance;

 __declspec(property(put=set_instanceCount)) uint32_t  instanceCount;

/// @brief Method set_indexCountPerInstance, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_indexCountPerInstance(uint32_t  value) ;

/// @brief Method set_instanceCount, addr 0x1803bda60, size 0x10, virtual false, abstract: false, final false
inline void set_instanceCount(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBuffer_IndirectDrawIndexedArgs() ;

// Ctor Parameters [CppParam { name: "_indexCountPerInstance_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_instanceCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_startIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_baseVertexIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_startInstance_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GraphicsBuffer_IndirectDrawIndexedArgs(uint32_t  _indexCountPerInstance_k__BackingField, uint32_t  _instanceCount_k__BackingField, uint32_t  _startIndex_k__BackingField, uint32_t  _baseVertexIndex_k__BackingField, uint32_t  _startInstance_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10521};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field <indexCountPerInstance>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _indexCountPerInstance_k__BackingField;

/// @brief Field <instanceCount>k__BackingField, offset: 0x4, size: 0x4, def value: None
 uint32_t  _instanceCount_k__BackingField;

/// @brief Field <startIndex>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _startIndex_k__BackingField;

/// @brief Field <baseVertexIndex>k__BackingField, offset: 0xc, size: 0x4, def value: None
 uint32_t  _baseVertexIndex_k__BackingField;

/// @brief Field <startInstance>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  _startInstance_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GraphicsBuffer_IndirectDrawIndexedArgs, _indexCountPerInstance_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GraphicsBuffer_IndirectDrawIndexedArgs, _instanceCount_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GraphicsBuffer_IndirectDrawIndexedArgs, _startIndex_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GraphicsBuffer_IndirectDrawIndexedArgs, _baseVertexIndex_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GraphicsBuffer_IndirectDrawIndexedArgs, _startInstance_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::GraphicsBuffer_IndirectDrawIndexedArgs) == 0x14, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GraphicsBuffer/BindingsMarshaller
class CORDL_TYPE GraphicsBuffer_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToManaged, addr 0x18224cfb0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::GraphicsBuffer* ConvertToManaged(::System::IntPtr  ptr) ;

/// @brief Method ConvertToNative, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::GraphicsBuffer*  graphicsBuffer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBuffer_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBuffer_BindingsMarshaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsBuffer_BindingsMarshaller(GraphicsBuffer_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBuffer_BindingsMarshaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsBuffer_BindingsMarshaller(GraphicsBuffer_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10522};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GraphicsBuffer_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GraphicsBuffer
class CORDL_TYPE GraphicsBuffer : public ::System::Object {
public:
// Declarations
using BindingsMarshaller = ::UnityEngine::GraphicsBuffer_BindingsMarshaller;

using IndirectDrawIndexedArgs = ::UnityEngine::GraphicsBuffer_IndirectDrawIndexedArgs;

using Target = ::UnityEngine::GraphicsBuffer_Target;

using UsageFlags = ::UnityEngine::GraphicsBuffer_UsageFlags;

 __declspec(property(get=get_bufferHandle)) ::UnityEngine::GraphicsBufferHandle  bufferHandle;

 __declspec(property(get=get_count)) int32_t  count;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

 __declspec(property(put=set_name)) ::StringW  name;

 __declspec(property(get=get_stride)) int32_t  stride;

 __declspec(property(get=get_target)) ::UnityEngine::GraphicsBuffer_Target  target;

 __declspec(property(get=get_usageFlags)) ::UnityEngine::GraphicsBuffer_UsageFlags  usageFlags;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method BeginBufferWrite, addr 0x18224e040, size 0x40, virtual false, abstract: false, final false
inline void* BeginBufferWrite(int32_t  offset, int32_t  size) ;

/// @brief Method BeginBufferWrite_Injected, addr 0x18224e030, size 0x10, virtual false, abstract: false, final false
static inline void* BeginBufferWrite_Injected(::System::IntPtr  _unity_self, int32_t  offset, int32_t  size) ;

/// @brief Method DestroyBuffer, addr 0x18224e090, size 0x20, virtual false, abstract: false, final false
static inline void DestroyBuffer(::UnityEngine::GraphicsBuffer*  buf) ;

/// @brief Method DestroyBuffer_Injected, addr 0x18224e080, size 0x10, virtual false, abstract: false, final false
static inline void DestroyBuffer_Injected(::System::IntPtr  buf) ;

/// @brief Method Dispose, addr 0x18224e0b0, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x18224e0f0, size 0x60, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EndBufferWrite, addr 0x18224e160, size 0x30, virtual false, abstract: false, final false
inline void EndBufferWrite(int32_t  bytesWritten) ;

/// @brief Method EndBufferWrite_Injected, addr 0x18224e150, size 0x10, virtual false, abstract: false, final false
static inline void EndBufferWrite_Injected(::System::IntPtr  _unity_self, int32_t  bytesWritten) ;

/// @brief Method Finalize, addr 0x18224e190, size 0x40, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetData, addr 0x18224e1d0, size 0x1c0, virtual false, abstract: false, final false
inline void GetData(::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  computeBufferStartIndex, int32_t  count) ;

/// @brief Method GetUsageFlags, addr 0x18224e3a0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer_UsageFlags GetUsageFlags() ;

/// @brief Method GetUsageFlags_Injected, addr 0x18224e390, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::GraphicsBuffer_UsageFlags GetUsageFlags_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method InitBuffer, addr 0x18224e3d0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr InitBuffer(::UnityEngine::GraphicsBuffer_Target  target, ::UnityEngine::GraphicsBuffer_UsageFlags  usageFlags, int32_t  count, int32_t  stride) ;

/// @brief Method InternalGetData, addr 0x18224e3f0, size 0x50, virtual false, abstract: false, final false
inline void InternalGetData(::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  computeBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalGetData_Injected, addr 0x18224e3e0, size 0x10, virtual false, abstract: false, final false
static inline void InternalGetData_Injected(::System::IntPtr  _unity_self, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  computeBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalInitialization, addr 0x18224e440, size 0x240, virtual false, abstract: false, final false
inline void InternalInitialization(::UnityEngine::GraphicsBuffer_Target  target, ::UnityEngine::GraphicsBuffer_UsageFlags  usageFlags, int32_t  count, int32_t  stride) ;

/// @brief Method InternalSetData, addr 0x18224e690, size 0x50, virtual false, abstract: false, final false
inline void InternalSetData(::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetData_Injected, addr 0x18224e680, size 0x10, virtual false, abstract: false, final false
static inline void InternalSetData_Injected(::System::IntPtr  _unity_self, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetNativeData, addr 0x18224e6f0, size 0x50, virtual false, abstract: false, final false
inline void InternalSetNativeData(::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetNativeData_Injected, addr 0x18224e6e0, size 0x10, virtual false, abstract: false, final false
static inline void InternalSetNativeData_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method IsValid, addr 0x18224e770, size 0x40, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method IsValidBuffer, addr 0x18224e750, size 0x20, virtual false, abstract: false, final false
static inline bool IsValidBuffer(::UnityEngine::GraphicsBuffer*  buf) ;

/// @brief Method IsValidBuffer_Injected, addr 0x18224e740, size 0x10, virtual false, abstract: false, final false
static inline bool IsValidBuffer_Injected(::System::IntPtr  buf) ;

/// @brief Method IsVertexIndexOrCopyOnly, addr 0x18224e7b0, size 0x10, virtual false, abstract: false, final false
static inline bool IsVertexIndexOrCopyOnly(::UnityEngine::GraphicsBuffer_Target  target) ;

/// @brief Method LockBufferForWrite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> LockBufferForWrite(int32_t  bufferStartIndex, int32_t  count) ;

static inline ::UnityEngine::GraphicsBuffer* New_ctor(::System::IntPtr  ptr) ;

static inline ::UnityEngine::GraphicsBuffer* New_ctor(::UnityEngine::GraphicsBuffer_Target  target, int32_t  count, int32_t  stride) ;

static inline ::UnityEngine::GraphicsBuffer* New_ctor(::UnityEngine::GraphicsBuffer_Target  target, ::UnityEngine::GraphicsBuffer_UsageFlags  usageFlags, int32_t  count, int32_t  stride) ;

/// @brief Method Release, addr 0x18224e0b0, size 0x40, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method RequiresCompute, addr 0x18224e7c0, size 0x10, virtual false, abstract: false, final false
static inline bool RequiresCompute(::UnityEngine::GraphicsBuffer_Target  target) ;

/// @brief Method SetData, addr 0x18224e990, size 0x100, virtual false, abstract: false, final false
inline void SetData(::System::Array*  data) ;

/// @brief Method SetData, addr 0x18224e7d0, size 0x1c0, virtual false, abstract: false, final false
inline void SetData(::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetData(::Unity::Collections::NativeArray_1<T>  data) ;

/// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetData(::Unity::Collections::NativeArray_1<T>  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetName, addr 0x18224eaa0, size 0x120, virtual false, abstract: false, final false
inline void SetName(::StringW  name) ;

/// @brief Method SetName_Injected, addr 0x18224ea90, size 0x10, virtual false, abstract: false, final false
static inline void SetName_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method UnlockBufferAfterWrite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void UnlockBufferAfterWrite(int32_t  countWritten) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  ptr) ;

/// @brief Method .ctor, addr 0x18224ebd0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GraphicsBuffer_Target  target, int32_t  count, int32_t  stride) ;

/// @brief Method .ctor, addr 0x18224ebc0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GraphicsBuffer_Target  target, ::UnityEngine::GraphicsBuffer_UsageFlags  usageFlags, int32_t  count, int32_t  stride) ;

/// @brief Method get_bufferHandle, addr 0x18224ec10, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBufferHandle get_bufferHandle() ;

/// @brief Method get_bufferHandle_Injected, addr 0x18224ec00, size 0x10, virtual false, abstract: false, final false
static inline void get_bufferHandle_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::GraphicsBufferHandle>  ret) ;

/// @brief Method get_count, addr 0x18224ec60, size 0x30, virtual false, abstract: false, final false
inline int32_t get_count() ;

/// @brief Method get_count_Injected, addr 0x18224ec50, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_count_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_stride, addr 0x18224eca0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_stride() ;

/// @brief Method get_stride_Injected, addr 0x18224ec90, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_stride_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_target, addr 0x18224ece0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer_Target get_target() ;

/// @brief Method get_target_Injected, addr 0x18224ecd0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::GraphicsBuffer_Target get_target_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_usageFlags, addr 0x18224e3a0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer_UsageFlags get_usageFlags() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_name, addr 0x18224ed10, size 0x10, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsBuffer(GraphicsBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsBuffer(GraphicsBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10523};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GraphicsBuffer, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::GraphicsBuffer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
