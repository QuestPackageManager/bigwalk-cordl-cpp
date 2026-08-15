#pragma once
// IWYU pragma private; include "MA/Flora/ConstantBufferArrayRef_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__GraphicsBufferRef_def.hpp"
#include "Unity/Collections/zzzz__FixedString64Bytes_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConstantBufferArrayRef_1)
namespace MA::Flora {
struct GraphicsBufferRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace MA::Flora {
template<typename T>
struct ConstantBufferArrayRef_1;
}
// Write type traits
MARK_GEN_VAL_T(::MA::Flora::ConstantBufferArrayRef_1);
DEFINE_IL2CPP_GEN_CLASS(::MA::Flora::ConstantBufferArrayRef_1, "MA.Flora", "ConstantBufferArrayRef`1");
// Dependencies MA.Flora.GraphicsBufferRef, Unity.Collections.FixedString64Bytes, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// cpp template
template<typename T>
// Is value type: true
// CS Name: MA.Flora.ConstantBufferArrayRef`1<T>
struct CORDL_TYPE ConstantBufferArrayRef_1 {
public:
// Declarations
 __declspec(property(get=get_Buffer)) ::MA::Flora::GraphicsBufferRef  Buffer;

 __declspec(property(get=get_BufferStride)) int32_t  BufferStride;

 __declspec(property(get=get_Data)) ::Unity::Collections::NativeArray_1<T>  Data;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_SupportsConstantBufferAlignment)) bool  SupportsConstantBufferAlignment;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Bind(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  cs, int32_t  nameID, int32_t  index) ;

/// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Bind(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  nameID, int32_t  index) ;

/// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Bind(::UnityEngine::ComputeShader*  cs, int32_t  nameID, int32_t  index) ;

/// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Bind(::UnityEngine::Material*  mat, int32_t  nameID, int32_t  index) ;

/// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Bind(::UnityEngine::MaterialPropertyBlock*  mpb, int32_t  nameID, int32_t  index) ;

/// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Bind(int32_t  nameID, int32_t  index) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Resize(int32_t  count) ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UpdateData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateData() ;

/// @brief Method UpdateData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateData(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method UpdateData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateData(int32_t  index) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  count, ::StringW  name) ;

/// @brief Method get_Buffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::MA::Flora::GraphicsBufferRef get_Buffer() ;

/// @brief Method get_BufferStride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_BufferStride() ;

/// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<T> get_Data() ;

/// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_SupportsConstantBufferAlignment, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_SupportsConstantBufferAlignment() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::MA::Flora::GraphicsBufferRef op_Implicit___MA__Flora__GraphicsBufferRef(::MA::Flora::ConstantBufferArrayRef_1<T>  constantBuffer) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::UnityEngine::GraphicsBuffer* op_Implicit___UnityEngine__GraphicsBuffer_(::MA::Flora::ConstantBufferArrayRef_1<T>  constantBuffer) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ConstantBufferArrayRef_1() ;

// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: None }, CppParam { name: "m_AlignedData", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_Buffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty: "::Unity::Collections::FixedString64Bytes", modifiers: "", def_value: None }, CppParam { name: "m_BufferArray", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsBufferRef>", modifiers: "", def_value: None }, CppParam { name: "m_SizeInBuffer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ConstantBufferOffsetAlignment", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConstantBufferArrayRef_1(::Unity::Collections::NativeArray_1<T>  m_Data, ::Unity::Collections::NativeArray_1<uint8_t>  m_AlignedData, ::MA::Flora::GraphicsBufferRef  m_Buffer, ::Unity::Collections::FixedString64Bytes  m_Name, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsBufferRef>  m_BufferArray, int32_t  m_SizeInBuffer, int32_t  m_ConstantBufferOffsetAlignment) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13322};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field m_Data, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<T>  m_Data;

/// @brief Field m_AlignedData, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  m_AlignedData;

/// @brief Field m_Buffer, offset: 0x20, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  m_Buffer;

/// @brief Field m_Name, offset: 0x24, size: 0x40, def value: None
 ::Unity::Collections::FixedString64Bytes  m_Name;

/// @brief Field m_BufferArray, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsBufferRef>  m_BufferArray;

/// @brief Field m_SizeInBuffer, offset: 0x78, size: 0x4, def value: None
 int32_t  m_SizeInBuffer;

/// @brief Field m_ConstantBufferOffsetAlignment, offset: 0x7c, size: 0x4, def value: None
 int32_t  m_ConstantBufferOffsetAlignment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def MA::Flora
