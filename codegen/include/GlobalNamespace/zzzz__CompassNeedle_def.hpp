#pragma once
// IWYU pragma private; include "GlobalNamespace/CompassNeedle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CompassNeedle)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CompassNeedle;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CompassNeedle*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompassNeedle*, "", "CompassNeedle");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompassNeedle
class CORDL_TYPE CompassNeedle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field angle, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_angle, put=__cordl_internal_set_angle)) float_t  angle;

/// @brief Field angleVelocity, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_angleVelocity, put=__cordl_internal_set_angleVelocity)) float_t  angleVelocity;

/// @brief Field dampTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampTime, put=__cordl_internal_set_dampTime)) float_t  dampTime;

/// @brief Field logVerbose, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field needleTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_needleTransform, put=__cordl_internal_set_needleTransform)) ::UnityW<::UnityEngine::Transform>  needleTransform;

/// @brief Method LateUpdate, addr 0x1803f81e0, size 0x320, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::CompassNeedle* New_ctor() ;

constexpr float_t const& __cordl_internal_get_angle() const;

constexpr float_t& __cordl_internal_get_angle() ;

constexpr float_t const& __cordl_internal_get_angleVelocity() const;

constexpr float_t& __cordl_internal_get_angleVelocity() ;

constexpr float_t const& __cordl_internal_get_dampTime() const;

constexpr float_t& __cordl_internal_get_dampTime() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_needleTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_needleTransform() ;

constexpr void __cordl_internal_set_angle(float_t  value) ;

constexpr void __cordl_internal_set_angleVelocity(float_t  value) ;

constexpr void __cordl_internal_set_dampTime(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_needleTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CompassNeedle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CompassNeedle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CompassNeedle(CompassNeedle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompassNeedle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompassNeedle(CompassNeedle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5029};

/// @brief Field needleTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___needleTransform;

/// @brief Field dampTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___dampTime;

/// @brief Field logVerbose, offset: 0x2c, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field angleVelocity, offset: 0x30, size: 0x4, def value: None
 float_t  ___angleVelocity;

/// @brief Field angle, offset: 0x34, size: 0x4, def value: None
 float_t  ___angle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompassNeedle, ___needleTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompassNeedle, ___dampTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompassNeedle, ___logVerbose) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompassNeedle, ___angleVelocity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompassNeedle, ___angle) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompassNeedle) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
