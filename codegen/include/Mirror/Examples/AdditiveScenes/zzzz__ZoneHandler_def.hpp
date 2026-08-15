#pragma once
// IWYU pragma private; include "Mirror/Examples/AdditiveScenes/ZoneHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ZoneHandler)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace Mirror::Examples::AdditiveScenes {
class ZoneHandler;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::AdditiveScenes::ZoneHandler*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveScenes::ZoneHandler*, "Mirror.Examples.AdditiveScenes", "ZoneHandler");
// Dependencies UnityEngine.MonoBehaviour
namespace Mirror::Examples::AdditiveScenes {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveScenes.ZoneHandler
class CORDL_TYPE ZoneHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field subScene, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_subScene, put=__cordl_internal_set_subScene)) ::StringW  subScene;

static inline ::Mirror::Examples::AdditiveScenes::ZoneHandler* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x18156c7c0, size 0xf0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x18156c8b0, size 0x280, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::StringW const& __cordl_internal_get_subScene() const;

constexpr ::StringW& __cordl_internal_get_subScene() ;

constexpr void __cordl_internal_set_subScene(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneHandler(ZoneHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneHandler(ZoneHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19357};

/// @brief Field subScene, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___subScene;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveScenes::ZoneHandler, ___subScene) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveScenes::ZoneHandler) == 0x28, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveScenes
