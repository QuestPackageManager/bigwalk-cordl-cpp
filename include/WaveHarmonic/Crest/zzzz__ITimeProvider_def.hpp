#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ITimeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ITimeProvider)
// Forward declare root types
namespace WaveHarmonic::Crest {
class ITimeProvider;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::ITimeProvider*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ITimeProvider*, "WaveHarmonic.Crest", "ITimeProvider");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ITimeProvider
class CORDL_TYPE ITimeProvider {
public:
// Declarations
 __declspec(property(get=get_Delta)) float_t  Delta;

 __declspec(property(get=get_Time)) float_t  Time;

/// @brief Method get_Delta, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Delta() ;

/// @brief Method get_Time, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Time() ;

// Ctor Parameters [CppParam { name: "", ty: "ITimeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITimeProvider(ITimeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16700};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest
