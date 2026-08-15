#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Layer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
CORDL_MODULE_EXPORT(Layer)
// Forward declare root types
namespace WaveHarmonic::Crest {
class Layer;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Layer*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Layer*, "WaveHarmonic.Crest", "Layer");
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Layer
class CORDL_TYPE Layer : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
static inline ::WaveHarmonic::Crest::Layer* New_ctor() ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Layer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Layer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Layer(Layer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Layer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Layer(Layer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20085};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Layer) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
