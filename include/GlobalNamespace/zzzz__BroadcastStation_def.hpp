#pragma once
// IWYU pragma private; include "GlobalNamespace/BroadcastStation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BroadcastStation)
namespace GlobalNamespace {
class MusicGroup;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class Prop;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BroadcastStation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BroadcastStation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BroadcastStation*, "", "BroadcastStation");
// Dependencies PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BroadcastStation
class CORDL_TYPE BroadcastStation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field emission, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_emission, put=__cordl_internal_set_emission)) float_t  emission;

/// @brief Field logVerbose, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field musicGroup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_musicGroup, put=__cordl_internal_set_musicGroup)) ::UnityW<::GlobalNamespace::MusicGroup>  musicGroup;

/// @brief Field peckSystemReference, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystemReference, put=__cordl_internal_set_peckSystemReference)) ::GlobalNamespace::PeckSystemReference  peckSystemReference;

/// @brief Field radioPeckSystem, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_radioPeckSystem, put=__cordl_internal_set_radioPeckSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  radioPeckSystem;

/// @brief Field radioProp, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_radioProp, put=__cordl_internal_set_radioProp)) ::UnityW<::GlobalNamespace::Prop>  radioProp;

/// @brief Field tunerGap, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_tunerGap, put=__cordl_internal_set_tunerGap)) float_t  tunerGap;

/// @brief Field tunerTransform, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_tunerTransform, put=__cordl_internal_set_tunerTransform)) ::UnityW<::UnityEngine::Transform>  tunerTransform;

/// @brief Method Awake, addr 0x1803f7c80, size 0x170, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::BroadcastStation* New_ctor() ;

/// @brief Method OnSpawn, addr 0x1803f7df0, size 0xb0, virtual false, abstract: false, final false
inline void OnSpawn(bool  isInventory) ;

/// @brief Method Unlock, addr 0x1803f7ea0, size 0x60, virtual false, abstract: false, final false
inline void Unlock(::GlobalNamespace::PeckContext  peckContext) ;

constexpr float_t const& __cordl_internal_get_emission() const;

constexpr float_t& __cordl_internal_get_emission() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::MusicGroup> const& __cordl_internal_get_musicGroup() const;

constexpr ::UnityW<::GlobalNamespace::MusicGroup>& __cordl_internal_get_musicGroup() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystemReference() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_radioPeckSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_radioPeckSystem() ;

constexpr ::UnityW<::GlobalNamespace::Prop> const& __cordl_internal_get_radioProp() const;

constexpr ::UnityW<::GlobalNamespace::Prop>& __cordl_internal_get_radioProp() ;

constexpr float_t const& __cordl_internal_get_tunerGap() const;

constexpr float_t& __cordl_internal_get_tunerGap() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tunerTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tunerTransform() ;

constexpr void __cordl_internal_set_emission(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_musicGroup(::UnityW<::GlobalNamespace::MusicGroup>  value) ;

constexpr void __cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_radioPeckSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_radioProp(::UnityW<::GlobalNamespace::Prop>  value) ;

constexpr void __cordl_internal_set_tunerGap(float_t  value) ;

constexpr void __cordl_internal_set_tunerTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1803f7f00, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BroadcastStation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BroadcastStation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BroadcastStation(BroadcastStation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BroadcastStation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BroadcastStation(BroadcastStation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5047};

/// @brief Field musicGroup, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MusicGroup>  ___musicGroup;

/// @brief Field peckSystemReference, offset: 0x28, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystemReference;

/// @brief Field tunerTransform, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tunerTransform;

/// @brief Field tunerGap, offset: 0x58, size: 0x4, def value: None
 float_t  ___tunerGap;

/// @brief Field emission, offset: 0x5c, size: 0x4, def value: None
 float_t  ___emission;

/// @brief Field radioProp, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  ___radioProp;

/// @brief Field radioPeckSystem, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___radioPeckSystem;

/// @brief Field logVerbose, offset: 0x70, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BroadcastStation, ___musicGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BroadcastStation, ___peckSystemReference) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BroadcastStation, ___tunerTransform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BroadcastStation, ___tunerGap) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BroadcastStation, ___emission) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BroadcastStation, ___radioProp) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BroadcastStation, ___radioPeckSystem) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BroadcastStation, ___logVerbose) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BroadcastStation) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
