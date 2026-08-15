#pragma once
// IWYU pragma private; include "HouseHouse/Scripts/Machines/DoorBouncer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DoorBouncer)
namespace GlobalNamespace {
class IOccasional;
}
namespace GlobalNamespace {
class OccasionalPartner;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PlayerZone;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HouseHouse::Scripts::Machines {
class DoorBouncer;
}
// Write type traits
MARK_REF_T(::HouseHouse::Scripts::Machines::DoorBouncer*);
DEFINE_IL2CPP_CLASS(::HouseHouse::Scripts::Machines::DoorBouncer*, "HouseHouse.Scripts.Machines", "DoorBouncer");
// Dependencies Mirror.NetworkBehaviour, PeckSystemReference
namespace HouseHouse::Scripts::Machines {
// Is value type: false
// CS Name: HouseHouse.Scripts.Machines.DoorBouncer
class CORDL_TYPE DoorBouncer : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Field blacklistZone, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_blacklistZone, put=__cordl_internal_set_blacklistZone)) ::UnityW<::GlobalNamespace::PlayerZone>  blacklistZone;

/// @brief Field bounceCheckSystem, offset 0x68, size 0x28 
 __declspec(property(get=__cordl_internal_get_bounceCheckSystem, put=__cordl_internal_set_bounceCheckSystem)) ::GlobalNamespace::PeckSystemReference  bounceCheckSystem;

/// @brief Field isOnBlacklist, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOnBlacklist, put=__cordl_internal_set_isOnBlacklist)) bool  isOnBlacklist;

/// @brief Field occasionalPartner, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_occasionalPartner, put=__cordl_internal_set_occasionalPartner)) ::UnityW<::GlobalNamespace::OccasionalPartner>  occasionalPartner;

/// @brief Field recordBlacklist, offset 0x90, size 0x28 
 __declspec(property(get=__cordl_internal_get_recordBlacklist, put=__cordl_internal_set_recordBlacklist)) ::GlobalNamespace::PeckSystemReference  recordBlacklist;

/// @brief Field teleportBehind, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleportBehind, put=__cordl_internal_set_teleportBehind)) ::UnityW<::UnityEngine::Transform>  teleportBehind;

/// @brief Field vipArea, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_vipArea, put=__cordl_internal_set_vipArea)) ::UnityW<::GlobalNamespace::PlayerZone>  vipArea;

/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr operator  ::GlobalNamespace::IOccasional*() noexcept;

/// @brief Method Awake, addr 0x1803bfc70, size 0xb0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::HouseHouse::Scripts::Machines::DoorBouncer* New_ctor() ;

/// @brief Method OccasionalUpdate, addr 0x1803bfd20, size 0x100, virtual true, abstract: false, final true
inline void OccasionalUpdate() ;

/// @brief Method OnBounceCheckPeck, addr 0x1803bfe20, size 0x30, virtual false, abstract: false, final false
inline void OnBounceCheckPeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method OnRecordBlacklist, addr 0x1803bfe50, size 0x50, virtual false, abstract: false, final false
inline void OnRecordBlacklist(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& __cordl_internal_get_blacklistZone() const;

constexpr ::UnityW<::GlobalNamespace::PlayerZone>& __cordl_internal_get_blacklistZone() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_bounceCheckSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_bounceCheckSystem() ;

constexpr bool const& __cordl_internal_get_isOnBlacklist() const;

constexpr bool& __cordl_internal_get_isOnBlacklist() ;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& __cordl_internal_get_occasionalPartner() const;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& __cordl_internal_get_occasionalPartner() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_recordBlacklist() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_recordBlacklist() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_teleportBehind() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_teleportBehind() ;

constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& __cordl_internal_get_vipArea() const;

constexpr ::UnityW<::GlobalNamespace::PlayerZone>& __cordl_internal_get_vipArea() ;

constexpr void __cordl_internal_set_blacklistZone(::UnityW<::GlobalNamespace::PlayerZone>  value) ;

constexpr void __cordl_internal_set_bounceCheckSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_isOnBlacklist(bool  value) ;

constexpr void __cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value) ;

constexpr void __cordl_internal_set_recordBlacklist(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_teleportBehind(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_vipArea(::UnityW<::GlobalNamespace::PlayerZone>  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* i___GlobalNamespace__IOccasional() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DoorBouncer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DoorBouncer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DoorBouncer(DoorBouncer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DoorBouncer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DoorBouncer(DoorBouncer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5779};

/// @brief Field bounceCheckSystem, offset: 0x68, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___bounceCheckSystem;

/// @brief Field recordBlacklist, offset: 0x90, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___recordBlacklist;

/// @brief Field vipArea, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerZone>  ___vipArea;

/// @brief Field blacklistZone, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerZone>  ___blacklistZone;

/// @brief Field occasionalPartner, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OccasionalPartner>  ___occasionalPartner;

/// @brief Field isOnBlacklist, offset: 0xd0, size: 0x1, def value: None
 bool  ___isOnBlacklist;

/// @brief Field teleportBehind, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___teleportBehind;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HouseHouse::Scripts::Machines::DoorBouncer, ___bounceCheckSystem) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Scripts::Machines::DoorBouncer, ___recordBlacklist) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Scripts::Machines::DoorBouncer, ___vipArea) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Scripts::Machines::DoorBouncer, ___blacklistZone) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Scripts::Machines::DoorBouncer, ___occasionalPartner) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Scripts::Machines::DoorBouncer, ___isOnBlacklist) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Scripts::Machines::DoorBouncer, ___teleportBehind) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::HouseHouse::Scripts::Machines::DoorBouncer) == 0xe0, "Size mismatch!");

} // namespace end def HouseHouse::Scripts::Machines
