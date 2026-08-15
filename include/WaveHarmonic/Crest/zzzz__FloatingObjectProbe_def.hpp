#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FloatingObjectProbe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(FloatingObjectProbe)
// Forward declare root types
namespace WaveHarmonic::Crest {
struct FloatingObjectProbe;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::FloatingObjectProbe);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::FloatingObjectProbe, "WaveHarmonic.Crest", "FloatingObjectProbe");
// Dependencies UnityEngine.Vector3
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.FloatingObjectProbe
struct CORDL_TYPE FloatingObjectProbe {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FloatingObjectProbe() ;

// Ctor Parameters [CppParam { name: "_Weight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr FloatingObjectProbe(float_t  _Weight, ::UnityEngine::Vector3  _Position) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16679};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _Weight, offset: 0x0, size: 0x4, def value: None
 float_t  _Weight;

/// @brief Field _Position, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  _Position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::FloatingObjectProbe, _Weight) == 0x0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FloatingObjectProbe, _Position) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::FloatingObjectProbe) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
