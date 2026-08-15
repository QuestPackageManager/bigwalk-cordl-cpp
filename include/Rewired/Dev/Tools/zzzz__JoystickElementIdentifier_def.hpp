#pragma once
// IWYU pragma private; include "Rewired/Dev/Tools/JoystickElementIdentifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(JoystickElementIdentifier)
namespace Rewired::Interfaces {
class IElementIdentifierTool;
}
// Forward declare root types
namespace Rewired::Dev::Tools {
class JoystickElementIdentifier;
}
// Write type traits
MARK_REF_T(::Rewired::Dev::Tools::JoystickElementIdentifier*);
DEFINE_IL2CPP_CLASS(::Rewired::Dev::Tools::JoystickElementIdentifier*, "Rewired.Dev.Tools", "JoystickElementIdentifier");
// Dependencies UnityEngine.MonoBehaviour
namespace Rewired::Dev::Tools {
// Is value type: false
// CS Name: Rewired.Dev.Tools.JoystickElementIdentifier
class CORDL_TYPE JoystickElementIdentifier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field QLCNseWBlicyXnSsPFDyxHMKOCJx, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_QLCNseWBlicyXnSsPFDyxHMKOCJx, put=__cordl_internal_set_QLCNseWBlicyXnSsPFDyxHMKOCJx)) ::Rewired::Interfaces::IElementIdentifierTool*  QLCNseWBlicyXnSsPFDyxHMKOCJx;

/// @brief Method Awake, addr 0x18195a190, size 0x3f0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Rewired::Dev::Tools::JoystickElementIdentifier* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18195a090, size 0x40, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x18195a0d0, size 0x20, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x18195a0f0, size 0x20, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Rewired::Interfaces::IElementIdentifierTool* const& __cordl_internal_get_QLCNseWBlicyXnSsPFDyxHMKOCJx() const;

constexpr ::Rewired::Interfaces::IElementIdentifierTool*& __cordl_internal_get_QLCNseWBlicyXnSsPFDyxHMKOCJx() ;

constexpr void __cordl_internal_set_QLCNseWBlicyXnSsPFDyxHMKOCJx(::Rewired::Interfaces::IElementIdentifierTool*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method meJWGVaDfOGZoBDkbiZuQFOJQupA, addr 0x18195a580, size 0x70, virtual false, abstract: false, final false
inline bool meJWGVaDfOGZoBDkbiZuQFOJQupA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoystickElementIdentifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoystickElementIdentifier", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JoystickElementIdentifier(JoystickElementIdentifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoystickElementIdentifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoystickElementIdentifier(JoystickElementIdentifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3102};

/// @brief Field QLCNseWBlicyXnSsPFDyxHMKOCJx, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Interfaces::IElementIdentifierTool*  ___QLCNseWBlicyXnSsPFDyxHMKOCJx;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Dev::Tools::JoystickElementIdentifier, ___QLCNseWBlicyXnSsPFDyxHMKOCJx) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Dev::Tools::JoystickElementIdentifier) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Dev::Tools
