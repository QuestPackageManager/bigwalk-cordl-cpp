#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectRigidbodyControls.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PeckEffectRigidbodyControls)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckEffectRigidbodyControls_RigidbodySetting;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectRigidbodyControls;
}
namespace GlobalNamespace {
struct PeckEffectRigidbodyControls_RigidbodySetting;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectRigidbodyControls*);
MARK_VAL_T(::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectRigidbodyControls*, "", "PeckEffectRigidbodyControls");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting, "", "PeckEffectRigidbodyControls/RigidbodySetting");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectRigidbodyControls/RigidbodySetting
struct CORDL_TYPE PeckEffectRigidbodyControls_RigidbodySetting {
public:
// Declarations
/// @brief Method ApplyToRigidbody, addr 0x180456150, size 0x50, virtual false, abstract: false, final false
inline void ApplyToRigidbody(::UnityEngine::Rigidbody*  rigidbody) ;

// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectRigidbodyControls_RigidbodySetting() ;

// Ctor Parameters [CppParam { name: "drag", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "angularDrag", ty: "float_t", modifiers: "", def_value: None }]
constexpr PeckEffectRigidbodyControls_RigidbodySetting(float_t  drag, float_t  angularDrag) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5409};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field drag, offset: 0x0, size: 0x4, def value: None
 float_t  drag;

/// @brief Field angularDrag, offset: 0x4, size: 0x4, def value: None
 float_t  angularDrag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting, drag) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting, angularDrag) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectRigidbodyControls::RigidbodySetting, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectRigidbodyControls
class CORDL_TYPE PeckEffectRigidbodyControls : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RigidbodySetting = ::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting;

/// @brief Field logVerbose, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field rigidbodySettings, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidbodySettings, put=__cordl_internal_set_rigidbodySettings)) ::ArrayW<::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting>  rigidbodySettings;

/// @brief Field systemReference, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Field targetRigidbody, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRigidbody, put=__cordl_internal_set_targetRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  targetRigidbody;

/// @brief Method Awake, addr 0x18044d050, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectRigidbodyControls* New_ctor() ;

/// @brief Method Peck, addr 0x18044d0f0, size 0xb0, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting> const& __cordl_internal_get_rigidbodySettings() const;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting>& __cordl_internal_get_rigidbodySettings() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_targetRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_targetRigidbody() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_rigidbodySettings(::ArrayW<::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting>  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_targetRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectRigidbodyControls() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectRigidbodyControls", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectRigidbodyControls(PeckEffectRigidbodyControls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectRigidbodyControls", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectRigidbodyControls(PeckEffectRigidbodyControls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5410};

/// @brief Field targetRigidbody, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___targetRigidbody;

/// @brief Field systemReference, offset: 0x28, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field rigidbodySettings, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PeckEffectRigidbodyControls_RigidbodySetting>  ___rigidbodySettings;

/// @brief Field logVerbose, offset: 0x58, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectRigidbodyControls, ___targetRigidbody) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectRigidbodyControls, ___systemReference) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectRigidbodyControls, ___rigidbodySettings) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectRigidbodyControls, ___logVerbose) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectRigidbodyControls) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
