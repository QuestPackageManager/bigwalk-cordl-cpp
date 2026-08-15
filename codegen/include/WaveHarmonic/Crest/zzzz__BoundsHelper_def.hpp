#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/BoundsHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BoundsHelper)
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class BoundsHelper;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::BoundsHelper*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::BoundsHelper*, "WaveHarmonic.Crest", "BoundsHelper");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.BoundsHelper
class CORDL_TYPE BoundsHelper : public ::System::Object {
public:
// Declarations
/// @brief Method DebugDraw, addr 0x18259dc20, size 0x310, virtual false, abstract: false, final false
static inline void DebugDraw(::UnityEngine::Bounds  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoundsHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoundsHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BoundsHelper(BoundsHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoundsHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoundsHelper(BoundsHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16696};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::BoundsHelper) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
