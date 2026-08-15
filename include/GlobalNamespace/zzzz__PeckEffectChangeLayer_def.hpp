#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectChangeLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckEffectChangeLayer)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckEffectChangeLayer_SpecialLayer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct PeckEffectChangeLayer_SpecialLayer;
}
namespace GlobalNamespace {
class PeckEffectChangeLayer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer);
MARK_REF_T(::GlobalNamespace::PeckEffectChangeLayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer, "", "PeckEffectChangeLayer/SpecialLayer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectChangeLayer*, "", "PeckEffectChangeLayer");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectChangeLayer/SpecialLayer
struct CORDL_TYPE PeckEffectChangeLayer_SpecialLayer {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckEffectChangeLayer_SpecialLayer_Unwrapped
enum struct __PeckEffectChangeLayer_SpecialLayer_Unwrapped : int32_t {
__E_DoNotChange = static_cast<int32_t>(0x0),
__E_Prop = static_cast<int32_t>(0x8),
__E_HideOnLocalCamera = static_cast<int32_t>(0x9),
__E_World = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckEffectChangeLayer_SpecialLayer_Unwrapped () const noexcept {
return static_cast<__PeckEffectChangeLayer_SpecialLayer_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectChangeLayer_SpecialLayer() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckEffectChangeLayer_SpecialLayer(int32_t  value__) noexcept;

/// @brief Field DoNotChange value: I32(0)
static ::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer const DoNotChange;

/// @brief Field HideOnLocalCamera value: I32(9)
static ::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer const HideOnLocalCamera;

/// @brief Field Prop value: I32(8)
static ::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer const Prop;

/// @brief Field World value: I32(10)
static ::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer const World;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5374};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectChangeLayer::SpecialLayer, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectChangeLayer
class CORDL_TYPE PeckEffectChangeLayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SpecialLayer = ::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer;

/// @brief Field layersPerState, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_layersPerState, put=__cordl_internal_set_layersPerState)) ::ArrayW<::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer>  layersPerState;

/// @brief Field logVerbose, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onlyForLocalPlayer, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlyForLocalPlayer, put=__cordl_internal_set_onlyForLocalPlayer)) bool  onlyForLocalPlayer;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Field target, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Method Awake, addr 0x180448d50, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectChangeLayer* New_ctor() ;

/// @brief Method Peck, addr 0x180448df0, size 0xc0, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer> const& __cordl_internal_get_layersPerState() const;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer>& __cordl_internal_get_layersPerState() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr bool const& __cordl_internal_get_onlyForLocalPlayer() const;

constexpr bool& __cordl_internal_get_onlyForLocalPlayer() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_layersPerState(::ArrayW<::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onlyForLocalPlayer(bool  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectChangeLayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectChangeLayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectChangeLayer(PeckEffectChangeLayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectChangeLayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectChangeLayer(PeckEffectChangeLayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5375};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field target, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field layersPerState, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PeckEffectChangeLayer_SpecialLayer>  ___layersPerState;

/// @brief Field onlyForLocalPlayer, offset: 0x58, size: 0x1, def value: None
 bool  ___onlyForLocalPlayer;

/// @brief Field logVerbose, offset: 0x59, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectChangeLayer, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectChangeLayer, ___target) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectChangeLayer, ___layersPerState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectChangeLayer, ___onlyForLocalPlayer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectChangeLayer, ___logVerbose) == 0x59, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectChangeLayer) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
