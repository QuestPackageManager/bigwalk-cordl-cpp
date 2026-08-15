#pragma once
// IWYU pragma private; include "Mirror/SyncSortedSet_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__SyncSet_1_def.hpp"
CORDL_MODULE_EXPORT(SyncSortedSet_1)
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
struct SortedSet_1_Enumerator;
}
// Forward declare root types
namespace Mirror {
template<typename T>
class SyncSortedSet_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Mirror::SyncSortedSet_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::SyncSortedSet_1, "Mirror", "SyncSortedSet`1");
// Dependencies Mirror.SyncSet`1<T>
namespace Mirror {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Mirror.SyncSortedSet`1<T>
class CORDL_TYPE SyncSortedSet_1 : public ::Mirror::SyncSet_1<T> {
public:
// Declarations
/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::SortedSet_1_Enumerator<T> GetEnumerator() ;

static inline ::Mirror::SyncSortedSet_1<T>* New_ctor() ;

static inline ::Mirror::SyncSortedSet_1<T>* New_ctor(::System::Collections::Generic::IComparer_1<T>*  comparer) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IComparer_1<T>*  comparer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncSortedSet_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncSortedSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncSortedSet_1(SyncSortedSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncSortedSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncSortedSet_1(SyncSortedSet_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18374};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror
