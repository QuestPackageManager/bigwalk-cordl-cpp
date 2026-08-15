#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckLogicRadioListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PeckLogicRadioListener)
namespace GlobalNamespace {
class RadioVoiceAssigner;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckLogicRadioListener;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckLogicRadioListener*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckLogicRadioListener*, "", "PeckLogicRadioListener");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckLogicRadioListener
class CORDL_TYPE PeckLogicRadioListener : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field outputSystem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputSystem, put=__cordl_internal_set_outputSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  outputSystem;

/// @brief Field thisRadio, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_thisRadio, put=__cordl_internal_set_thisRadio)) ::UnityW<::GlobalNamespace::RadioVoiceAssigner>  thisRadio;

/// @brief Method Awake, addr 0x180450a60, size 0xf0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckLogicRadioListener* New_ctor() ;

/// @brief Method OnChange, addr 0x180450b50, size 0x1e0, virtual false, abstract: false, final false
inline void OnChange(::GlobalNamespace::RadioVoiceAssigner*  changedAssigner) ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_outputSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_outputSystem() ;

constexpr ::UnityW<::GlobalNamespace::RadioVoiceAssigner> const& __cordl_internal_get_thisRadio() const;

constexpr ::UnityW<::GlobalNamespace::RadioVoiceAssigner>& __cordl_internal_get_thisRadio() ;

constexpr void __cordl_internal_set_outputSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_thisRadio(::UnityW<::GlobalNamespace::RadioVoiceAssigner>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckLogicRadioListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckLogicRadioListener", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckLogicRadioListener(PeckLogicRadioListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckLogicRadioListener", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckLogicRadioListener(PeckLogicRadioListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5425};

/// @brief Field outputSystem, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___outputSystem;

/// @brief Field thisRadio, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RadioVoiceAssigner>  ___thisRadio;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckLogicRadioListener, ___outputSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckLogicRadioListener, ___thisRadio) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckLogicRadioListener) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
