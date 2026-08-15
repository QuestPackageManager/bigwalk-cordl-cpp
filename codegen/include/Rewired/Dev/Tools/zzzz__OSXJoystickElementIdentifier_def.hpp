#pragma once
// IWYU pragma private; include "Rewired/Dev/Tools/OSXJoystickElementIdentifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OSXJoystickElementIdentifier)
namespace Rewired::Interfaces {
class IElementIdentifierTool;
}
// Forward declare root types
namespace Rewired::Dev::Tools {
class OSXJoystickElementIdentifier;
}
// Write type traits
MARK_REF_T(::Rewired::Dev::Tools::OSXJoystickElementIdentifier*);
DEFINE_IL2CPP_CLASS(::Rewired::Dev::Tools::OSXJoystickElementIdentifier*, "Rewired.Dev.Tools", "OSXJoystickElementIdentifier");
// Dependencies UnityEngine.MonoBehaviour
namespace Rewired::Dev::Tools {
// Is value type: false
// CS Name: Rewired.Dev.Tools.OSXJoystickElementIdentifier
class CORDL_TYPE OSXJoystickElementIdentifier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field jaUGkneIjYpycSUMOcuxfgyBOoGLc, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_jaUGkneIjYpycSUMOcuxfgyBOoGLc, put=__cordl_internal_set_jaUGkneIjYpycSUMOcuxfgyBOoGLc)) ::Rewired::Interfaces::IElementIdentifierTool*  jaUGkneIjYpycSUMOcuxfgyBOoGLc;

/// @brief Method Awake, addr 0x18195a5f0, size 0x1d0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Rewired::Dev::Tools::OSXJoystickElementIdentifier* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18195a090, size 0x40, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x18195a0d0, size 0x20, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x18195a0f0, size 0x20, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Rewired::Interfaces::IElementIdentifierTool* const& __cordl_internal_get_jaUGkneIjYpycSUMOcuxfgyBOoGLc() const;

constexpr ::Rewired::Interfaces::IElementIdentifierTool*& __cordl_internal_get_jaUGkneIjYpycSUMOcuxfgyBOoGLc() ;

constexpr void __cordl_internal_set_jaUGkneIjYpycSUMOcuxfgyBOoGLc(::Rewired::Interfaces::IElementIdentifierTool*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method lxFneLpPLrICAaCMSLiyTvoYRefSA, addr 0x18195a110, size 0x80, virtual false, abstract: false, final false
inline bool lxFneLpPLrICAaCMSLiyTvoYRefSA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OSXJoystickElementIdentifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OSXJoystickElementIdentifier", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OSXJoystickElementIdentifier(OSXJoystickElementIdentifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OSXJoystickElementIdentifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OSXJoystickElementIdentifier(OSXJoystickElementIdentifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3103};

/// @brief Field jaUGkneIjYpycSUMOcuxfgyBOoGLc, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Interfaces::IElementIdentifierTool*  ___jaUGkneIjYpycSUMOcuxfgyBOoGLc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Dev::Tools::OSXJoystickElementIdentifier, ___jaUGkneIjYpycSUMOcuxfgyBOoGLc) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Dev::Tools::OSXJoystickElementIdentifier) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Dev::Tools
