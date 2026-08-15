#pragma once
// IWYU pragma private; include "GlobalNamespace/CameraCheatMover.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraCheatMover)
namespace GlobalNamespace {
class IAudioGUI;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CameraCheatMover;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CameraCheatMover*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CameraCheatMover*, "", "CameraCheatMover");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: CameraCheatMover
class CORDL_TYPE CameraCheatMover : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Identifier)) ::StringW  Identifier;

/// @brief Field _cachedCamRotation, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get__cachedCamRotation, put=__cordl_internal_set__cachedCamRotation)) ::UnityEngine::Quaternion  _cachedCamRotation;

/// @brief Field _cachedPivotRotation, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get__cachedPivotRotation, put=__cordl_internal_set__cachedPivotRotation)) ::UnityEngine::Quaternion  _cachedPivotRotation;

/// @brief Field _detached, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__detached, put=__cordl_internal_set__detached)) bool  _detached;

/// @brief Field _followHead, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__followHead, put=__cordl_internal_set__followHead)) ::UnityW<::UnityEngine::Transform>  _followHead;

/// @brief Field _followPlayerIndex, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__followPlayerIndex, put=__cordl_internal_set__followPlayerIndex)) int32_t  _followPlayerIndex;

/// @brief Field _guiDebugTextStyle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__guiDebugTextStyle, put=setStaticF__guiDebugTextStyle)) ::UnityEngine::GUIStyle*  _guiDebugTextStyle;

/// @brief Field _lastParent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastParent, put=__cordl_internal_set__lastParent)) ::UnityW<::UnityEngine::Transform>  _lastParent;

/// @brief Field _pitch, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__pitch, put=__cordl_internal_set__pitch)) float_t  _pitch;

/// @brief Field _yaw, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__yaw, put=__cordl_internal_set__yaw)) float_t  _yaw;

/// @brief Field camTForm, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_camTForm, put=__cordl_internal_set_camTForm)) ::UnityW<::UnityEngine::Transform>  camTForm;

/// @brief Field maxPitch, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxPitch, put=__cordl_internal_set_maxPitch)) float_t  maxPitch;

/// @brief Field movingSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_movingSpeed, put=__cordl_internal_set_movingSpeed)) float_t  movingSpeed;

/// @brief Field pc, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_pc, put=__cordl_internal_set_pc)) ::UnityW<::GlobalNamespace::PlayerCharacter>  pc;

/// @brief Field pivot, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pivot, put=__cordl_internal_set_pivot)) ::UnityW<::UnityEngine::Transform>  pivot;

/// @brief Field sensitivity, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_sensitivity, put=__cordl_internal_set_sensitivity)) float_t  sensitivity;

/// @brief Convert operator to "::GlobalNamespace::IAudioGUI"
constexpr operator  ::GlobalNamespace::IAudioGUI*() noexcept;

/// @brief Method Attach, addr 0x18032b0f0, size 0x1f0, virtual false, abstract: false, final false
inline void Attach() ;

/// @brief Method Awake, addr 0x18032b2e0, size 0xd0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Detach, addr 0x18032b3b0, size 0xc0, virtual false, abstract: false, final false
inline void Detach() ;

/// @brief Method DrawGUI, addr 0x18032b470, size 0xf0, virtual true, abstract: false, final true
inline void DrawGUI() ;

/// @brief Method LateUpdate, addr 0x18032b560, size 0xc30, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::CameraCheatMover* New_ctor() ;

