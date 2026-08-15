#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsBufferDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsBufferDescriptor)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct GraphicsBuffer_Target;
}
namespace UnityEngine {
struct GraphicsBuffer_UsageFlags;
}
// Forward declare root types
namespace MA::Flora {
struct GraphicsBufferDescriptor;
}
// Write type traits
MARK_VAL_T(::MA::Flora::GraphicsBufferDescriptor);
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferDescriptor, "MA.Flora", "GraphicsBufferDescriptor");
// Dependencies UnityEngine.GraphicsBuffer::Target, UnityEngine.GraphicsBuffer::UsageFlags
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.GraphicsBufferDescriptor
struct CORDL_TYPE GraphicsBufferDescriptor {
public:
// Declarations
 __declspec(property(get=get_SizeInBytes)) int64_t  SizeInBytes;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::GraphicsBufferDescriptor>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::GraphicsBufferDescriptor>*() ;

/// @brief Method Equals, addr 0x1814fa350, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x180646e60, size 0xa170, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::GraphicsBufferDescriptor  other) ;

/// @brief Method GetHashCode, addr 0x1814fa3e0, size 0x100, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1814fa4e0, size 0x110, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180785660, size 0x293b0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GraphicsBuffer_Target  target, ::UnityEngine::GraphicsBuffer_UsageFlags  usageFlags, int32_t  stride, int32_t  length) ;

/// @brief Method get_SizeInBytes, addr 0x1814fa5f0, size 0x20, virtual false, abstract: false, final false
inline int64_t get_SizeInBytes() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::GraphicsBufferDescriptor>"
constexpr ::System::IEquatable_1<::MA::Flora::GraphicsBufferDescriptor>* i___System__IEquatable_1___MA__Flora__GraphicsBufferDescriptor_() ;

/// @brief Method op_Equality, addr 0x180645b60, size 0x40, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::GraphicsBufferDescriptor  lhs, ::MA::Flora::GraphicsBufferDescriptor  rhs) ;

/// @brief Method op_Inequality, addr 0x18149c1a0, size 0x40, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::GraphicsBufferDescriptor  lhs, ::MA::Flora::GraphicsBufferDescriptor  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferDescriptor() ;

// Ctor Parameters [CppParam { name: "Target", ty: "::UnityEngine::GraphicsBuffer_Target", modifiers: "", def_value: None }, CppParam { name: "UsageFlags", ty: "::UnityEngine::GraphicsBuffer_UsageFlags", modifiers: "", def_value: None }, CppParam { name: "Stride", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GraphicsBufferDescriptor(::UnityEngine::GraphicsBuffer_Target  Target, ::UnityEngine::GraphicsBuffer_UsageFlags  UsageFlags, int32_t  Stride, int32_t  Length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13326};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Target, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::GraphicsBuffer_Target  Target;

/// @brief Field UsageFlags, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::GraphicsBuffer_UsageFlags  UsageFlags;

/// @brief Field Stride, offset: 0x8, size: 0x4, def value: None
 int32_t  Stride;

/// @brief Field Length, offset: 0xc, size: 0x4, def value: None
 int32_t  Length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::GraphicsBufferDescriptor, Target) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferDescriptor, UsageFlags) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferDescriptor, Stride) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsBufferDescriptor, Length) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::GraphicsBufferDescriptor) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
