#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectTelescope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckEffectTelescope)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckEffectTelescope_MaskType;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
// Forward declare root types
namespace GlobalNamespace {
struct PeckEffectTelescope_MaskType;
}
namespace GlobalNamespace {
class PeckEffectTelescope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckEffectTelescope_MaskType);
MARK_REF_T(::GlobalNamespace::PeckEffectTelescope*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectTelescope_MaskType, "", "PeckEffectTelescope/MaskType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectTelescope*, "", "PeckEffectTelescope");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectTelescope/MaskType
struct CORDL_TYPE PeckEffectTelescope_MaskType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckEffectTelescope_MaskType_Unwrapped
enum struct __PeckEffectTelescope_MaskType_Unwrapped : int32_t {
__E_Binoculars = static_cast<int32_t>(0x0),
__E_Telescope = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckEffectTelescope_MaskType_Unwrapped () const noexcept {
return static_cast<__PeckEffectTelescope_MaskType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectTelescope_MaskType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckEffectTelescope_MaskType(int32_t  value__) noexcept;

/// @brief Field Binoculars value: I32(0)
static ::GlobalNamespace::PeckEffectTelescope_MaskType const Binoculars;

/// @brief Field Telescope value: I32(1)
static ::GlobalNamespace::PeckEffectTelescope_MaskType const Telescope;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5414};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectTelescope_MaskType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectTelescope_MaskType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectTelescope::MaskType, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectTelescope
class CORDL_TYPE PeckEffectTelescope : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MaskType = ::GlobalNamespace::PeckEffectTelescope_MaskType;

/// @brief Field clearHeldHigh, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_clearHeldHigh, put=__cordl_internal_set_clearHeldHigh)) bool  clearHeldHigh;

/// @brief Field fixedHeadRange, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_fixedHeadRange, put=__cordl_internal_set_fixedHeadRange)) float_t  fixedHeadRange;

/// @brief Field fixedYCenter, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fixedYCenter, put=__cordl_internal_set_fixedYCenter)) float_t  fixedYCenter;

/// @brief Field giveXrayEyes, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get_giveXrayEyes, put=__cordl_internal_set_giveXrayEyes)) bool  giveXrayEyes;

/// @brief Field givesNightVision, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_givesNightVision, put=__cordl_internal_set_givesNightVision)) bool  givesNightVision;

/// @brief Field isActiveForLocalPlayer, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActiveForLocalPlayer, put=__cordl_internal_set_isActiveForLocalPlayer)) bool  isActiveForLocalPlayer;

/// @brief Field logVerbose, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field maskType, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_maskType, put=__cordl_internal_set_maskType)) ::GlobalNamespace::PeckEffectTelescope_MaskType  maskType;

/// @brief Field moveLoop, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_moveLoop, put=__cordl_internal_set_moveLoop)) ::UnityW<::GlobalNamespace::AudioAsset>  moveLoop;

/// @brief Field setHeadFixed, offset 0x5b, size 0x1 
 __declspec(property(get=__cordl_internal_get_setHeadFixed, put=__cordl_internal_set_setHeadFixed)) bool  setHeadFixed;

/// @brief Field systemReference, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Field trackedStateSystem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackedStateSystem, put=__cordl_internal_set_trackedStateSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  trackedStateSystem;

/// @brief Field zoomLevel, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoomLevel, put=__cordl_internal_set_zoomLevel)) float_t  zoomLevel;

/// @brief Method Awake, addr 0x18044da10, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectTelescope* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x18044dab0, size 0x300, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method Peck, addr 0x18044ddb0, size 0x110, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  context) ;

/// @brief Method SetActiveFor, addr 0x18044dec0, size 0x1d0, virtual false, abstract: false, final false
inline void SetActiveFor(::GlobalNamespace::PlayerCharacter*  playerCharacter, bool  active) ;

/// @brief Method SetMask, addr 0x18044e090, size 0x50, virtual false, abstract: false, final false
inline void SetMask(bool  active) ;

constexpr bool const& __cordl_internal_get_clearHeldHigh() const;

constexpr bool& __cordl_internal_get_clearHeldHigh() ;

constexpr float_t const& __cordl_internal_get_fixedHeadRange() const;

constexpr float_t& __cordl_internal_get_fixedHeadRange() ;

constexpr float_t const& __cordl_internal_get_fixedYCenter() const;

constexpr float_t& __cordl_internal_get_fixedYCenter() ;

constexpr bool const& __cordl_internal_get_giveXrayEyes() const;

constexpr bool& __cordl_internal_get_giveXrayEyes() ;

constexpr bool const& __cordl_internal_get_givesNightVision() const;

constexpr bool& __cordl_internal_get_givesNightVision() ;

constexpr bool const& __cordl_internal_get_isActiveForLocalPlayer() const;

constexpr bool& __cordl_internal_get_isActiveForLocalPlayer() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::GlobalNamespace::PeckEffectTelescope_MaskType const& __cordl_internal_get_maskType() const;

constexpr ::GlobalNamespace::PeckEffectTelescope_MaskType& __cordl_internal_get_maskType() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_moveLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_moveLoop() ;

constexpr bool const& __cordl_internal_get_setHeadFixed() const;

constexpr bool& __cordl_internal_get_setHeadFixed() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_trackedStateSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_trackedStateSystem() ;

constexpr float_t const& __cordl_internal_get_zoomLevel() const;

constexpr float_t& __cordl_internal_get_zoomLevel() ;

constexpr void __cordl_internal_set_clearHeldHigh(bool  value) ;

constexpr void __cordl_internal_set_fixedHeadRange(float_t  value) ;

constexpr void __cordl_internal_set_fixedYCenter(float_t  value) ;

constexpr void __cordl_internal_set_giveXrayEyes(bool  value) ;

constexpr void __cordl_internal_set_givesNightVision(bool  value) ;

constexpr void __cordl_internal_set_isActiveForLocalPlayer(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_maskType(::GlobalNamespace::PeckEffectTelescope_MaskType  value) ;

constexpr void __cordl_internal_set_moveLoop(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_setHeadFixed(bool  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_trackedStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_zoomLevel(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectTelescope() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectTelescope", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectTelescope(PeckEffectTelescope && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectTelescope", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectTelescope(PeckEffectTelescope const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5415};

/// @brief Field trackedStateSystem, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___trackedStateSystem;

/// @brief Field systemReference, offset: 0x28, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field zoomLevel, offset: 0x50, size: 0x4, def value: None
 float_t  ___zoomLevel;

/// @brief Field maskType, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::PeckEffectTelescope_MaskType  ___maskType;

/// @brief Field givesNightVision, offset: 0x58, size: 0x1, def value: None
 bool  ___givesNightVision;

/// @brief Field clearHeldHigh, offset: 0x59, size: 0x1, def value: None
 bool  ___clearHeldHigh;

/// @brief Field giveXrayEyes, offset: 0x5a, size: 0x1, def value: None
 bool  ___giveXrayEyes;

/// @brief Field setHeadFixed, offset: 0x5b, size: 0x1, def value: None
 bool  ___setHeadFixed;

/// @brief Field fixedYCenter, offset: 0x5c, size: 0x4, def value: None
 float_t  ___fixedYCenter;

/// @brief Field fixedHeadRange, offset: 0x60, size: 0x4, def value: None
 float_t  ___fixedHeadRange;

/// @brief Field logVerbose, offset: 0x64, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field moveLoop, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___moveLoop;

/// @brief Field isActiveForLocalPlayer, offset: 0x70, size: 0x1, def value: None
 bool  ___isActiveForLocalPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectTelescope, ___trackedStateSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTelescope, ___systemReference) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTelescope, ___zoomLevel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTelescope, ___maskType) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTelescope, ___givesNightVision) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTelescope, ___clearHeldHigh) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTelescope, ___giveXrayEyes) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTelescope, ___setHeadFixed) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTelescope, ___fixedYCenter) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTelescope, ___fixedHeadRange) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTelescope, ___logVerbose) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTelescope, ___moveLoop) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTelescope, ___isActiveForLocalPlayer) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectTelescope) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
