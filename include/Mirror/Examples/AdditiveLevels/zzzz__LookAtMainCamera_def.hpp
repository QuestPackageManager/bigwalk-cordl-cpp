#pragma once
// IWYU pragma private; include "Mirror/Examples/AdditiveLevels/LookAtMainCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LookAtMainCamera)
// Forward declare root types
namespace Mirror::Examples::AdditiveLevels {
class LookAtMainCamera;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::AdditiveLevels::LookAtMainCamera*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveLevels::LookAtMainCamera*, "Mirror.Examples.AdditiveLevels", "LookAtMainCamera");
// Dependencies UnityEngine.MonoBehaviour
namespace Mirror::Examples::AdditiveLevels {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveLevels.LookAtMainCamera
class CORDL_TYPE LookAtMainCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method LateUpdate, addr 0x18156aae0, size 0x80, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Mirror::Examples::AdditiveLevels::LookAtMainCamera* New_ctor() ;

/// @brief Method OnValidate, addr 0x1803d4fc0, size 0x10, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LookAtMainCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LookAtMainCamera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LookAtMainCamera(LookAtMainCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LookAtMainCamera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LookAtMainCamera(LookAtMainCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19366};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::Examples::AdditiveLevels::LookAtMainCamera) == 0x20, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveLevels
