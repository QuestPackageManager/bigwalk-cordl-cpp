#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/Cameras/AbstractTargetFollower.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractTargetFollower)
namespace Rowlan::UnityStandardAssets::Cameras {
struct AbstractTargetFollower_UpdateType;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Rowlan::UnityStandardAssets::Cameras {
struct AbstractTargetFollower_UpdateType;
}
namespace Rowlan::UnityStandardAssets::Cameras {
class AbstractTargetFollower;
}
// Write type traits
MARK_VAL_T(::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType);
MARK_REF_T(::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*);
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType, "Rowlan.UnityStandardAssets.Cameras", "AbstractTargetFollower/UpdateType");
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower*, "Rowlan.UnityStandardAssets.Cameras", "AbstractTargetFollower");
// Dependencies 
namespace Rowlan::UnityStandardAssets::Cameras {
// Is value type: true
// CS Name: Rowlan.UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType
struct CORDL_TYPE AbstractTargetFollower_UpdateType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AbstractTargetFollower_UpdateType_Unwrapped
enum struct __AbstractTargetFollower_UpdateType_Unwrapped : int32_t {
__E_FixedUpdate = static_cast<int32_t>(0x0),
__E_LateUpdate = static_cast<int32_t>(0x1),
__E_ManualUpdate = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AbstractTargetFollower_UpdateType_Unwrapped () const noexcept {
return static_cast<__AbstractTargetFollower_UpdateType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AbstractTargetFollower_UpdateType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AbstractTargetFollower_UpdateType(int32_t  value__) noexcept;

/// @brief Field FixedUpdate value: I32(0)
static ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType const FixedUpdate;

/// @brief Field LateUpdate value: I32(1)
static ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType const LateUpdate;

/// @brief Field ManualUpdate value: I32(2)
static ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType const ManualUpdate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20365};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::Cameras
// Dependencies Rowlan.UnityStandardAssets.Cameras.AbstractTargetFollower::UpdateType, UnityEngine.MonoBehaviour
namespace Rowlan::UnityStandardAssets::Cameras {
// Is value type: false
// CS Name: Rowlan.UnityStandardAssets.Cameras.AbstractTargetFollower
class CORDL_TYPE AbstractTargetFollower : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using UpdateType = ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType;

 __declspec(property(get=get_Target)) ::UnityW<::UnityEngine::Transform>  Target;

/// @brief Field m_AutoTargetPlayer, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutoTargetPlayer, put=__cordl_internal_set_m_AutoTargetPlayer)) bool  m_AutoTargetPlayer;

/// @brief Field m_Target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Target, put=__cordl_internal_set_m_Target)) ::UnityW<::UnityEngine::Transform>  m_Target;

/// @brief Field m_UpdateType, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UpdateType, put=__cordl_internal_set_m_UpdateType)) ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType  m_UpdateType;

/// @brief Field targetRigidbody, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRigidbody, put=__cordl_internal_set_targetRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  targetRigidbody;

/// @brief Method FindAndTargetPlayer, addr 0x181abce30, size 0x70, virtual false, abstract: false, final false
inline void FindAndTargetPlayer() ;

/// @brief Method FixedUpdate, addr 0x181abcea0, size 0x90, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method FollowTarget, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void FollowTarget(float_t  deltaTime) ;

/// @brief Method LateUpdate, addr 0x181abcf30, size 0x90, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method ManualUpdate, addr 0x181abcfc0, size 0x90, virtual false, abstract: false, final false
inline void ManualUpdate() ;

static inline ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower* New_ctor() ;

/// @brief Method SetTarget, addr 0x1802d9820, size 0x10, virtual true, abstract: false, final false
inline void SetTarget(::UnityEngine::Transform*  newTransform) ;

/// @brief Method Start, addr 0x181abd050, size 0xb0, virtual true, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get_m_AutoTargetPlayer() const;

constexpr bool& __cordl_internal_get_m_AutoTargetPlayer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_Target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_Target() ;

constexpr ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType const& __cordl_internal_get_m_UpdateType() const;

constexpr ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType& __cordl_internal_get_m_UpdateType() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_targetRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_targetRigidbody() ;

constexpr void __cordl_internal_set_m_AutoTargetPlayer(bool  value) ;

constexpr void __cordl_internal_set_m_Target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_UpdateType(::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType  value) ;

constexpr void __cordl_internal_set_targetRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x18195f2a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Target, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Target() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbstractTargetFollower() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbstractTargetFollower", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractTargetFollower(AbstractTargetFollower && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTargetFollower", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractTargetFollower(AbstractTargetFollower const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20366};

/// @brief Field m_Target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_Target;

/// @brief Field m_AutoTargetPlayer, offset: 0x28, size: 0x1, def value: None
 bool  ___m_AutoTargetPlayer;

/// @brief Field m_UpdateType, offset: 0x2c, size: 0x4, def value: None
 ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower_UpdateType  ___m_UpdateType;

/// @brief Field targetRigidbody, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___targetRigidbody;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower, ___m_Target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower, ___m_AutoTargetPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower, ___m_UpdateType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower, ___targetRigidbody) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower) == 0x38, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::Cameras
