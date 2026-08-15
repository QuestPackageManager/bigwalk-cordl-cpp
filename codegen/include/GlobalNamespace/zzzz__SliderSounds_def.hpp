#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderSounds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ButtonSounds_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SliderSounds)
namespace GlobalNamespace {
class AudioAsset;
}
namespace UnityEngine::UI {
class Slider;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderSounds;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SliderSounds*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SliderSounds*, "", "SliderSounds");
// Dependencies ButtonSounds
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderSounds
class CORDL_TYPE SliderSounds : public ::GlobalNamespace::ButtonSounds {
public:
// Declarations
/// @brief Field Change, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Change, put=__cordl_internal_set_Change)) ::UnityW<::GlobalNamespace::AudioAsset>  Change;

/// @brief Field Slider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Slider, put=__cordl_internal_set_Slider)) ::UnityW<::UnityEngine::UI::Slider>  Slider;

/// @brief Field _initialized, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Method Awake, addr 0x1803deaa0, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SliderSounds* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803deaf0, size 0x80, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803deb70, size 0x90, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValueChanged, addr 0x1803dec00, size 0x90, virtual false, abstract: false, final false
inline void OnValueChanged(float_t  val) ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Change() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Change() ;

constexpr ::UnityW<::UnityEngine::UI::Slider> const& __cordl_internal_get_Slider() const;

constexpr ::UnityW<::UnityEngine::UI::Slider>& __cordl_internal_get_Slider() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr void __cordl_internal_set_Change(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_Slider(::UnityW<::UnityEngine::UI::Slider>  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SliderSounds() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SliderSounds", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SliderSounds(SliderSounds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SliderSounds", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SliderSounds(SliderSounds const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4870};

/// @brief Field Slider, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Slider>  ___Slider;

/// @brief Field Change, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Change;

/// @brief Field _initialized, offset: 0x50, size: 0x1, def value: None
 bool  ____initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderSounds, ___Slider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSounds, ___Change) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSounds, ____initialized) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SliderSounds) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
