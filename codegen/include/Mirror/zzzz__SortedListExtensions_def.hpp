#pragma once
// IWYU pragma private; include "Mirror/SortedListExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortedListExtensions)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class SortedList_2;
}
// Forward declare root types
namespace Mirror {
class SortedListExtensions;
}
// Write type traits
MARK_REF_T(::Mirror::SortedListExtensions*);
DEFINE_IL2CPP_CLASS(::Mirror::SortedListExtensions*, "Mirror", "SortedListExtensions");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.SortedListExtensions
class CORDL_TYPE SortedListExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method RemoveRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline void RemoveRange(::System::Collections::Generic::SortedList_2<T,U>*  list, int32_t  amount) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SortedListExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SortedListExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SortedListExtensions(SortedListExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SortedListExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SortedListExtensions(SortedListExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18353};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SortedListExtensions) == 0x10, "Size mismatch!");

} // namespace end def Mirror
