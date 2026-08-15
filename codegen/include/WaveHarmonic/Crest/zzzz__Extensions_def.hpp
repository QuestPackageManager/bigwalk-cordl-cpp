#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Extensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Extensions)
namespace WaveHarmonic::Crest {
struct CollisionLayer;
}
namespace WaveHarmonic::Crest {
struct CollisionLayers;
}
namespace WaveHarmonic::Crest {
class ICollisionProvider;
}
namespace WaveHarmonic::Crest {
class IQueryProvider;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class Extensions;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Extensions*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Extensions*, "WaveHarmonic.Crest", "Extensions");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Extensions
class CORDL_TYPE Extensions : public ::System::Object {
public:
// Declarations
/// @brief Method CleanUp, addr 0x182575220, size 0x40, virtual false, abstract: false, final false
static inline void CleanUp(::WaveHarmonic::Crest::ICollisionProvider*  self) ;

/// @brief Method CleanUp, addr 0x182575220, size 0x40, virtual false, abstract: false, final false
static inline void CleanUp(::WaveHarmonic::Crest::IQueryProvider*  self) ;

/// @brief Method SendReadBack, addr 0x182575260, size 0x140, virtual false, abstract: false, final false
static inline void SendReadBack(::WaveHarmonic::Crest::ICollisionProvider*  self, ::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::CollisionLayers  layer) ;

/// @brief Method UpdateQueries, addr 0x1825754f0, size 0x40, virtual false, abstract: false, final false
static inline void UpdateQueries(::WaveHarmonic::Crest::ICollisionProvider*  self, ::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method UpdateQueries, addr 0x1825753a0, size 0x150, virtual false, abstract: false, final false
static inline void UpdateQueries(::WaveHarmonic::Crest::ICollisionProvider*  self, ::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::CollisionLayer  layer) ;

/// @brief Method UpdateQueries, addr 0x1825754f0, size 0x40, virtual false, abstract: false, final false
static inline void UpdateQueries(::WaveHarmonic::Crest::IQueryProvider*  self, ::WaveHarmonic::Crest::WaterRenderer*  water) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Extensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Extensions(Extensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Extensions(Extensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16596};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Extensions) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
