#pragma once
// IWYU pragma private; include "GlobalNamespace/SpinnerSetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AnimSpinner_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SpinnerSetter)
namespace GlobalNamespace {
struct PeckContext;
}
// Forward declare root types
namespace GlobalNamespace {
class SpinnerSetter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpinnerSetter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpinnerSetter*, "", "SpinnerSetter");
// Dependencies AnimSpinner, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpinnerSetter
class CORDL_TYPE SpinnerSetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animSpinners, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_animSpinners, put=__cordl_internal_set_animSpinners)) ::ArrayW<::UnityW<::GlobalNamespace::AnimSpinner>>  animSpinners;

/// @brief Field logVerbose, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field peckSystem, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystem, put=__cordl_internal_set_peckSystem)) ::GlobalNamespace::PeckSystemReference  peckSystem;

/// @brief Method Awake, addr 0x180408da0, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SpinnerSetter* New_ctor() ;

/// @brief Method Peck, addr 0x180408e10, size 0x140, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AnimSpinner>> const& __cordl_internal_get_animSpinners() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AnimSpinner>>& __cordl_internal_get_animSpinners() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystem() ;

constexpr void __cordl_internal_set_animSpinners(::ArrayW<::UnityW<::GlobalNamespace::AnimSpinner>>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_peckSystem(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpinnerSetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpinnerSetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpinnerSetter(SpinnerSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpinnerSetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpinnerSetter(SpinnerSetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5023};

/// @brief Field peckSystem, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystem;

/// @brief Field animSpinners, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::AnimSpinner>>  ___animSpinners;

/// @brief Field logVerbose, offset: 0x50, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpinnerSetter, ___peckSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinnerSetter, ___animSpinners) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinnerSetter, ___logVerbose) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpinnerSetter) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
