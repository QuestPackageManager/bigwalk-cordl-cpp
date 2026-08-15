#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCameraMinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerCameraMinder)
namespace GlobalNamespace {
class ListenerMover;
}
namespace GlobalNamespace {
class PlayerCameraMinder___c;
}
namespace GlobalNamespace {
class PlayerCameraReferences;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererFeature;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRendererData;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerCameraMinder;
}
namespace GlobalNamespace {
class PlayerCameraMinder___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerCameraMinder*);
MARK_REF_T(::GlobalNamespace::PlayerCameraMinder___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCameraMinder*, "", "PlayerCameraMinder");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCameraMinder___c*, "", "PlayerCameraMinder/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCameraMinder/<>c
class CORDL_TYPE PlayerCameraMinder___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::PlayerCameraMinder___c*  __9;

/// @brief Field <>9__36_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_0, put=setStaticF___9__36_0)) ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*  __9__36_0;

static inline ::GlobalNamespace::PlayerCameraMinder___c* New_ctor() ;

/// @brief Method <SetWorldUIFOV>b__36_0, addr 0x18046cea0, size 0x60, virtual false, abstract: false, final false
inline bool _SetWorldUIFOV_b__36_0(::UnityEngine::Rendering::Universal::ScriptableRendererFeature*  f) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::PlayerCameraMinder___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* getStaticF___9__36_0() ;

static inline void setStaticF___9(::GlobalNamespace::PlayerCameraMinder___c*  value) ;

