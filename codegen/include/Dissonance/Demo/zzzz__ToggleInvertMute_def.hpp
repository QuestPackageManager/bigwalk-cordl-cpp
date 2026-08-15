#pragma once
// IWYU pragma private; include "Dissonance/Demo/ToggleInvertMute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ToggleInvertMute)
namespace Dissonance {
class VoiceBroadcastTrigger;
}
// Forward declare root types
namespace Dissonance::Demo {
class ToggleInvertMute;
}
// Write type traits
MARK_REF_T(::Dissonance::Demo::ToggleInvertMute*);
DEFINE_IL2CPP_CLASS(::Dissonance::Demo::ToggleInvertMute*, "Dissonance.Demo", "ToggleInvertMute");
// Dependencies UnityEngine.MonoBehaviour
namespace Dissonance::Demo {
// Is value type: false
// CS Name: Dissonance.Demo.ToggleInvertMute
class CORDL_TYPE ToggleInvertMute : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(put=set_IsUnmuted)) bool  IsUnmuted;

/// @brief Field Trigger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Trigger, put=__cordl_internal_set_Trigger)) ::UnityW<::Dissonance::VoiceBroadcastTrigger>  Trigger;

static inline ::Dissonance::Demo::ToggleInvertMute* New_ctor() ;

constexpr ::UnityW<::Dissonance::VoiceBroadcastTrigger> const& __cordl_internal_get_Trigger() const;

constexpr ::UnityW<::Dissonance::VoiceBroadcastTrigger>& __cordl_internal_get_Trigger() ;

constexpr void __cordl_internal_set_Trigger(::UnityW<::Dissonance::VoiceBroadcastTrigger>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_IsUnmuted, addr 0x1805d18a0, size 0x70, virtual false, abstract: false, final false
inline void set_IsUnmuted(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleInvertMute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleInvertMute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleInvertMute(ToggleInvertMute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleInvertMute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleInvertMute(ToggleInvertMute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16853};

/// @brief Field Trigger, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Dissonance::VoiceBroadcastTrigger>  ___Trigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Demo::ToggleInvertMute, ___Trigger) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Demo::ToggleInvertMute) == 0x28, "Size mismatch!");

} // namespace end def Dissonance::Demo
