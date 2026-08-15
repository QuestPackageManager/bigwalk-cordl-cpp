#pragma once
// IWYU pragma private; include "GlobalNamespace/SeaShell.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SeaShell)
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PlayerPose;
}
namespace GlobalNamespace {
class PropHome;
}
namespace GlobalNamespace {
struct SeaShell_ShellReference;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace Mirror {
class NetworkIdentity;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SeaShell;
}
namespace GlobalNamespace {
struct SeaShell_ShellReference;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SeaShell*);
MARK_VAL_T(::GlobalNamespace::SeaShell_ShellReference);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SeaShell*, "", "SeaShell");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SeaShell_ShellReference, "", "SeaShell/ShellReference");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SeaShell/ShellReference
struct CORDL_TYPE SeaShell_ShellReference {
public:
// Declarations
 __declspec(property(get=get_isEmpty)) bool  isEmpty;

 __declspec(property(get=get_networkIdentity, put=set_networkIdentity)) ::UnityW<::Mirror::NetworkIdentity>  networkIdentity;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SeaShell_ShellReference>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::SeaShell_ShellReference>*() ;

/// @brief Method Equals, addr 0x18046cb60, size 0xa0, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::SeaShell_ShellReference  other) ;

/// @brief Method GetPeckSwitch, addr 0x18046cc00, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PeckSwitch> GetPeckSwitch() ;

/// @brief Method GetPose, addr 0x18046cc20, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayerPose> GetPose() ;

/// @brief Method GetPropHome, addr 0x18046cc40, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PropHome> GetPropHome() ;

/// @brief Method GetShell, addr 0x18046cc60, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SeaShell> GetShell() ;

/// @brief Method GetTicketed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetTicketed() ;

/// @brief Method .ctor, addr 0x18046ccf0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(uint16_t  ticket) ;

/// @brief Method get_isEmpty, addr 0x18046cd10, size 0x40, virtual false, abstract: false, final false
inline bool get_isEmpty() ;

/// @brief Method get_networkIdentity, addr 0x18046cd50, size 0x100, virtual false, abstract: false, final false
inline ::UnityW<::Mirror::NetworkIdentity> get_networkIdentity() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::SeaShell_ShellReference>"
constexpr ::System::IEquatable_1<::GlobalNamespace::SeaShell_ShellReference>* i___System__IEquatable_1___GlobalNamespace__SeaShell_ShellReference_() ;

/// @brief Method set_networkIdentity, addr 0x18046ce50, size 0x50, virtual false, abstract: false, final false
inline void set_networkIdentity(::Mirror::NetworkIdentity*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SeaShell_ShellReference() ;

// Ctor Parameters [CppParam { name: "ticket", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "netId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SeaShell_ShellReference(uint16_t  ticket, uint32_t  netId, int32_t  index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5432};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field ticket, offset: 0x0, size: 0x2, def value: None
 uint16_t  ticket;

/// @brief Field netId, offset: 0x4, size: 0x4, def value: None
 uint32_t  netId;

/// @brief Field index, offset: 0x8, size: 0x4, def value: None
 int32_t  index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SeaShell_ShellReference, ticket) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeaShell_ShellReference, netId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeaShell_ShellReference, index) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SeaShell_ShellReference) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Mirror.NetworkBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SeaShell
class CORDL_TYPE SeaShell : public ::Mirror::NetworkBehaviour {
public:
// Declarations
using ShellReference = ::GlobalNamespace::SeaShell_ShellReference;

/// @brief Field initialized, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field logVerbose, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_logVerbose, put=setStaticF_logVerbose)) bool  logVerbose;

/// @brief Field networkIdentity, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkIdentity, put=__cordl_internal_set_networkIdentity)) ::UnityW<::Mirror::NetworkIdentity>  networkIdentity;

/// @brief Field peckSwitches, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_peckSwitches, put=__cordl_internal_set_peckSwitches)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSwitch>>*  peckSwitches;

/// @brief Field poses, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_poses, put=__cordl_internal_set_poses)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerPose>>*  poses;

/// @brief Field propHomes, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_propHomes, put=__cordl_internal_set_propHomes)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*  propHomes;

/// @brief Field trackedPeckStates, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackedPeckStates, put=__cordl_internal_set_trackedPeckStates)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TrackedPeckState>>*  trackedPeckStates;

/// @brief Method CreateShellReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::GlobalNamespace::SeaShell_ShellReference CreateShellReference(T  component) ;

/// @brief Method GetCollection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::System::Collections::Generic::List_1<T>* GetCollection() ;

/// @brief Method Initialize, addr 0x18046c6d0, size 0x480, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::SeaShell* New_ctor() ;

/// @brief Method OnStartClient, addr 0x18046cb50, size 0x10, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartServer, addr 0x18046cb50, size 0x10, virtual true, abstract: false, final false
inline void OnStartServer() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::UnityW<::Mirror::NetworkIdentity> const& __cordl_internal_get_networkIdentity() const;

constexpr ::UnityW<::Mirror::NetworkIdentity>& __cordl_internal_get_networkIdentity() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSwitch>>* const& __cordl_internal_get_peckSwitches() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSwitch>>*& __cordl_internal_get_peckSwitches() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerPose>>* const& __cordl_internal_get_poses() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerPose>>*& __cordl_internal_get_poses() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>* const& __cordl_internal_get_propHomes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*& __cordl_internal_get_propHomes() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TrackedPeckState>>* const& __cordl_internal_get_trackedPeckStates() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TrackedPeckState>>*& __cordl_internal_get_trackedPeckStates() ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_networkIdentity(::UnityW<::Mirror::NetworkIdentity>  value) ;

constexpr void __cordl_internal_set_peckSwitches(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSwitch>>*  value) ;

constexpr void __cordl_internal_set_poses(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerPose>>*  value) ;

constexpr void __cordl_internal_set_propHomes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*  value) ;

constexpr void __cordl_internal_set_trackedPeckStates(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TrackedPeckState>>*  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_logVerbose() ;

static inline void setStaticF_logVerbose(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SeaShell() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SeaShell", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SeaShell(SeaShell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SeaShell", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SeaShell(SeaShell const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5433};

/// @brief Field poses, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerPose>>*  ___poses;

/// @brief Field peckSwitches, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSwitch>>*  ___peckSwitches;

/// @brief Field propHomes, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*  ___propHomes;

/// @brief Field trackedPeckStates, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TrackedPeckState>>*  ___trackedPeckStates;

/// @brief Field networkIdentity, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkIdentity>  ___networkIdentity;

/// @brief Field initialized, offset: 0x90, size: 0x1, def value: None
 bool  ___initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SeaShell, ___poses) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeaShell, ___peckSwitches) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeaShell, ___propHomes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeaShell, ___trackedPeckStates) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeaShell, ___networkIdentity) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeaShell, ___initialized) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SeaShell) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
