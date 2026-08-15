#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Portals/PortalRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PortalRenderer)
// Forward declare root types
namespace WaveHarmonic::Crest::Portals {
class PortalRenderer;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Portals::PortalRenderer*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Portals::PortalRenderer*, "WaveHarmonic.Crest.Portals", "PortalRenderer");
// Dependencies System.Object
namespace WaveHarmonic::Crest::Portals {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Portals.PortalRenderer
class CORDL_TYPE PortalRenderer : public ::System::Object {
public:
// Declarations
static inline ::WaveHarmonic::Crest::Portals::PortalRenderer* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PortalRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PortalRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PortalRenderer(PortalRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PortalRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PortalRenderer(PortalRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16730};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Portals::PortalRenderer) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Portals
