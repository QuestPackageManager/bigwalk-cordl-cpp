#pragma once
// IWYU pragma private; include "GlobalNamespace/BackNavigationHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BackNavigationHelper)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class BackNavigationHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BackNavigationHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BackNavigationHelper*, "", "BackNavigationHelper");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BackNavigationHelper
class CORDL_TYPE BackNavigationHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field unselectedBack, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_unselectedBack, put=__cordl_internal_set_unselectedBack)) ::UnityEngine::Events::UnityEvent*  unselectedBack;

static inline ::GlobalNamespace::BackNavigationHelper* New_ctor() ;

/// @brief Method Update, addr 0x18041d2f0, size 0x200, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_unselectedBack() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_unselectedBack() ;

constexpr void __cordl_internal_set_unselectedBack(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BackNavigationHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BackNavigationHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BackNavigationHelper(BackNavigationHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BackNavigationHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BackNavigationHelper(BackNavigationHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5221};

/// @brief Field unselectedBack, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___unselectedBack;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BackNavigationHelper, ___unselectedBack) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BackNavigationHelper) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
