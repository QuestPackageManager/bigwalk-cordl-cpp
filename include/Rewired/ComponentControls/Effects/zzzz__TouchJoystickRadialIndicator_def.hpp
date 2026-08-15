#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/Effects/TouchJoystickRadialIndicator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TouchJoystickRadialIndicator)
namespace Rewired::ComponentControls::Effects {
class TouchJoystickAngleIndicator;
}
namespace Rewired::Utils::Interfaces {
template<typename T>
class IRegistrar_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Rewired::ComponentControls::Effects {
class TouchJoystickRadialIndicator;
}
// Write type traits
MARK_REF_T(::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*, "Rewired.ComponentControls.Effects", "TouchJoystickRadialIndicator");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace Rewired::ComponentControls::Effects {
// Is value type: false
// CS Name: Rewired.ComponentControls.Effects.TouchJoystickRadialIndicator
class CORDL_TYPE TouchJoystickRadialIndicator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field QJHCIoZOlmnqJvHgSBGcHCmCsGOlA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_QJHCIoZOlmnqJvHgSBGcHCmCsGOlA, put=setStaticF_QJHCIoZOlmnqJvHgSBGcHCmCsGOlA)) ::UnityEngine::Vector2  QJHCIoZOlmnqJvHgSBGcHCmCsGOlA;

/// @brief Field _aspectRatioX, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__aspectRatioX, put=__cordl_internal_set__aspectRatioX)) float_t  _aspectRatioX;

/// @brief Field _aspectRatioY, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__aspectRatioY, put=__cordl_internal_set__aspectRatioY)) float_t  _aspectRatioY;

/// @brief Field _offset, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) float_t  _offset;

/// @brief Field _preserveSpriteAspectRatio, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__preserveSpriteAspectRatio, put=__cordl_internal_set__preserveSpriteAspectRatio)) bool  _preserveSpriteAspectRatio;

/// @brief Field _scale, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__scale, put=__cordl_internal_set__scale)) bool  _scale;

/// @brief Field _scaleRatio, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__scaleRatio, put=__cordl_internal_set__scaleRatio)) float_t  _scaleRatio;

 __declspec(property(get=get_aspectRatioX, put=set_aspectRatioX)) float_t  aspectRatioX;

 __declspec(property(get=get_aspectRatioY, put=set_aspectRatioY)) float_t  aspectRatioY;

/// @brief Field eTcDppbONrwKpUINkzcDzRCDFAacA, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_eTcDppbONrwKpUINkzcDzRCDFAacA, put=__cordl_internal_set_eTcDppbONrwKpUINkzcDzRCDFAacA)) ::UnityW<::UnityEngine::RectTransform>  eTcDppbONrwKpUINkzcDzRCDFAacA;

/// @brief Field hmXyvYfbhjLhSFRDzpxFBccOCkxu, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_hmXyvYfbhjLhSFRDzpxFBccOCkxu, put=__cordl_internal_set_hmXyvYfbhjLhSFRDzpxFBccOCkxu)) ::System::Collections::Generic::List_1<::UnityW<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>>*  hmXyvYfbhjLhSFRDzpxFBccOCkxu;

 __declspec(property(get=jBaFJrHFWATlvopHndhCdXEkoCjWA)) ::UnityW<::UnityEngine::RectTransform>  iTPSfchcidQMCvPGkoXYzqNYdUCg;

 __declspec(property(get=get_offset, put=set_offset)) float_t  offset;

 __declspec(property(get=get_preserveSpriteAspectRatio, put=set_preserveSpriteAspectRatio)) bool  preserveSpriteAspectRatio;

 __declspec(property(get=get_scale, put=set_scale)) bool  scale;

 __declspec(property(get=get_scaleRatio, put=set_scaleRatio)) float_t  scaleRatio;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IRegistrar_1<::UnityW<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>>"
constexpr operator  ::Rewired::Utils::Interfaces::IRegistrar_1<::UnityW<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>>*() noexcept;

