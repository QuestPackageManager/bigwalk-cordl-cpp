#pragma once
// IWYU pragma private; include "MA/Flora/ConstantBufferRef_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__GraphicsBufferRef_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConstantBufferRef_1)
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
class GraphicsBuffer;
}
// Forward declare root types
namespace MA::Flora {
template<typename T>
struct ConstantBufferRef_1;
}
// Write type traits
MARK_GEN_VAL_T(::MA::Flora::ConstantBufferRef_1);
DEFINE_IL2CPP_GEN_CLASS(::MA::Flora::ConstantBufferRef_1, "MA.Flora", "ConstantBufferRef`1");
// Dependencies MA.Flora.GraphicsBufferRef, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// cpp template
template<typename T>
// Is value type: true
// CS Name: MA.Flora.ConstantBufferRef`1<T>
struct CORDL_TYPE ConstantBufferRef_1 {
public:
// Declarations
 __declspec(property(get=get_Buffer)) ::MA::Flora::GraphicsBufferRef  Buffer;

 __declspec(property(get=get_Data)) ::Unity::Collections::NativeArray_1<T>  Data;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_Stride)) int32_t  Stride;

 __declspec(property(get=get_Value, put=set_Value)) T  Value;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Bind(int32_t  nameID) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method UpdateData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateData() ;

/// @brief Method UpdateData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateData(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method UpdateData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateData(::UnityEngine::Rendering::CommandBuffer*  cmd, T  value) ;

/// @brief Method UpdateData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateData(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method get_Buffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::MA::Flora::GraphicsBufferRef get_Buffer() ;

/// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<T> get_Data() ;

/// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_Stride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Stride() ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Value() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T op_Implicit_T(::MA::Flora::ConstantBufferRef_1<T>  constantBuffer) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::MA::Flora::GraphicsBufferRef op_Implicit___MA__Flora__GraphicsBufferRef(::MA::Flora::ConstantBufferRef_1<T>  constantBuffer) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::UnityEngine::GraphicsBuffer* op_Implicit___UnityEngine__GraphicsBuffer_(::MA::Flora::ConstantBufferRef_1<T>  constantBuffer) ;

/// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Value(T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ConstantBufferRef_1() ;

// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: None }, CppParam { name: "m_Buffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: None }]
constexpr ConstantBufferRef_1(::Unity::Collections::NativeArray_1<T>  m_Data, ::MA::Flora::GraphicsBufferRef  m_Buffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13324};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Data, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<T>  m_Data;

/// @brief Field m_Buffer, offset: 0x10, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  m_Buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def MA::Flora
