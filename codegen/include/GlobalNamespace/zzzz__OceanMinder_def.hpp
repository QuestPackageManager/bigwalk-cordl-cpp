#pragma once
// IWYU pragma private; include "GlobalNamespace/OceanMinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OceanMinder)
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class OceanMinder;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OceanMinder*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OceanMinder*, "", "OceanMinder");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OceanMinder
class CORDL_TYPE OceanMinder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _isSubscribed, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSubscribed, put=__cordl_internal_set__isSubscribed)) bool  _isSubscribed;

/// @brief Field logVerbose, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field waterRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterRenderer, put=__cordl_internal_set_waterRenderer)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  waterRenderer;

/// @brief Method Awake, addr 0x180426ff0, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::OceanMinder* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x180427040, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnviroLoad, addr 0x1804270a0, size 0x90, virtual false, abstract: false, final false
inline void OnEnviroLoad() ;

/// @brief Method Unsubscribe, addr 0x180427040, size 0x60, virtual false, abstract: false, final false
inline void Unsubscribe() ;

constexpr bool const& __cordl_internal_get__isSubscribed() const;

constexpr bool& __cordl_internal_get__isSubscribed() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get_waterRenderer() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get_waterRenderer() ;

constexpr void __cordl_internal_set__isSubscribed(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_waterRenderer(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OceanMinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OceanMinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OceanMinder(OceanMinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OceanMinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OceanMinder(OceanMinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5186};

/// @brief Field waterRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ___waterRenderer;

/// @brief Field _isSubscribed, offset: 0x28, size: 0x1, def value: None
 bool  ____isSubscribed;

/// @brief Field logVerbose, offset: 0x29, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OceanMinder, ___waterRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanMinder, ____isSubscribed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanMinder, ___logVerbose) == 0x29, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OceanMinder) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
