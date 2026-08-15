#pragma once
// IWYU pragma private; include "Mirror/Examples/AdditiveScenes/ShootingTankBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ShootingTankBehaviour)
namespace Mirror {
class NetworkAnimator;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace Mirror::Examples::AdditiveScenes {
class ShootingTankBehaviour;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*, "Mirror.Examples.AdditiveScenes", "ShootingTankBehaviour");
// Dependencies Mirror.NetworkBehaviour, UnityEngine.Quaternion
namespace Mirror::Examples::AdditiveScenes {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveScenes.ShootingTankBehaviour
class CORDL_TYPE ShootingTankBehaviour : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_Networkrotation, put=set_Networkrotation)) ::UnityEngine::Quaternion  Networkrotation;

/// @brief Field networkAnimator, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkAnimator, put=__cordl_internal_set_networkAnimator)) ::UnityW<::Mirror::NetworkAnimator>  networkAnimator;

/// @brief Field rotation, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Field turnSpeed, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnSpeed, put=__cordl_internal_set_turnSpeed)) float_t  turnSpeed;

/// @brief Method DeserializeSyncVars, addr 0x18156b580, size 0x70, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour* New_ctor() ;

/// @brief Method SerializeSyncVars, addr 0x18156b5f0, size 0x60, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method ShootNearestPlayer, addr 0x18156b650, size 0x370, virtual false, abstract: false, final false
inline void ShootNearestPlayer() ;

/// @brief Method Start, addr 0x18156b9c0, size 0x60, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x18156ba20, size 0xf0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::Mirror::NetworkAnimator> const& __cordl_internal_get_networkAnimator() const;

constexpr ::UnityW<::Mirror::NetworkAnimator>& __cordl_internal_get_networkAnimator() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotation() ;

constexpr float_t const& __cordl_internal_get_turnSpeed() const;

constexpr float_t& __cordl_internal_get_turnSpeed() ;

constexpr void __cordl_internal_set_networkAnimator(::UnityW<::Mirror::NetworkAnimator>  value) ;

constexpr void __cordl_internal_set_rotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_turnSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x18156bb10, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Networkrotation, addr 0x180de9ee0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_Networkrotation() ;

/// @brief Method set_Networkrotation, addr 0x18156bb30, size 0x90, virtual false, abstract: false, final false
inline void set_Networkrotation(::ByRefConst<::UnityEngine::Quaternion>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShootingTankBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShootingTankBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShootingTankBehaviour(ShootingTankBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShootingTankBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShootingTankBehaviour(ShootingTankBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19356};

/// @brief Field rotation, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotation;

/// @brief Field networkAnimator, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkAnimator>  ___networkAnimator;

/// @brief Field turnSpeed, offset: 0x80, size: 0x4, def value: None
 float_t  ___turnSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour, ___rotation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour, ___networkAnimator) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour, ___turnSpeed) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour) == 0x88, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveScenes
