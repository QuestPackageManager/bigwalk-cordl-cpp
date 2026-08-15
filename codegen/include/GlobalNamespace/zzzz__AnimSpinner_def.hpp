#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimSpinner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnimSpinner)
// Forward declare root types
namespace GlobalNamespace {
class AnimSpinner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimSpinner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimSpinner*, "", "AnimSpinner");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimSpinner
class CORDL_TYPE AnimSpinner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field isRotating, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRotating, put=__cordl_internal_set_isRotating)) bool  isRotating;

/// @brief Field isVisible, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_isVisible, put=__cordl_internal_set_isVisible)) bool  isVisible;

/// @brief Field roationSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_roationSettings, put=__cordl_internal_set_roationSettings)) ::ArrayW<::UnityEngine::Vector3>  roationSettings;

/// @brief Field rotationVelocity, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotationVelocity, put=__cordl_internal_set_rotationVelocity)) ::UnityEngine::Vector3  rotationVelocity;

static inline ::GlobalNamespace::AnimSpinner* New_ctor() ;

/// @brief Method OnBecameInvisible, addr 0x1803f7680, size 0x10, virtual false, abstract: false, final false
inline void OnBecameInvisible() ;

/// @brief Method OnBecameVisible, addr 0x1803f7690, size 0x20, virtual false, abstract: false, final false
inline void OnBecameVisible() ;

/// @brief Method RefreshEnabled, addr 0x1803f76b0, size 0x30, virtual false, abstract: false, final false
inline void RefreshEnabled() ;

/// @brief Method SetRotation, addr 0x1803f76e0, size 0xb0, virtual false, abstract: false, final false
inline void SetRotation(int32_t  settingsIndex) ;

/// @brief Method Update, addr 0x1803f7790, size 0xd0, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_isRotating() const;

constexpr bool& __cordl_internal_get_isRotating() ;

constexpr bool const& __cordl_internal_get_isVisible() const;

constexpr bool& __cordl_internal_get_isVisible() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_roationSettings() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_roationSettings() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotationVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotationVelocity() ;

constexpr void __cordl_internal_set_isRotating(bool  value) ;

constexpr void __cordl_internal_set_isVisible(bool  value) ;

constexpr void __cordl_internal_set_roationSettings(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_rotationVelocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimSpinner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimSpinner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimSpinner(AnimSpinner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimSpinner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimSpinner(AnimSpinner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5022};

/// @brief Field rotationVelocity, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotationVelocity;

/// @brief Field roationSettings, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___roationSettings;

/// @brief Field isRotating, offset: 0x38, size: 0x1, def value: None
 bool  ___isRotating;

/// @brief Field isVisible, offset: 0x39, size: 0x1, def value: None
 bool  ___isVisible;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimSpinner, ___rotationVelocity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimSpinner, ___roationSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimSpinner, ___isRotating) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimSpinner, ___isVisible) == 0x39, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimSpinner) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
