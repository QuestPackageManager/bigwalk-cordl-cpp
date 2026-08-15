#pragma once
// IWYU pragma private; include "GlobalNamespace/FmRadioDial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FmRadioDial)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FmRadioDial;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FmRadioDial*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FmRadioDial*, "", "FmRadioDial");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FmRadioDial
class CORDL_TYPE FmRadioDial : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _currentState, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentState, put=__cordl_internal_set__currentState)) int32_t  _currentState;

/// @brief Field _smoothPosition, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__smoothPosition, put=__cordl_internal_set__smoothPosition)) float_t  _smoothPosition;

/// @brief Field _smoothVelocity, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__smoothVelocity, put=__cordl_internal_set__smoothVelocity)) float_t  _smoothVelocity;

/// @brief Field gap, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_gap, put=__cordl_internal_set_gap)) float_t  gap;

/// @brief Field smoothTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothTime, put=__cordl_internal_set_smoothTime)) float_t  smoothTime;

/// @brief Field targetTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetTransform, put=__cordl_internal_set_targetTransform)) ::UnityW<::UnityEngine::Transform>  targetTransform;

static inline ::GlobalNamespace::FmRadioDial* New_ctor() ;

/// @brief Method SetState, addr 0x1803fc390, size 0x10, virtual false, abstract: false, final false
inline void SetState(int32_t  state) ;

/// @brief Method Update, addr 0x1803fc3a0, size 0xf0, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get__currentState() const;

constexpr int32_t& __cordl_internal_get__currentState() ;

constexpr float_t const& __cordl_internal_get__smoothPosition() const;

constexpr float_t& __cordl_internal_get__smoothPosition() ;

constexpr float_t const& __cordl_internal_get__smoothVelocity() const;

constexpr float_t& __cordl_internal_get__smoothVelocity() ;

constexpr float_t const& __cordl_internal_get_gap() const;

constexpr float_t& __cordl_internal_get_gap() ;

constexpr float_t const& __cordl_internal_get_smoothTime() const;

constexpr float_t& __cordl_internal_get_smoothTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetTransform() ;

constexpr void __cordl_internal_set__currentState(int32_t  value) ;

constexpr void __cordl_internal_set__smoothPosition(float_t  value) ;

constexpr void __cordl_internal_set__smoothVelocity(float_t  value) ;

constexpr void __cordl_internal_set_gap(float_t  value) ;

constexpr void __cordl_internal_set_smoothTime(float_t  value) ;

constexpr void __cordl_internal_set_targetTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1803fc490, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FmRadioDial() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FmRadioDial", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FmRadioDial(FmRadioDial && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FmRadioDial", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FmRadioDial(FmRadioDial const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5048};

/// @brief Field targetTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetTransform;

/// @brief Field gap, offset: 0x28, size: 0x4, def value: None
 float_t  ___gap;

/// @brief Field smoothTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ___smoothTime;

/// @brief Field _currentState, offset: 0x30, size: 0x4, def value: None
 int32_t  ____currentState;

/// @brief Field _smoothPosition, offset: 0x34, size: 0x4, def value: None
 float_t  ____smoothPosition;

/// @brief Field _smoothVelocity, offset: 0x38, size: 0x4, def value: None
 float_t  ____smoothVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FmRadioDial, ___targetTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioDial, ___gap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioDial, ___smoothTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioDial, ____currentState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioDial, ____smoothPosition) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioDial, ____smoothVelocity) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FmRadioDial) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
