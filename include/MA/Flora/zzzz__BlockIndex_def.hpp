#pragma once
// IWYU pragma private; include "MA/Flora/BlockIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlockIndex)
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MA::Flora {
struct BlockIndex;
}
// Write type traits
MARK_VAL_T(::MA::Flora::BlockIndex);
DEFINE_IL2CPP_CLASS(::MA::Flora::BlockIndex, "MA.Flora", "BlockIndex");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.BlockIndex
struct CORDL_TYPE BlockIndex {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::BlockIndex>"
constexpr operator  ::System::IComparable_1<::MA::Flora::BlockIndex>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::BlockIndex>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::BlockIndex>*() ;

/// @brief Method CompareTo, addr 0x1805aa020, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::BlockIndex  other) ;

/// @brief Method Equals, addr 0x180673f80, size 0x60, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::BlockIndex  other) ;

/// @brief Method GetHashCode, addr 0x1803474c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x18149afd0, size 0x50, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  index) ;

/// @brief Method get_None, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::BlockIndex get_None() ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::BlockIndex>"
constexpr ::System::IComparable_1<::MA::Flora::BlockIndex>* i___System__IComparable_1___MA__Flora__BlockIndex_() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::BlockIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::BlockIndex>* i___System__IEquatable_1___MA__Flora__BlockIndex_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::BlockIndex  left, ::MA::Flora::BlockIndex  right) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::MA::Flora::BlockIndex  index) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::BlockIndex  left, ::MA::Flora::BlockIndex  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr BlockIndex() ;

// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BlockIndex(int32_t  Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13102};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Index, offset: 0x0, size: 0x4, def value: None
 int32_t  Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::BlockIndex, Index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::BlockIndex) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
