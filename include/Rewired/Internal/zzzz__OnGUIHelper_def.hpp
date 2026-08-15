#pragma once
// IWYU pragma private; include "Rewired/Internal/OnGUIHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OnGUIHelper)
namespace Rewired {
class InputManager_Base;
}
// Forward declare root types
namespace Rewired::Internal {
class OnGUIHelper;
}
// Write type traits
MARK_REF_T(::Rewired::Internal::OnGUIHelper*);
DEFINE_IL2CPP_CLASS(::Rewired::Internal::OnGUIHelper*, "Rewired.Internal", "OnGUIHelper");
// Dependencies UnityEngine.MonoBehaviour
namespace Rewired::Internal {
// Is value type: false
// CS Name: Rewired.Internal.OnGUIHelper
class CORDL_TYPE OnGUIHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field KpnNGsKLWUAxqlRFpIcLAvJVpshfA, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_KpnNGsKLWUAxqlRFpIcLAvJVpshfA, put=__cordl_internal_set_KpnNGsKLWUAxqlRFpIcLAvJVpshfA)) ::UnityW<::Rewired::InputManager_Base>  KpnNGsKLWUAxqlRFpIcLAvJVpshfA;

/// @brief Method Awake, addr 0x1818f3a80, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Rewired::Internal::OnGUIHelper* New_ctor() ;

/// @brief Method OnGUI, addr 0x1818f3ab0, size 0x40, virtual false, abstract: false, final false
inline void OnGUI() ;

constexpr ::UnityW<::Rewired::InputManager_Base> const& __cordl_internal_get_KpnNGsKLWUAxqlRFpIcLAvJVpshfA() const;

constexpr ::UnityW<::Rewired::InputManager_Base>& __cordl_internal_get_KpnNGsKLWUAxqlRFpIcLAvJVpshfA() ;

constexpr void __cordl_internal_set_KpnNGsKLWUAxqlRFpIcLAvJVpshfA(::UnityW<::Rewired::InputManager_Base>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnGUIHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnGUIHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnGUIHelper(OnGUIHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnGUIHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnGUIHelper(OnGUIHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2818};

/// @brief Field KpnNGsKLWUAxqlRFpIcLAvJVpshfA, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Rewired::InputManager_Base>  ___KpnNGsKLWUAxqlRFpIcLAvJVpshfA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Internal::OnGUIHelper, ___KpnNGsKLWUAxqlRFpIcLAvJVpshfA) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Internal::OnGUIHelper) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Internal
