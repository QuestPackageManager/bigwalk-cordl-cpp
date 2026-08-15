#pragma once
// IWYU pragma private; include "MA/Flora/CellBucketKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__ArchetypeIndex_def.hpp"
#include "MA/Flora/zzzz__CellIndex_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CellBucketKey)
namespace MA::Flora {
struct ArchetypeIndex;
}
namespace MA::Flora {
struct CellIndex;
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
struct CellBucketKey;
}
// Write type traits
MARK_VAL_T(::MA::Flora::CellBucketKey);
DEFINE_IL2CPP_CLASS(::MA::Flora::CellBucketKey, "MA.Flora", "CellBucketKey");
// Dependencies MA.Flora.ArchetypeIndex, MA.Flora.CellIndex
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CellBucketKey
struct CORDL_TYPE CellBucketKey {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::CellBucketKey>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::CellBucketKey>*() ;

/// @brief Method Equals, addr 0x18149c600, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x18149c5c0, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::CellBucketKey  other) ;

/// @brief Method GetHashCode, addr 0x180e0c2e0, size 0x250, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x18149c690, size 0xa0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1804a47e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::ArchetypeIndex  archetype, ::MA::Flora::CellIndex  cell) ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::CellBucketKey>"
constexpr ::System::IEquatable_1<::MA::Flora::CellBucketKey>* i___System__IEquatable_1___MA__Flora__CellBucketKey_() ;

// Ctor Parameters []
// @brief default ctor
constexpr CellBucketKey() ;

// Ctor Parameters [CppParam { name: "Archetype", ty: "::MA::Flora::ArchetypeIndex", modifiers: "", def_value: None }, CppParam { name: "Cell", ty: "::MA::Flora::CellIndex", modifiers: "", def_value: None }]
constexpr CellBucketKey(::MA::Flora::ArchetypeIndex  Archetype, ::MA::Flora::CellIndex  Cell) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13104};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Archetype, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::ArchetypeIndex  Archetype;

/// @brief Field Cell, offset: 0x4, size: 0x4, def value: None
 ::MA::Flora::CellIndex  Cell;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CellBucketKey, Archetype) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CellBucketKey, Cell) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CellBucketKey) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
