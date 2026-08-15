#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Watercraft/Control.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Internal/zzzz__CustomBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Control)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Watercraft {
class Control;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Watercraft::Control*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Watercraft::Control*, "WaveHarmonic.Crest.Watercraft", "Control");
// Dependencies WaveHarmonic.Crest.Internal.CustomBehaviour
namespace WaveHarmonic::Crest::Watercraft {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Watercraft.Control
class CORDL_TYPE Control : public ::WaveHarmonic::Crest::Internal::CustomBehaviour {
public:
// Declarations
 __declspec(property(get=get_Input)) ::UnityEngine::Vector3  Input;

static inline ::WaveHarmonic::Crest::Watercraft::Control* New_ctor() ;

/// @brief Method .ctor, addr 0x180ba5300, size 0x4b0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Input, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_Input() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Control() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Control", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Control(Control && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Control", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Control(Control const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16757};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Watercraft::Control) == 0x28, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Watercraft
