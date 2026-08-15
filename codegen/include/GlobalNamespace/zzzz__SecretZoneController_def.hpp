#pragma once
// IWYU pragma private; include "GlobalNamespace/SecretZoneController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SecretZoneController)
// Forward declare root types
namespace GlobalNamespace {
class SecretZoneController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SecretZoneController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SecretZoneController*, "", "SecretZoneController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SecretZoneController
class CORDL_TYPE SecretZoneController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x180428700, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SecretZoneController* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecretZoneController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecretZoneController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SecretZoneController(SecretZoneController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecretZoneController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecretZoneController(SecretZoneController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5194};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SecretZoneController) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