static inline ::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1818f7a00, size 0x40, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x1818f7a40, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x1818f7a50, size 0x100, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PEHJNZkdfXFKxFJvqhQncOiXmWMc, addr 0x1818f7b50, size 0xf0, virtual false, abstract: false, final false
inline void PEHJNZkdfXFKxFJvqhQncOiXmWMc() ;

/// @brief Method Rewired.Utils.Interfaces.IRegistrar<Rewired.ComponentControls.Effects.TouchJoystickAngleIndicator>.Deregister, addr 0x1818f7c40, size 0x50, virtual true, abstract: false, final true
inline void Rewired_Utils_Interfaces_IRegistrar_Rewired_ComponentControls_Effects_TouchJoystickAngleIndicator__Deregister(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*  registrant) ;

/// @brief Method Rewired.Utils.Interfaces.IRegistrar<Rewired.ComponentControls.Effects.TouchJoystickAngleIndicator>.Register, addr 0x1818f7c90, size 0x60, virtual true, abstract: false, final true
inline void Rewired_Utils_Interfaces_IRegistrar_Rewired_ComponentControls_Effects_TouchJoystickAngleIndicator__Register(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*  registrant) ;

/// @brief Method THoyNxLqbENMLOZDTbbEmUcWLziJ, addr 0x1818f7cf0, size 0xf0, virtual false, abstract: false, final false
inline void THoyNxLqbENMLOZDTbbEmUcWLziJ() ;

/// @brief Method Update, addr 0x1818f7a40, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method XlRaWanqvBGOtcKWVdiVBkQBoeyrA, addr 0x1818f7a40, size 0x10, virtual false, abstract: false, final false
inline void XlRaWanqvBGOtcKWVdiVBkQBoeyrA() ;

constexpr float_t const& __cordl_internal_get__aspectRatioX() const;

constexpr float_t& __cordl_internal_get__aspectRatioX() ;

constexpr float_t const& __cordl_internal_get__aspectRatioY() const;

constexpr float_t& __cordl_internal_get__aspectRatioY() ;

constexpr float_t const& __cordl_internal_get__offset() const;

constexpr float_t& __cordl_internal_get__offset() ;

constexpr bool const& __cordl_internal_get__preserveSpriteAspectRatio() const;

constexpr bool& __cordl_internal_get__preserveSpriteAspectRatio() ;

constexpr bool const& __cordl_internal_get__scale() const;

constexpr bool& __cordl_internal_get__scale() ;

constexpr float_t const& __cordl_internal_get__scaleRatio() const;

constexpr float_t& __cordl_internal_get__scaleRatio() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_eTcDppbONrwKpUINkzcDzRCDFAacA() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_eTcDppbONrwKpUINkzcDzRCDFAacA() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>>* const& __cordl_internal_get_hmXyvYfbhjLhSFRDzpxFBccOCkxu() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>>*& __cordl_internal_get_hmXyvYfbhjLhSFRDzpxFBccOCkxu() ;

constexpr void __cordl_internal_set__aspectRatioX(float_t  value) ;

constexpr void __cordl_internal_set__aspectRatioY(float_t  value) ;

constexpr void __cordl_internal_set__offset(float_t  value) ;

constexpr void __cordl_internal_set__preserveSpriteAspectRatio(bool  value) ;

constexpr void __cordl_internal_set__scale(bool  value) ;

constexpr void __cordl_internal_set__scaleRatio(float_t  value) ;

