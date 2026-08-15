#pragma once
// IWYU pragma private; include "MA/Flora/CellBucketIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CellBucketIndex)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MA::Flora {
struct CellBucketIndex;
}
// Write type traits
MARK_VAL_T(::MA::Flora::CellBucketIndex);
DEFINE_IL2CPP_CLASS(::MA::Flora::CellBucketIndex, "MA.Flora", "CellBucketIndex");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CellBucketIndex
struct CORDL_TYPE CellBucketIndex {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::CellBucketIndex>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::CellBucketIndex>*() ;

/// @brief Method Equals, addr 0x18149c500, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::CellBucketIndex  other) ;

/// @brief Method GetHashCode, addr 0x1803474c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x18149c570, size 0x50, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  index) ;

/// @brief Method get_None, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::CellBucketIndex get_None() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::CellBucketIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::CellBucketIndex>* i___System__IEquatable_1___MA__Flora__CellBucketIndex_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::CellBucketIndex  a, ::MA::Flora::CellBucketIndex  b) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::MA::Flora::CellBucketIndex  x) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::CellBucketIndex  a, ::MA::Flora::CellBucketIndex  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr CellBucketIndex() ;

// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CellBucketIndex(int32_t  Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13105};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Index, offset: 0x0, size: 0x4, def value: None
 int32_t  Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CellBucketIndex, Index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CellBucketIndex) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
