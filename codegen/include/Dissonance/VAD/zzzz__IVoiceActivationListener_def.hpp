#pragma once
// IWYU pragma private; include "Dissonance/VAD/IVoiceActivationListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVoiceActivationListener)
// Forward declare root types
namespace Dissonance::VAD {
class IVoiceActivationListener;
}
// Write type traits
MARK_REF_T(::Dissonance::VAD::IVoiceActivationListener*);
DEFINE_IL2CPP_CLASS(::Dissonance::VAD::IVoiceActivationListener*, "Dissonance.VAD", "IVoiceActivationListener");
// Dependencies 
namespace Dissonance::VAD {
// Is value type: false
// CS Name: Dissonance.VAD.IVoiceActivationListener
class CORDL_TYPE IVoiceActivationListener {
public:
// Declarations
/// @brief Method VoiceActivationStart, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void VoiceActivationStart() ;

/// @brief Method VoiceActivationStop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void VoiceActivationStop() ;

// Ctor Parameters [CppParam { name: "", ty: "IVoiceActivationListener", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVoiceActivationListener(IVoiceActivationListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16856};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::VAD
