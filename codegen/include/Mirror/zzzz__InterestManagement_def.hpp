#pragma once
// IWYU pragma private; include "Mirror/InterestManagement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__InterestManagementBase_def.hpp"
CORDL_MODULE_EXPORT(InterestManagement)
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkIdentity;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace Mirror {
class InterestManagement;
}
// Write type traits
MARK_REF_T(::Mirror::InterestManagement*);
DEFINE_IL2CPP_CLASS(::Mirror::InterestManagement*, "Mirror", "InterestManagement");
// Dependencies Mirror.InterestManagementBase
namespace Mirror {
// Is value type: false
// CS Name: Mirror.InterestManagement
class CORDL_TYPE InterestManagement : public ::Mirror::InterestManagementBase {
public:
// Declarations
/// @brief Field newObservers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_newObservers, put=__cordl_internal_set_newObservers)) ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  newObservers;

static inline ::Mirror::InterestManagement* New_ctor() ;

/// @brief Method OnRebuildObservers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnRebuildObservers(::Mirror::NetworkIdentity*  identity, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  newObservers) ;

/// @brief Method Rebuild, addr 0x181536970, size 0x320, virtual true, abstract: false, final false
inline void Rebuild(::Mirror::NetworkIdentity*  identity, bool  initialize) ;

/// @brief Method RebuildAll, addr 0x181536810, size 0x160, virtual false, abstract: false, final false
inline void RebuildAll() ;

constexpr ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>* const& __cordl_internal_get_newObservers() const;

constexpr ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*& __cordl_internal_get_newObservers() ;

constexpr void __cordl_internal_set_newObservers(::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  value) ;

/// @brief Method .ctor, addr 0x181536c90, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InterestManagement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InterestManagement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InterestManagement(InterestManagement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InterestManagement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InterestManagement(InterestManagement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18273};

/// @brief Field newObservers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  ___newObservers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::InterestManagement, ___newObservers) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mirror::InterestManagement) == 0x28, "Size mismatch!");

} // namespace end def Mirror
