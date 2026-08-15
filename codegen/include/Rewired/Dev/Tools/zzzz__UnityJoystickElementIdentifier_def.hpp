#pragma once
// IWYU pragma private; include "Rewired/Dev/Tools/UnityJoystickElementIdentifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(UnityJoystickElementIdentifier)
namespace Rewired::Interfaces {
class IElementIdentifierTool;
}
// Forward declare root types
namespace Rewired::Dev::Tools {
class UnityJoystickElementIdentifier;
}
// Write type traits
MARK_REF_T(::Rewired::Dev::Tools::UnityJoystickElementIdentifier*);
DEFINE_IL2CPP_CLASS(::Rewired::Dev::Tools::UnityJoystickElementIdentifier*, "Rewired.Dev.Tools", "UnityJoystickElementIdentifier");
// Dependencies UnityEngine.MonoBehaviour
namespace Rewired::Dev::Tools {
// Is value type: false
// CS Name: Rewired.Dev.Tools.UnityJoystickElementIdentifier
class CORDL_TYPE UnityJoystickElementIdentifier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field NbOyTFoblctIavrXHANHjFvzgUGH, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_NbOyTFoblctIavrXHANHjFvzgUGH, put=__cordl_internal_set_NbOyTFoblctIavrXHANHjFvzgUGH)) ::Rewired::Interfaces::IElementIdentifierTool*  NbOyTFoblctIavrXHANHjFvzgUGH;

/// @brief Method Awake, addr 0x18195aa10, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Rewired::Dev::Tools::UnityJoystickElementIdentifier* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18195aa90, size 0x30, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x18195aac0, size 0x30, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x18195aaf0, size 0x30, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Rewired::Interfaces::IElementIdentifierTool* const& __cordl_internal_get_NbOyTFoblctIavrXHANHjFvzgUGH() const;

constexpr ::Rewired::Interfaces::IElementIdentifierTool*& __cordl_internal_get_NbOyTFoblctIavrXHANHjFvzgUGH() ;

constexpr void __cordl_internal_set_NbOyTFoblctIavrXHANHjFvzgUGH(::Rewired::Interfaces::IElementIdentifierTool*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityJoystickElementIdentifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityJoystickElementIdentifier", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityJoystickElementIdentifier(UnityJoystickElementIdentifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityJoystickElementIdentifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityJoystickElementIdentifier(UnityJoystickElementIdentifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3105};

/// @brief Field NbOyTFoblctIavrXHANHjFvzgUGH, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Interfaces::IElementIdentifierTool*  ___NbOyTFoblctIavrXHANHjFvzgUGH;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Dev::Tools::UnityJoystickElementIdentifier, ___NbOyTFoblctIavrXHANHjFvzgUGH) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Dev::Tools::UnityJoystickElementIdentifier) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Dev::Tools
