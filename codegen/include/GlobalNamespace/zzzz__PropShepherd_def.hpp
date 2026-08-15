#pragma once
// IWYU pragma private; include "GlobalNamespace/PropShepherd.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PropShepherd)
namespace GlobalNamespace {
class Prop;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class PropShepherd;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropShepherd*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropShepherd*, "", "PropShepherd");
// Dependencies UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropShepherd
class CORDL_TYPE PropShepherd : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _overLapColliders, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__overLapColliders, put=__cordl_internal_set__overLapColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _overLapColliders;

/// @brief Field layerMask, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field logVerbose, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field targetBody, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetBody, put=__cordl_internal_set_targetBody)) ::UnityW<::UnityEngine::Rigidbody>  targetBody;

/// @brief Method Awake, addr 0x1804119a0, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DoShepherd, addr 0x1804119d0, size 0x770, virtual false, abstract: false, final false
inline void DoShepherd(::GlobalNamespace::Prop*  prop) ;

static inline ::GlobalNamespace::PropShepherd* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get__overLapColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get__overLapColliders() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_targetBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_targetBody() ;

constexpr void __cordl_internal_set__overLapColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_targetBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropShepherd() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropShepherd", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropShepherd(PropShepherd && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropShepherd", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropShepherd(PropShepherd const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5111};

/// @brief Field targetBody, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___targetBody;

/// @brief Field layerMask, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// @brief Field logVerbose, offset: 0x2c, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _overLapColliders, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ____overLapColliders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropShepherd, ___targetBody) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropShepherd, ___layerMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropShepherd, ___logVerbose) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropShepherd, ____overLapColliders) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropShepherd) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
