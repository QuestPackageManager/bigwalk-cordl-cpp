#pragma once
// IWYU pragma private; include "Mirror/Examples/Tanks/FaceCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FaceCamera)
// Forward declare root types
namespace Mirror::Examples::Tanks {
class FaceCamera;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Tanks::FaceCamera*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Tanks::FaceCamera*, "Mirror.Examples.Tanks", "FaceCamera");
// Dependencies UnityEngine.MonoBehaviour
namespace Mirror::Examples::Tanks {
// Is value type: false
// CS Name: Mirror.Examples.Tanks.FaceCamera
class CORDL_TYPE FaceCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method LateUpdate, addr 0x18155a330, size 0x70, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Mirror::Examples::Tanks::FaceCamera* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FaceCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FaceCamera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FaceCamera(FaceCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FaceCamera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FaceCamera(FaceCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19273};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::Examples::Tanks::FaceCamera) == 0x20, "Size mismatch!");

} // namespace end def Mirror::Examples::Tanks
