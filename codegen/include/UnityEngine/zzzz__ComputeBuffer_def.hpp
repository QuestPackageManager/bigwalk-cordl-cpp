#pragma once
// IWYU pragma private; include "UnityEngine/ComputeBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeBuffer)
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
namespace UnityEngine {
struct ComputeBufferMode;
}
namespace UnityEngine {
struct ComputeBufferType;
}
namespace UnityEngine {
class ComputeBuffer_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class ComputeBuffer_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::ComputeBuffer*);
MARK_REF_T(::UnityEngine::ComputeBuffer_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ComputeBuffer*, "UnityEngine", "ComputeBuffer");
DEFINE_IL2CPP_CLASS(::UnityEngine::ComputeBuffer_BindingsMarshaller*, "UnityEngine", "ComputeBuffer/BindingsMarshaller");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ComputeBuffer/BindingsMarshaller
class CORDL_TYPE ComputeBuffer_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::ComputeBuffer*  computeBuffer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComputeBuffer_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComputeBuffer_BindingsMarshaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ComputeBuffer_BindingsMarshaller(ComputeBuffer_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComputeBuffer_BindingsMarshaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComputeBuffer_BindingsMarshaller(ComputeBuffer_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10755};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ComputeBuffer_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ComputeBuffer
class CORDL_TYPE ComputeBuffer : public ::System::Object {
public:
// Declarations
using BindingsMarshaller = ::UnityEngine::ComputeBuffer_BindingsMarshaller;

 __declspec(property(get=get_count)) int32_t  count;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

 __declspec(property(get=get_stride)) int32_t  stride;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method DestroyBuffer, addr 0x18227d4e0, size 0x20, virtual false, abstract: false, final false
static inline void DestroyBuffer(::UnityEngine::ComputeBuffer*  buf) ;

/// @brief Method DestroyBuffer_Injected, addr 0x18227d4d0, size 0x10, virtual false, abstract: false, final false
static inline void DestroyBuffer_Injected(::System::IntPtr  buf) ;

/// @brief Method Dispose, addr 0x18227d500, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x18227d540, size 0x60, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x18227d5a0, size 0x40, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method InitBuffer, addr 0x18227d5e0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr InitBuffer(int32_t  count, int32_t  stride, ::UnityEngine::ComputeBufferType  type, ::UnityEngine::ComputeBufferMode  usage) ;

/// @brief Method InternalSetData, addr 0x18227d600, size 0x30, virtual false, abstract: false, final false
inline void InternalSetData(::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  computeBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetData_Injected, addr 0x18227d5f0, size 0x10, virtual false, abstract: false, final false
static inline void InternalSetData_Injected(::System::IntPtr  _unity_self, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  computeBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetNativeData, addr 0x18227d640, size 0x30, virtual false, abstract: false, final false
inline void InternalSetNativeData(::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  computeBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetNativeData_Injected, addr 0x18227d630, size 0x10, virtual false, abstract: false, final false
static inline void InternalSetNativeData_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  computeBufferStartIndex, int32_t  count, int32_t  elemSize) ;

static inline ::UnityEngine::ComputeBuffer* New_ctor(int32_t  count, int32_t  stride) ;

static inline ::UnityEngine::ComputeBuffer* New_ctor(int32_t  count, int32_t  stride, ::UnityEngine::ComputeBufferType  type) ;

static inline ::UnityEngine::ComputeBuffer* New_ctor(int32_t  count, int32_t  stride, ::UnityEngine::ComputeBufferType  type, ::UnityEngine::ComputeBufferMode  usage, int32_t  stackDepth) ;

/// @brief Method Release, addr 0x18227d500, size 0x40, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method SetData, addr 0x18227d810, size 0xe0, virtual false, abstract: false, final false
inline void SetData(::System::Array*  data) ;

/// @brief Method SetData, addr 0x18227d670, size 0x1a0, virtual false, abstract: false, final false
inline void SetData(::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  computeBufferStartIndex, int32_t  count) ;

/// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetData(::Unity::Collections::NativeArray_1<T>  data) ;

/// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetData(::Unity::Collections::NativeArray_1<T>  data, int32_t  nativeBufferStartIndex, int32_t  computeBufferStartIndex, int32_t  count) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x18227da30, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  count, int32_t  stride) ;

/// @brief Method .ctor, addr 0x18227d8f0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  count, int32_t  stride, ::UnityEngine::ComputeBufferType  type) ;

/// @brief Method .ctor, addr 0x18227d920, size 0x110, virtual false, abstract: false, final false
inline void _ctor(int32_t  count, int32_t  stride, ::UnityEngine::ComputeBufferType  type, ::UnityEngine::ComputeBufferMode  usage, int32_t  stackDepth) ;

/// @brief Method get_count, addr 0x18227da70, size 0x30, virtual false, abstract: false, final false
inline int32_t get_count() ;

/// @brief Method get_count_Injected, addr 0x18227da60, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_count_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_stride, addr 0x18227dab0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_stride() ;

/// @brief Method get_stride_Injected, addr 0x18227daa0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_stride_Injected(::System::IntPtr  _unity_self) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComputeBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComputeBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ComputeBuffer(ComputeBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComputeBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComputeBuffer(ComputeBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10756};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ComputeBuffer, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ComputeBuffer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
