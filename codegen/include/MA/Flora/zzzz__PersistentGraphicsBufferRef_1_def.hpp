#pragma once
// IWYU pragma private; include "MA/Flora/PersistentGraphicsBufferRef_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__GraphicsBufferRef_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PersistentGraphicsBufferRef_1)
namespace MA::Flora {
struct GraphicsBufferGrowPolicy;
}
namespace MA::Flora {
struct GraphicsBufferRef;
}
namespace MA::Flora {
struct GraphicsBufferTrimPolicy;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct GraphicsBuffer_Target;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace MA::Flora {
template<typename T>
struct PersistentGraphicsBufferRef_1;
}
// Write type traits
MARK_GEN_VAL_T(::MA::Flora::PersistentGraphicsBufferRef_1);
DEFINE_IL2CPP_GEN_CLASS(::MA::Flora::PersistentGraphicsBufferRef_1, "MA.Flora", "PersistentGraphicsBufferRef`1");
// Dependencies MA.Flora.GraphicsBufferRef, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// cpp template
template<typename T>
// Is value type: true
// CS Name: MA.Flora.PersistentGraphicsBufferRef`1<T>
struct CORDL_TYPE PersistentGraphicsBufferRef_1 {
public:
// Declarations
 __declspec(property(get=get_Buffer)) ::MA::Flora::GraphicsBufferRef  Buffer;

 __declspec(property(get=get_Data)) ::Unity::Collections::NativeArray_1<T>  Data;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_SizeInBytes)) int64_t  SizeInBytes;

 __declspec(property(get=get_Stride)) int32_t  Stride;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method CheckCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CheckCreated() ;

/// @brief Method CheckLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CheckLength(int32_t  length) ;

/// @brief Method CheckRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CheckRange(int32_t  startIndex, int32_t  count) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Resize(int32_t  newLength) ;

/// @brief Method ResizeIfNeeded, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ResizeIfNeeded(int32_t  requiredLength, ::MA::Flora::GraphicsBufferGrowPolicy  growPolicy, ::MA::Flora::GraphicsBufferTrimPolicy  trimPolicy) ;

/// @brief Method UpdateBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateBufferData() ;

/// @brief Method UpdateBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateBufferData(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method UpdateBufferRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateBufferRange(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  startIndex, int32_t  count) ;

/// @brief Method UpdateBufferRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateBufferRange(int32_t  startIndex, int32_t  count) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  count, ::StringW  name, ::UnityEngine::GraphicsBuffer_Target  target, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method get_Buffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::MA::Flora::GraphicsBufferRef get_Buffer() ;

/// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<T> get_Data() ;

/// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_SizeInBytes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int64_t get_SizeInBytes() ;

/// @brief Method get_Stride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Stride() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::MA::Flora::GraphicsBufferRef op_Implicit___MA__Flora__GraphicsBufferRef(::MA::Flora::PersistentGraphicsBufferRef_1<T>  graphicsBuffer) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::UnityEngine::GraphicsBuffer* op_Implicit___UnityEngine__GraphicsBuffer_(::MA::Flora::PersistentGraphicsBufferRef_1<T>  graphicsBuffer) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PersistentGraphicsBufferRef_1() ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: None }, CppParam { name: "m_Data", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: None }]
constexpr PersistentGraphicsBufferRef_1(::MA::Flora::GraphicsBufferRef  m_Buffer, ::Unity::Collections::NativeArray_1<T>  m_Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13348};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Buffer, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  m_Buffer;

/// @brief Field m_Data, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<T>  m_Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def MA::Flora