constexpr void __cordl_internal_set_eTcDppbONrwKpUINkzcDzRCDFAacA(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_hmXyvYfbhjLhSFRDzpxFBccOCkxu(::System::Collections::Generic::List_1<::UnityW<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>>*  value) ;

/// @brief Method .ctor, addr 0x1818f7e10, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Vector2 getStaticF_QJHCIoZOlmnqJvHgSBGcHCmCsGOlA() ;

/// @brief Method get_aspectRatioX, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_aspectRatioX() ;

/// @brief Method get_aspectRatioY, addr 0x18049a530, size 0x10, virtual false, abstract: false, final false
inline float_t get_aspectRatioY() ;

/// @brief Method get_offset, addr 0x1803f68d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_offset() ;

/// @brief Method get_preserveSpriteAspectRatio, addr 0x1803a7440, size 0x10, virtual false, abstract: false, final false
inline bool get_preserveSpriteAspectRatio() ;

/// @brief Method get_scale, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_scale() ;

/// @brief Method get_scaleRatio, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_scaleRatio() ;

/// @brief Method hEBmWkEiNwsYzqhCtMkGHPsOGllm, addr 0x1818f7e80, size 0x3b0, virtual false, abstract: false, final false
inline void hEBmWkEiNwsYzqhCtMkGHPsOGllm(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IRegistrar_1<::UnityW<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>>"
constexpr ::Rewired::Utils::Interfaces::IRegistrar_1<::UnityW<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>>* i___Rewired__Utils__Interfaces__IRegistrar_1___UnityW___Rewired__ComponentControls__Effects__TouchJoystickAngleIndicator__() noexcept;

/// @brief Method jBaFJrHFWATlvopHndhCdXEkoCjWA, addr 0x1818e5380, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> jBaFJrHFWATlvopHndhCdXEkoCjWA() ;

static inline void setStaticF_QJHCIoZOlmnqJvHgSBGcHCmCsGOlA(::UnityEngine::Vector2  value) ;

/// @brief Method set_aspectRatioX, addr 0x1818f8230, size 0x50, virtual false, abstract: false, final false
inline void set_aspectRatioX(float_t  value) ;

/// @brief Method set_aspectRatioY, addr 0x1818f8280, size 0x50, virtual false, abstract: false, final false
inline void set_aspectRatioY(float_t  value) ;

/// @brief Method set_offset, addr 0x1818f82d0, size 0x20, virtual false, abstract: false, final false
inline void set_offset(float_t  value) ;

/// @brief Method set_preserveSpriteAspectRatio, addr 0x1818f82f0, size 0x10, virtual false, abstract: false, final false
inline void set_preserveSpriteAspectRatio(bool  value) ;

/// @brief Method set_scale, addr 0x1818f8350, size 0x10, virtual false, abstract: false, final false
inline void set_scale(bool  value) ;

/// @brief Method set_scaleRatio, addr 0x1818f8300, size 0x50, virtual false, abstract: false, final false
inline void set_scaleRatio(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchJoystickRadialIndicator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystickRadialIndicator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchJoystickRadialIndicator(TouchJoystickRadialIndicator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystickRadialIndicator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchJoystickRadialIndicator(TouchJoystickRadialIndicator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2805};

/// @brief Field _scale, offset: 0x20, size: 0x1, def value: None
 bool  ____scale;

/// @brief Field _preserveSpriteAspectRatio, offset: 0x21, size: 0x1, def value: None
 bool  ____preserveSpriteAspectRatio;

/// @brief Field _scaleRatio, offset: 0x24, size: 0x4, def value: None
 float_t  ____scaleRatio;

/// @brief Field _aspectRatioX, offset: 0x28, size: 0x4, def value: None
 float_t  ____aspectRatioX;

/// @brief Field _aspectRatioY, offset: 0x2c, size: 0x4, def value: None
 float_t  ____aspectRatioY;

/// @brief Field _offset, offset: 0x30, size: 0x4, def value: None
 float_t  ____offset;

/// @brief Field eTcDppbONrwKpUINkzcDzRCDFAacA, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___eTcDppbONrwKpUINkzcDzRCDFAacA;

/// @brief Field hmXyvYfbhjLhSFRDzpxFBccOCkxu, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>>*  ___hmXyvYfbhjLhSFRDzpxFBccOCkxu;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator, ____scale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator, ____preserveSpriteAspectRatio) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator, ____scaleRatio) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator, ____aspectRatioX) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator, ____aspectRatioY) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator, ____offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator, ___eTcDppbONrwKpUINkzcDzRCDFAacA) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator, ___hmXyvYfbhjLhSFRDzpxFBccOCkxu) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator) == 0x48, "Size mismatch!");

} // namespace end def Rewired::ComponentControls::Effects
