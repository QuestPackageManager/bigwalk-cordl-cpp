#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuScreenSubmit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MenuScreenSubmit)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuScreenSubmit;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MenuScreenSubmit*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenuScreenSubmit*, "", "MenuScreenSubmit");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuScreenSubmit
class CORDL_TYPE MenuScreenSubmit : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field logVerbose, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field submitAction, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_submitAction, put=__cordl_internal_set_submitAction)) ::UnityEngine::Events::UnityEvent*  submitAction;

/// @brief Field unselectedOnly, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_unselectedOnly, put=__cordl_internal_set_unselectedOnly)) bool  unselectedOnly;

static inline ::GlobalNamespace::MenuScreenSubmit* New_ctor() ;

/// @brief Method Update, addr 0x180425310, size 0x140, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_submitAction() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_submitAction() ;

constexpr bool const& __cordl_internal_get_unselectedOnly() const;

constexpr bool& __cordl_internal_get_unselectedOnly() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_submitAction(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_unselectedOnly(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MenuScreenSubmit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MenuScreenSubmit", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MenuScreenSubmit(MenuScreenSubmit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MenuScreenSubmit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MenuScreenSubmit(MenuScreenSubmit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5234};

/// @brief Field submitAction, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___submitAction;

/// @brief Field unselectedOnly, offset: 0x28, size: 0x1, def value: None
 bool  ___unselectedOnly;

/// @brief Field logVerbose, offset: 0x29, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuScreenSubmit, ___submitAction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuScreenSubmit, ___unselectedOnly) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuScreenSubmit, ___logVerbose) == 0x29, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MenuScreenSubmit) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