/// @brief Method OnDisable, addr 0x180318fc0, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18032c190, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTeleport, addr 0x18032c1f0, size 0xa0, virtual false, abstract: false, final false
inline void OnTeleport(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method <LateUpdate>g___leftButton|20_0, addr 0x18032c290, size 0xc0, virtual false, abstract: false, final false
inline void _LateUpdate_g___leftButton_20_0() ;

/// @brief Method <LateUpdate>g___rightButton|20_1, addr 0x18032c350, size 0x70, virtual false, abstract: false, final false
inline void _LateUpdate_g___rightButton_20_1() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__cachedCamRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__cachedCamRotation() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__cachedPivotRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__cachedPivotRotation() ;

constexpr bool const& __cordl_internal_get__detached() const;

constexpr bool& __cordl_internal_get__detached() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__followHead() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__followHead() ;

constexpr int32_t const& __cordl_internal_get__followPlayerIndex() const;

constexpr int32_t& __cordl_internal_get__followPlayerIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__lastParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__lastParent() ;

constexpr float_t const& __cordl_internal_get__pitch() const;

constexpr float_t& __cordl_internal_get__pitch() ;

constexpr float_t const& __cordl_internal_get__yaw() const;

constexpr float_t& __cordl_internal_get__yaw() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_camTForm() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_camTForm() ;

constexpr float_t const& __cordl_internal_get_maxPitch() const;

constexpr float_t& __cordl_internal_get_maxPitch() ;

constexpr float_t const& __cordl_internal_get_movingSpeed() const;

constexpr float_t& __cordl_internal_get_movingSpeed() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_pc() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_pc() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pivot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pivot() ;

constexpr float_t const& __cordl_internal_get_sensitivity() const;

constexpr float_t& __cordl_internal_get_sensitivity() ;

constexpr void __cordl_internal_set__cachedCamRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__cachedPivotRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__detached(bool  value) ;

constexpr void __cordl_internal_set__followHead(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__followPlayerIndex(int32_t  value) ;

constexpr void __cordl_internal_set__lastParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__pitch(float_t  value) ;

constexpr void __cordl_internal_set__yaw(float_t  value) ;

constexpr void __cordl_internal_set_camTForm(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_maxPitch(float_t  value) ;

constexpr void __cordl_internal_set_movingSpeed(float_t  value) ;

constexpr void __cordl_internal_set_pc(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_pivot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_sensitivity(float_t  value) ;

/// @brief Method .ctor, addr 0x18032c3c0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::GUIStyle* getStaticF__guiDebugTextStyle() ;

/// @brief Method get_Identifier, addr 0x18032c3e0, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_Identifier() ;

/// @brief Convert to "::GlobalNamespace::IAudioGUI"
constexpr ::GlobalNamespace::IAudioGUI* i___GlobalNamespace__IAudioGUI() noexcept;

static inline void setStaticF__guiDebugTextStyle(::UnityEngine::GUIStyle*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraCheatMover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraCheatMover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraCheatMover(CameraCheatMover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraCheatMover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraCheatMover(CameraCheatMover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4815};

/// @brief Field pivot, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pivot;

/// @brief Field camTForm, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___camTForm;

/// @brief Field pc, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___pc;

/// @brief Field sensitivity, offset: 0x38, size: 0x4, def value: None
 float_t  ___sensitivity;

/// @brief Field maxPitch, offset: 0x3c, size: 0x4, def value: None
 float_t  ___maxPitch;

/// @brief Field movingSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ___movingSpeed;

/// @brief Field _lastParent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____lastParent;

/// @brief Field _detached, offset: 0x50, size: 0x1, def value: None
 bool  ____detached;

/// @brief Field _cachedPivotRotation, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____cachedPivotRotation;

/// @brief Field _cachedCamRotation, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____cachedCamRotation;

/// @brief Field _followPlayerIndex, offset: 0x74, size: 0x4, def value: None
 int32_t  ____followPlayerIndex;

/// @brief Field _followHead, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____followHead;

/// @brief Field _yaw, offset: 0x80, size: 0x4, def value: None
 float_t  ____yaw;

/// @brief Field _pitch, offset: 0x84, size: 0x4, def value: None
 float_t  ____pitch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CameraCheatMover, ___pivot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraCheatMover, ___camTForm) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraCheatMover, ___pc) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraCheatMover, ___sensitivity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraCheatMover, ___maxPitch) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraCheatMover, ___movingSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraCheatMover, ____lastParent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraCheatMover, ____detached) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraCheatMover, ____cachedPivotRotation) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraCheatMover, ____cachedCamRotation) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraCheatMover, ____followPlayerIndex) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraCheatMover, ____followHead) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraCheatMover, ____yaw) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraCheatMover, ____pitch) == 0x84, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CameraCheatMover) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
