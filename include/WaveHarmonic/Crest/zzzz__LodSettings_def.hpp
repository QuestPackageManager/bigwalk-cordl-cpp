#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LodSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Internal/zzzz__CustomScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(LodSettings)
// Forward declare root types
namespace WaveHarmonic::Crest {
class LodSettings;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::LodSettings*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::LodSettings*, "WaveHarmonic.Crest", "LodSettings");
// Dependencies WaveHarmonic.Crest.Internal.CustomScriptableObject
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.LodSettings
class CORDL_TYPE LodSettings : public ::WaveHarmonic::Crest::Internal::CustomScriptableObject {
public:
// Declarations
static inline ::WaveHarmonic::Crest::LodSettings* New_ctor() ;

/// @brief Method .ctor, addr 0x182552740, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LodSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LodSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LodSettings(LodSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LodSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LodSettings(LodSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16630};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::LodSettings) == 0x20, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
