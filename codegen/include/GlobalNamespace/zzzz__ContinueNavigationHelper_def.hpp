#pragma once
// IWYU pragma private; include "GlobalNamespace/ContinueNavigationHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ContinueNavigationHelper)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class ContinueNavigationHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ContinueNavigationHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContinueNavigationHelper*, "", "ContinueNavigationHelper");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ContinueNavigationHelper
class CORDL_TYPE ContinueNavigationHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field unselectedContinue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_unselectedContinue, put=__cordl_internal_set_unselectedContinue)) ::UnityEngine::Events::UnityEvent*  unselectedContinue;

static inline ::GlobalNamespace::ContinueNavigationHelper* New_ctor() ;

/// @brief Method Update, addr 0x18041e660, size 0x200, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_unselectedContinue() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_unselectedContinue() ;

constexpr void __cordl_internal_set_unselectedContinue(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContinueNavigationHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContinueNavigationHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinueNavigationHelper(ContinueNavigationHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinueNavigationHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinueNavigationHelper(ContinueNavigationHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5222};

/// @brief Field unselectedContinue, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___unselectedContinue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContinueNavigationHelper, ___unselectedContinue) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContinueNavigationHelper) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
