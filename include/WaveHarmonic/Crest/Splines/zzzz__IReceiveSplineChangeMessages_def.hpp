#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/IReceiveSplineChangeMessages.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IReceiveSplineChangeMessages)
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class IReceiveSplineChangeMessages;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages*, "WaveHarmonic.Crest.Splines", "IReceiveSplineChangeMessages");
// Dependencies 
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.IReceiveSplineChangeMessages
class CORDL_TYPE IReceiveSplineChangeMessages {
public:
// Declarations
/// @brief Method OnSplineChange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnSplineChange() ;

// Ctor Parameters [CppParam { name: "", ty: "IReceiveSplineChangeMessages", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IReceiveSplineChangeMessages(IReceiveSplineChangeMessages const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21096};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest::Splines
