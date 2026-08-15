#pragma once
// IWYU pragma private; include "MA/Flora/DrawBatchIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawBatchIndex)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MA::Flora {
struct DrawBatchIndex;
}
// Write type traits
MARK_VAL_T(::MA::Flora::DrawBatchIndex);
DEFINE_IL2CPP_CLASS(::MA::Flora::DrawBatchIndex, "MA.Flora", "DrawBatchIndex");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DrawBatchIndex
struct CORDL_TYPE DrawBatchIndex {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::DrawBatchIndex>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::DrawBatchIndex>*() ;

/// @brief Method CompareTo, addr 0x1805aa020, size 0x20, virtual false, abstract: false, final false
inline int32_t CompareTo(::MA::Flora::DrawBatchIndex  other) ;

/// @brief Method Equals, addr 0x1814ba3c0, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::DrawBatchIndex  other) ;

/// @brief Method GetHashCode, addr 0x1803474c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1814ba430, size 0x50, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  value) ;

/// @brief Method get_None, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::DrawBatchIndex get_None() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::DrawBatchIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::DrawBatchIndex>* i___System__IEquatable_1___MA__Flora__DrawBatchIndex_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::DrawBatchIndex  left, ::MA::Flora::DrawBatchIndex  right) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::DrawBatchIndex op_Implicit___MA__Flora__DrawBatchIndex(int32_t  id) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::MA::Flora::DrawBatchIndex  index) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::DrawBatchIndex  left, ::MA::Flora::DrawBatchIndex  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr DrawBatchIndex() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DrawBatchIndex(int32_t  m_Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13180};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DrawBatchIndex, m_Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DrawBatchIndex) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
