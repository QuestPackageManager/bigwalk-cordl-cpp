#pragma once
// IWYU pragma private; include "Mirror/InterestManagementBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InterestManagementBase)
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkIdentity;
}
// Forward declare root types
namespace Mirror {
class InterestManagementBase;
}
// Write type traits
MARK_REF_T(::Mirror::InterestManagementBase*);
DEFINE_IL2CPP_CLASS(::Mirror::InterestManagementBase*, "Mirror", "InterestManagementBase");
// Dependencies UnityEngine.MonoBehaviour
namespace Mirror {
// Is value type: false
// CS Name: Mirror.InterestManagementBase
class CORDL_TYPE InterestManagementBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method AddObserver, addr 0x181536500, size 0x80, virtual false, abstract: false, final false
inline void AddObserver(::Mirror::NetworkConnectionToClient*  connection, ::Mirror::NetworkIdentity*  identity) ;

static inline ::Mirror::InterestManagementBase* New_ctor() ;

/// @brief Method OnCheckObserver, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool OnCheckObserver(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnectionToClient*  newObserver) ;

/// @brief Method OnDestroyed, addr 0x181536580, size 0x20, virtual true, abstract: false, final false
inline void OnDestroyed(::Mirror::NetworkIdentity*  identity) ;

/// @brief Method OnEnable, addr 0x1815365a0, size 0x150, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSpawned, addr 0x181536580, size 0x20, virtual true, abstract: false, final false
inline void OnSpawned(::Mirror::NetworkIdentity*  identity) ;

/// @brief Method Rebuild, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Rebuild(::Mirror::NetworkIdentity*  identity, bool  initialize) ;

/// @brief Method RemoveObserver, addr 0x1815366f0, size 0x70, virtual false, abstract: false, final false
inline void RemoveObserver(::Mirror::NetworkConnectionToClient*  connection, ::Mirror::NetworkIdentity*  identity) ;

/// @brief Method Reset, addr 0x181536580, size 0x20, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SetHostVisibility, addr 0x181536760, size 0xb0, virtual true, abstract: false, final false
inline void SetHostVisibility(::Mirror::NetworkIdentity*  identity, bool  visible) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InterestManagementBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InterestManagementBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InterestManagementBase(InterestManagementBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InterestManagementBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InterestManagementBase(InterestManagementBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18274};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::InterestManagementBase) == 0x20, "Size mismatch!");

} // namespace end def Mirror
