#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectSavableHome.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckPropReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PeckEffectSavableHome)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PropHome;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectSavableHome;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectSavableHome*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectSavableHome*, "", "PeckEffectSavableHome");
// Dependencies PeckPropReference, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectSavableHome
class CORDL_TYPE PeckEffectSavableHome : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field logVerbose, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field propHome, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_propHome, put=__cordl_internal_set_propHome)) ::UnityW<::GlobalNamespace::PropHome>  propHome;

/// @brief Field propReference, offset 0x48, size 0x38 
 __declspec(property(get=__cordl_internal_get_propReference, put=__cordl_internal_set_propReference)) ::GlobalNamespace::PeckPropReference  propReference;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Method Awake, addr 0x18044d1a0, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectSavableHome* New_ctor() ;

/// @brief Method Peck, addr 0x18044d240, size 0x2e0, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PropHome> const& __cordl_internal_get_propHome() const;

constexpr ::UnityW<::GlobalNamespace::PropHome>& __cordl_internal_get_propHome() ;

constexpr ::GlobalNamespace::PeckPropReference const& __cordl_internal_get_propReference() const;

constexpr ::GlobalNamespace::PeckPropReference& __cordl_internal_get_propReference() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_propHome(::UnityW<::GlobalNamespace::PropHome>  value) ;

constexpr void __cordl_internal_set_propReference(::GlobalNamespace::PeckPropReference  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectSavableHome() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectSavableHome", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectSavableHome(PeckEffectSavableHome && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectSavableHome", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectSavableHome(PeckEffectSavableHome const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5411};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field propReference, offset: 0x48, size: 0x38, def value: None
 ::GlobalNamespace::PeckPropReference  ___propReference;

/// @brief Field propHome, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  ___propHome;

/// @brief Field logVerbose, offset: 0x88, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectSavableHome, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectSavableHome, ___propReference) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectSavableHome, ___propHome) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectSavableHome, ___logVerbose) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectSavableHome) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
