#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/HelpURL.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HelpURL)
// Forward declare root types
namespace WaveHarmonic::Crest {
class HelpURL;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::HelpURL*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::HelpURL*, "WaveHarmonic.Crest", "HelpURL");
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.HelpURL
class CORDL_TYPE HelpURL : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
static inline ::WaveHarmonic::Crest::HelpURL* New_ctor(::StringW  path) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::StringW  path) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HelpURL() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelpURL", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelpURL(HelpURL && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelpURL", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelpURL(HelpURL const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20118};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::HelpURL) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
