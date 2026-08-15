#pragma once
// IWYU pragma private; include "Dissonance/Integrations/MirrorIgnorance/Demo/MirrorIgnorancePlayerController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MirrorIgnorancePlayerController)
// Forward declare root types
namespace Dissonance::Integrations::MirrorIgnorance::Demo {
class MirrorIgnorancePlayerController;
}
// Write type traits
MARK_REF_T(::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController*);
DEFINE_IL2CPP_CLASS(::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController*, "Dissonance.Integrations.MirrorIgnorance.Demo", "MirrorIgnorancePlayerController");
// Dependencies Mirror.NetworkBehaviour
namespace Dissonance::Integrations::MirrorIgnorance::Demo {
// Is value type: false
// CS Name: Dissonance.Integrations.MirrorIgnorance.Demo.MirrorIgnorancePlayerController
class CORDL_TYPE MirrorIgnorancePlayerController : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController* New_ctor() ;

/// @brief Method Update, addr 0x1803ce670, size 0x200, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MirrorIgnorancePlayerController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MirrorIgnorancePlayerController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MirrorIgnorancePlayerController(MirrorIgnorancePlayerController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MirrorIgnorancePlayerController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MirrorIgnorancePlayerController(MirrorIgnorancePlayerController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5826};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Integrations::MirrorIgnorance::Demo::MirrorIgnorancePlayerController) == 0x68, "Size mismatch!");

} // namespace end def Dissonance::Integrations::MirrorIgnorance::Demo