static inline void setStaticF___9__36_0(::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCameraMinder___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCameraMinder___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCameraMinder___c(PlayerCameraMinder___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCameraMinder___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCameraMinder___c(PlayerCameraMinder___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5442};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PlayerCameraMinder___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCameraMinder
class CORDL_TYPE PlayerCameraMinder : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::PlayerCameraMinder___c;

/// @brief Field _cameraGuide, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraGuide, put=__cordl_internal_set__cameraGuide)) ::UnityW<::UnityEngine::Transform>  _cameraGuide;

/// @brief Field _worldUIFOV, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__worldUIFOV, put=__cordl_internal_set__worldUIFOV)) float_t  _worldUIFOV;

/// @brief Field ambientLightForCamera, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ambientLightForCamera, put=__cordl_internal_set_ambientLightForCamera)) ::UnityEngine::Gradient*  ambientLightForCamera;

/// @brief Field baseFieldOfView, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseFieldOfView, put=__cordl_internal_set_baseFieldOfView)) float_t  baseFieldOfView;

 __declspec(property(put=set_cameraGuide)) ::UnityW<::UnityEngine::Transform>  cameraGuide;

 __declspec(property(get=get_cameraMoveScalar)) float_t  cameraMoveScalar;

/// @brief Field fixedHeadRange, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_fixedHeadRange, put=__cordl_internal_set_fixedHeadRange)) float_t  fixedHeadRange;

/// @brief Field fixedYCenter, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_fixedYCenter, put=__cordl_internal_set_fixedYCenter)) float_t  fixedYCenter;

/// @brief Field fovFromSettings, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_fovFromSettings, put=setStaticF_fovFromSettings)) float_t  fovFromSettings;

/// @brief Field headIsFixed, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_headIsFixed, put=__cordl_internal_set_headIsFixed)) bool  headIsFixed;

/// @brief Field listenerMover, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_listenerMover, put=__cordl_internal_set_listenerMover)) ::UnityW<::GlobalNamespace::ListenerMover>  listenerMover;

/// @brief Field magnetDirectionFloor, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_magnetDirectionFloor, put=__cordl_internal_set_magnetDirectionFloor)) float_t  magnetDirectionFloor;

/// @brief Field magnetFloor, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_magnetFloor, put=__cordl_internal_set_magnetFloor)) float_t  magnetFloor;

/// @brief Field magnetMaxScale, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_magnetMaxScale, put=__cordl_internal_set_magnetMaxScale)) float_t  magnetMaxScale;

/// @brief Field magnetMinScale, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_magnetMinScale, put=__cordl_internal_set_magnetMinScale)) float_t  magnetMinScale;

/// @brief Field playerCameraReferences, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCameraReferences, put=__cordl_internal_set_playerCameraReferences)) ::UnityW<::GlobalNamespace::PlayerCameraReferences>  playerCameraReferences;

/// @brief Field playerCharacter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field saturationScalar, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_saturationScalar, put=__cordl_internal_set_saturationScalar)) float_t  saturationScalar;

/// @brief Field universalRendererData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_universalRendererData, put=__cordl_internal_set_universalRendererData)) ::UnityW<::UnityEngine::Rendering::Universal::UniversalRendererData>  universalRendererData;

/// @brief Field value, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) float_t  value;

/// @brief Field zoomLevel, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoomLevel, put=__cordl_internal_set_zoomLevel)) float_t  zoomLevel;

/// @brief Method Awake, addr 0x18045fed0, size 0x40, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClampHeadIfFixed, addr 0x18045ff10, size 0xf0, virtual false, abstract: false, final false
inline void ClampHeadIfFixed(::by_ref<float_t>  headX, ::by_ref<float_t>  headY) ;

/// @brief Method ClearHeadFixed, addr 0x1802f6480, size 0x10, virtual false, abstract: false, final false
inline void ClearHeadFixed() ;

/// @brief Method GetRelativeHeadRotation, addr 0x180460000, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetRelativeHeadRotation(::UnityEngine::Quaternion  guideRotation) ;

/// @brief Method HardRefreshLightingState, addr 0x1804601e0, size 0x30, virtual false, abstract: false, final false
inline void HardRefreshLightingState() ;

/// @brief Method Initialize, addr 0x180460210, size 0x30, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerCameraMinder* New_ctor() ;

/// @brief Method ResetZoom, addr 0x180460240, size 0x70, virtual false, abstract: false, final false
inline void ResetZoom() ;

/// @brief Method ReturnCamera, addr 0x1804602b0, size 0x110, virtual false, abstract: false, final false
inline void ReturnCamera() ;

/// @brief Method ScaleVelocity, addr 0x1804603c0, size 0x140, virtual false, abstract: false, final false
inline void ScaleVelocity(::UnityEngine::Vector2  head, ::by_ref<::UnityEngine::Vector2>  velocity) ;

/// @brief Method SetHeadFixed, addr 0x180460500, size 0x60, virtual false, abstract: false, final false
inline void SetHeadFixed(float_t  yCenter, float_t  range) ;

/// @brief Method SetWorldUIFOV, addr 0x180460560, size 0x170, virtual false, abstract: false, final false
inline void SetWorldUIFOV(float_t  fov) ;

/// @brief Method SetZoom, addr 0x1804606d0, size 0x70, virtual false, abstract: false, final false
inline void SetZoom(float_t  zoom) ;

/// @brief Method TakeCamera, addr 0x180460740, size 0x100, virtual false, abstract: false, final false
inline void TakeCamera() ;

/// @brief Method Update, addr 0x180460840, size 0x4e0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cameraGuide() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cameraGuide() ;

constexpr float_t const& __cordl_internal_get__worldUIFOV() const;

constexpr float_t& __cordl_internal_get__worldUIFOV() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_ambientLightForCamera() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_ambientLightForCamera() ;

constexpr float_t const& __cordl_internal_get_baseFieldOfView() const;

constexpr float_t& __cordl_internal_get_baseFieldOfView() ;

constexpr float_t const& __cordl_internal_get_fixedHeadRange() const;

constexpr float_t& __cordl_internal_get_fixedHeadRange() ;

constexpr float_t const& __cordl_internal_get_fixedYCenter() const;

constexpr float_t& __cordl_internal_get_fixedYCenter() ;

constexpr bool const& __cordl_internal_get_headIsFixed() const;

constexpr bool& __cordl_internal_get_headIsFixed() ;

constexpr ::UnityW<::GlobalNamespace::ListenerMover> const& __cordl_internal_get_listenerMover() const;

constexpr ::UnityW<::GlobalNamespace::ListenerMover>& __cordl_internal_get_listenerMover() ;

constexpr float_t const& __cordl_internal_get_magnetDirectionFloor() const;

constexpr float_t& __cordl_internal_get_magnetDirectionFloor() ;

constexpr float_t const& __cordl_internal_get_magnetFloor() const;

constexpr float_t& __cordl_internal_get_magnetFloor() ;

constexpr float_t const& __cordl_internal_get_magnetMaxScale() const;

constexpr float_t& __cordl_internal_get_magnetMaxScale() ;

constexpr float_t const& __cordl_internal_get_magnetMinScale() const;

constexpr float_t& __cordl_internal_get_magnetMinScale() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCameraReferences> const& __cordl_internal_get_playerCameraReferences() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCameraReferences>& __cordl_internal_get_playerCameraReferences() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr float_t const& __cordl_internal_get_saturationScalar() const;

constexpr float_t& __cordl_internal_get_saturationScalar() ;

constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRendererData> const& __cordl_internal_get_universalRendererData() const;

constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRendererData>& __cordl_internal_get_universalRendererData() ;

constexpr float_t const& __cordl_internal_get_value() const;

constexpr float_t& __cordl_internal_get_value() ;

constexpr float_t const& __cordl_internal_get_zoomLevel() const;

constexpr float_t& __cordl_internal_get_zoomLevel() ;

constexpr void __cordl_internal_set__cameraGuide(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__worldUIFOV(float_t  value) ;

constexpr void __cordl_internal_set_ambientLightForCamera(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_baseFieldOfView(float_t  value) ;

constexpr void __cordl_internal_set_fixedHeadRange(float_t  value) ;

constexpr void __cordl_internal_set_fixedYCenter(float_t  value) ;

constexpr void __cordl_internal_set_headIsFixed(bool  value) ;

constexpr void __cordl_internal_set_listenerMover(::UnityW<::GlobalNamespace::ListenerMover>  value) ;

constexpr void __cordl_internal_set_magnetDirectionFloor(float_t  value) ;

constexpr void __cordl_internal_set_magnetFloor(float_t  value) ;

constexpr void __cordl_internal_set_magnetMaxScale(float_t  value) ;

constexpr void __cordl_internal_set_magnetMinScale(float_t  value) ;

constexpr void __cordl_internal_set_playerCameraReferences(::UnityW<::GlobalNamespace::PlayerCameraReferences>  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_saturationScalar(float_t  value) ;

constexpr void __cordl_internal_set_universalRendererData(::UnityW<::UnityEngine::Rendering::Universal::UniversalRendererData>  value) ;

constexpr void __cordl_internal_set_value(float_t  value) ;

constexpr void __cordl_internal_set_zoomLevel(float_t  value) ;

/// @brief Method .ctor, addr 0x180460d20, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_fovFromSettings() ;

/// @brief Method get_cameraMoveScalar, addr 0x1802e2da0, size 0x10, virtual false, abstract: false, final false
inline float_t get_cameraMoveScalar() ;

static inline void setStaticF_fovFromSettings(float_t  value) ;

/// @brief Method set_cameraGuide, addr 0x180460d30, size 0x210, virtual false, abstract: false, final false
inline void set_cameraGuide(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCameraMinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCameraMinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCameraMinder(PlayerCameraMinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCameraMinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCameraMinder(PlayerCameraMinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5443};

/// @brief Field listenerMover, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ListenerMover>  ___listenerMover;

/// @brief Field magnetFloor, offset: 0x18, size: 0x4, def value: None
 float_t  ___magnetFloor;

/// @brief Field magnetDirectionFloor, offset: 0x1c, size: 0x4, def value: None
 float_t  ___magnetDirectionFloor;

/// @brief Field magnetMinScale, offset: 0x20, size: 0x4, def value: None
 float_t  ___magnetMinScale;

/// @brief Field magnetMaxScale, offset: 0x24, size: 0x4, def value: None
 float_t  ___magnetMaxScale;

/// @brief Field playerCharacter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field baseFieldOfView, offset: 0x30, size: 0x4, def value: None
 float_t  ___baseFieldOfView;

/// @brief Field zoomLevel, offset: 0x34, size: 0x4, def value: None
 float_t  ___zoomLevel;

/// @brief Field ambientLightForCamera, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___ambientLightForCamera;

/// @brief Field _cameraGuide, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____cameraGuide;

/// @brief Field universalRendererData, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::Universal::UniversalRendererData>  ___universalRendererData;

/// @brief Field headIsFixed, offset: 0x50, size: 0x1, def value: None
 bool  ___headIsFixed;

/// @brief Field fixedYCenter, offset: 0x54, size: 0x4, def value: None
 float_t  ___fixedYCenter;

/// @brief Field fixedHeadRange, offset: 0x58, size: 0x4, def value: None
 float_t  ___fixedHeadRange;

/// @brief Field value, offset: 0x5c, size: 0x4, def value: None
 float_t  ___value;

/// @brief Field saturationScalar, offset: 0x60, size: 0x4, def value: None
 float_t  ___saturationScalar;

/// @brief Field playerCameraReferences, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCameraReferences>  ___playerCameraReferences;

/// @brief Field _worldUIFOV, offset: 0x70, size: 0x4, def value: None
 float_t  ____worldUIFOV;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ___listenerMover) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ___magnetFloor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ___magnetDirectionFloor) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ___magnetMinScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ___magnetMaxScale) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ___playerCharacter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ___baseFieldOfView) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ___zoomLevel) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ___ambientLightForCamera) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ____cameraGuide) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ___universalRendererData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ___headIsFixed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ___fixedYCenter) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ___fixedHeadRange) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ___value) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ___saturationScalar) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ___playerCameraReferences) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCameraMinder, ____worldUIFOV) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerCameraMinder) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
