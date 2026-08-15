#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectBlockSwitch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PeckEffectBlockSwitch)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckSwitch;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectBlockSwitch;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectBlockSwitch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectBlockSwitch*, "", "PeckEffectBlockSwitch");
// Dependencies PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectBlockSwitch
class CORDL_TYPE PeckEffectBlockSwitch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field blockedPerState, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockedPerState, put=__cordl_internal_set_blockedPerState)) ::ArrayW<bool>  blockedPerState;

/// @brief Field isBlocking, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBlocking, put=__cordl_internal_set_isBlocking)) bool  isBlocking;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Field target, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::GlobalNamespace::PeckSwitch>  target;

/// @brief Method Awake, addr 0x1804486c0, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectBlockSwitch* New_ctor() ;

/// @brief Method Peck, addr 0x180448760, size 0xe0, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_blockedPerState() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_blockedPerState() ;

constexpr bool const& __cordl_internal_get_isBlocking() const;

constexpr bool& __cordl_internal_get_isBlocking() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_blockedPerState(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_isBlocking(bool  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectBlockSwitch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectBlockSwitch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectBlockSwitch(PeckEffectBlockSwitch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectBlockSwitch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectBlockSwitch(PeckEffectBlockSwitch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5369};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field target, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___target;

/// @brief Field blockedPerState, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<bool>  ___blockedPerState;

/// @brief Field isBlocking, offset: 0x58, size: 0x1, def value: None
 bool  ___isBlocking;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectBlockSwitch, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectBlockSwitch, ___target) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectBlockSwitch, ___blockedPerState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectBlockSwitch, ___isBlocking) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectBlockSwitch) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
