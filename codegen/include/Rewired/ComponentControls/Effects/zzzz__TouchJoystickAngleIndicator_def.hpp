#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/Effects/TouchJoystickAngleIndicator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TouchJoystickAngleIndicator)
namespace Rewired::ComponentControls {
class TouchJoystick_IStickPositionChangedHandler;
}
namespace Rewired::UI {
class IVisibilityChangedHandler;
}
namespace Rewired::Utils::Interfaces {
template<typename T>
class IRegistrar_1;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::ComponentControls::Effects {
class TouchJoystickAngleIndicator;
}
// Write type traits
MARK_REF_T(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*, "Rewired.ComponentControls.Effects", "TouchJoystickAngleIndicator");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace Rewired::ComponentControls::Effects {
// Is value type: false
// CS Name: Rewired.ComponentControls.Effects.TouchJoystickAngleIndicator
class CORDL_TYPE TouchJoystickAngleIndicator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=mCWsrbNgpgRMuYlOuGINKdMwwypf)) ::UnityW<::UnityEngine::Sprite>  LUlBefhQqGnvcBQnsorvlZwuOSEd;

 __declspec(property(get=QNyJjbrugXBccIPiwsHcZSsjSafj)) ::UnityW<::UnityEngine::UI::Image>  ZVTQIBJOBAyuNCmCCIHcceZnkzNY;

/// @brief Field ZqnDCfONipJShFBpEppqsoLpZVSf, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_ZqnDCfONipJShFBpEppqsoLpZVSf, put=__cordl_internal_set_ZqnDCfONipJShFBpEppqsoLpZVSf)) bool  ZqnDCfONipJShFBpEppqsoLpZVSf;

/// @brief Field _activeColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__activeColor, put=__cordl_internal_set__activeColor)) ::UnityEngine::Color  _activeColor;

/// @brief Field _fadeRange, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeRange, put=__cordl_internal_set__fadeRange)) float_t  _fadeRange;

/// @brief Field _fadeWithAngle, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__fadeWithAngle, put=__cordl_internal_set__fadeWithAngle)) bool  _fadeWithAngle;

/// @brief Field _fadeWithValue, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__fadeWithValue, put=__cordl_internal_set__fadeWithValue)) bool  _fadeWithValue;

/// @brief Field _normalColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__normalColor, put=__cordl_internal_set__normalColor)) ::UnityEngine::Color  _normalColor;

/// @brief Field _targetAngle, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetAngle, put=__cordl_internal_set__targetAngle)) float_t  _targetAngle;

/// @brief Field _targetAngleFromRotation, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__targetAngleFromRotation, put=__cordl_internal_set__targetAngleFromRotation)) bool  _targetAngleFromRotation;

/// @brief Field _visible, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__visible, put=__cordl_internal_set__visible)) bool  _visible;

 __declspec(property(get=get_activeColor, put=set_activeColor)) ::UnityEngine::Color  activeColor;

/// @brief Field apgtxvbpLxitptmPeyuSXMfzRbLf, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_apgtxvbpLxitptmPeyuSXMfzRbLf, put=__cordl_internal_set_apgtxvbpLxitptmPeyuSXMfzRbLf)) ::UnityW<::UnityEngine::RectTransform>  apgtxvbpLxitptmPeyuSXMfzRbLf;

 __declspec(property(get=get_fadeRange, put=set_fadeRange)) float_t  fadeRange;

 __declspec(property(get=get_fadeWithAngle, put=set_fadeWithAngle)) bool  fadeWithAngle;

 __declspec(property(get=get_fadeWithValue, put=set_fadeWithValue)) bool  fadeWithValue;

/// @brief Field iAedVxLAKSZeGCgPFpYGHiMkeFpU, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_iAedVxLAKSZeGCgPFpYGHiMkeFpU, put=__cordl_internal_set_iAedVxLAKSZeGCgPFpYGHiMkeFpU)) ::Rewired::Utils::Interfaces::IRegistrar_1<::UnityW<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>>*  iAedVxLAKSZeGCgPFpYGHiMkeFpU;

/// @brief Field jjGBoiXyIaGuAvLEEelyRpsobhWf, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_jjGBoiXyIaGuAvLEEelyRpsobhWf, put=__cordl_internal_set_jjGBoiXyIaGuAvLEEelyRpsobhWf)) ::UnityW<::UnityEngine::UI::Image>  jjGBoiXyIaGuAvLEEelyRpsobhWf;

/// @brief Field mdZYkPkWVRoPwOCNrdljgmSgtHnEA, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_mdZYkPkWVRoPwOCNrdljgmSgtHnEA, put=__cordl_internal_set_mdZYkPkWVRoPwOCNrdljgmSgtHnEA)) ::UnityEngine::Vector2  mdZYkPkWVRoPwOCNrdljgmSgtHnEA;

 __declspec(property(get=get_normalColor, put=set_normalColor)) ::UnityEngine::Color  normalColor;

 __declspec(property(get=hJOsFPfUwVRitQDcVTuoUqpPAlEkA)) ::UnityW<::UnityEngine::RectTransform>  rQPZRWlJAFoyyiQFWhFDCnBtlwvT;

 __declspec(property(get=get_targetAngle, put=set_targetAngle)) float_t  targetAngle;

 __declspec(property(get=get_targetAngleFromRotation, put=set_targetAngleFromRotation)) bool  targetAngleFromRotation;

 __declspec(property(get=get_visible, put=set_visible)) bool  visible;

/// @brief Convert operator to "::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler"
constexpr operator  ::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*() noexcept;

/// @brief Convert operator to "::Rewired::UI::IVisibilityChangedHandler"
constexpr operator  ::Rewired::UI::IVisibilityChangedHandler*() noexcept;

/// @brief Method Awake, addr 0x1818f6ec0, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LKrTycttCpWjQLsdedBgVzLDioRF, addr 0x1818f6f30, size 0xc0, virtual false, abstract: false, final false
inline void LKrTycttCpWjQLsdedBgVzLDioRF() ;

static inline ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator* New_ctor() ;

/// @brief Method OdrBOdJnSDjZydUJcFrxMySjwJBLb, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OdrBOdJnSDjZydUJcFrxMySjwJBLb() ;

/// @brief Method OnDisable, addr 0x1818f6ff0, size 0x70, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1818f7060, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTouchJoystickStickPositionChanged, addr 0x1818f70b0, size 0x60, virtual false, abstract: false, final false
inline void OnTouchJoystickStickPositionChanged(::UnityEngine::Vector2  value) ;

/// @brief Method OnTransformParentChanged, addr 0x1818f7110, size 0x10, virtual false, abstract: false, final false
inline void OnTransformParentChanged() ;

/// @brief Method OnValidate, addr 0x1818f7120, size 0x50, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method OnVisibilityChanged, addr 0x1818f7170, size 0x10, virtual true, abstract: false, final true
inline void OnVisibilityChanged(bool  state) ;

/// @brief Method QNyJjbrugXBccIPiwsHcZSsjSafj, addr 0x1818f7180, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Image> QNyJjbrugXBccIPiwsHcZSsjSafj() ;

/// @brief Method Rewired.ComponentControls.TouchJoystick.IStickPositionChangedHandler.OnStickPositionChanged, addr 0x1818f70b0, size 0x60, virtual true, abstract: false, final true
inline void Rewired_ComponentControls_TouchJoystick_IStickPositionChangedHandler_OnStickPositionChanged(::UnityEngine::Vector2  value) ;

/// @brief Method SwiTLyINyGhGyvUEOOoyLaEMFXJiA, addr 0x1818f71d0, size 0x100, virtual false, abstract: false, final false
inline void SwiTLyINyGhGyvUEOOoyLaEMFXJiA(bool  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method WkQdKaCrmGJwrRWRrekECTqSLDReb, addr 0x1818f72d0, size 0xf0, virtual false, abstract: false, final false
inline bool WkQdKaCrmGJwrRWRrekECTqSLDReb(::by_ref<::UnityEngine::Vector2>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method XQPSIgWbNHuSsykiBiHYezOljYLy, addr 0x1818f73c0, size 0x410, virtual false, abstract: false, final false
inline void XQPSIgWbNHuSsykiBiHYezOljYLy(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace) ;

constexpr bool const& __cordl_internal_get_ZqnDCfONipJShFBpEppqsoLpZVSf() const;

constexpr bool& __cordl_internal_get_ZqnDCfONipJShFBpEppqsoLpZVSf() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__activeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__activeColor() ;

constexpr float_t const& __cordl_internal_get__fadeRange() const;

constexpr float_t& __cordl_internal_get__fadeRange() ;

constexpr bool const& __cordl_internal_get__fadeWithAngle() const;

constexpr bool& __cordl_internal_get__fadeWithAngle() ;

constexpr bool const& __cordl_internal_get__fadeWithValue() const;

constexpr bool& __cordl_internal_get__fadeWithValue() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor() ;

constexpr float_t const& __cordl_internal_get__targetAngle() const;

constexpr float_t& __cordl_internal_get__targetAngle() ;

constexpr bool const& __cordl_internal_get__targetAngleFromRotation() const;

constexpr bool& __cordl_internal_get__targetAngleFromRotation() ;

constexpr bool const& __cordl_internal_get__visible() const;

constexpr bool& __cordl_internal_get__visible() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_apgtxvbpLxitptmPeyuSXMfzRbLf() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_apgtxvbpLxitptmPeyuSXMfzRbLf() ;

constexpr ::Rewired::Utils::Interfaces::IRegistrar_1<::UnityW<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>>* const& __cordl_internal_get_iAedVxLAKSZeGCgPFpYGHiMkeFpU() const;

constexpr ::Rewired::Utils::Interfaces::IRegistrar_1<::UnityW<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>>*& __cordl_internal_get_iAedVxLAKSZeGCgPFpYGHiMkeFpU() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_jjGBoiXyIaGuAvLEEelyRpsobhWf() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_jjGBoiXyIaGuAvLEEelyRpsobhWf() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_mdZYkPkWVRoPwOCNrdljgmSgtHnEA() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_mdZYkPkWVRoPwOCNrdljgmSgtHnEA() ;

constexpr void __cordl_internal_set_ZqnDCfONipJShFBpEppqsoLpZVSf(bool  value) ;

constexpr void __cordl_internal_set__activeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__fadeRange(float_t  value) ;

constexpr void __cordl_internal_set__fadeWithAngle(bool  value) ;

constexpr void __cordl_internal_set__fadeWithValue(bool  value) ;

constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__targetAngle(float_t  value) ;

constexpr void __cordl_internal_set__targetAngleFromRotation(bool  value) ;

constexpr void __cordl_internal_set__visible(bool  value) ;

constexpr void __cordl_internal_set_apgtxvbpLxitptmPeyuSXMfzRbLf(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_iAedVxLAKSZeGCgPFpYGHiMkeFpU(::Rewired::Utils::Interfaces::IRegistrar_1<::UnityW<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>>*  value) ;

constexpr void __cordl_internal_set_jjGBoiXyIaGuAvLEEelyRpsobhWf(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_mdZYkPkWVRoPwOCNrdljgmSgtHnEA(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x1818f77d0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method fSwPnYSsLORCGYLXNfHSEaYDmybcb, addr 0x1818f7810, size 0x10, virtual false, abstract: false, final false
inline void fSwPnYSsLORCGYLXNfHSEaYDmybcb() ;

/// @brief Method get_activeColor, addr 0x1802e30e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_activeColor() ;

/// @brief Method get_fadeRange, addr 0x18049a530, size 0x10, virtual false, abstract: false, final false
inline float_t get_fadeRange() ;

/// @brief Method get_fadeWithAngle, addr 0x180503cd0, size 0x10, virtual false, abstract: false, final false
inline bool get_fadeWithAngle() ;

/// @brief Method get_fadeWithValue, addr 0x1802f1be0, size 0x10, virtual false, abstract: false, final false
inline bool get_fadeWithValue() ;

/// @brief Method get_normalColor, addr 0x18052ca40, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_normalColor() ;

/// @brief Method get_targetAngle, addr 0x1818f7820, size 0x40, virtual false, abstract: false, final false
inline float_t get_targetAngle() ;

/// @brief Method get_targetAngleFromRotation, addr 0x1803a7440, size 0x10, virtual false, abstract: false, final false
inline bool get_targetAngleFromRotation() ;

/// @brief Method get_visible, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_visible() ;

/// @brief Method hJOsFPfUwVRitQDcVTuoUqpPAlEkA, addr 0x1818f7860, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> hJOsFPfUwVRitQDcVTuoUqpPAlEkA() ;

/// @brief Convert to "::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler"
constexpr ::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler* i___Rewired__ComponentControls__TouchJoystick_IStickPositionChangedHandler() noexcept;

/// @brief Convert to "::Rewired::UI::IVisibilityChangedHandler"
constexpr ::Rewired::UI::IVisibilityChangedHandler* i___Rewired__UI__IVisibilityChangedHandler() noexcept;

/// @brief Method kSItHRmDkJPhlxNXzfkfFjwoaqDNA, addr 0x1818f78b0, size 0x20, virtual false, abstract: false, final false
inline void kSItHRmDkJPhlxNXzfkfFjwoaqDNA() ;

/// @brief Method mCWsrbNgpgRMuYlOuGINKdMwwypf, addr 0x1818f78d0, size 0xb0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> mCWsrbNgpgRMuYlOuGINKdMwwypf() ;

/// @brief Method obFmnkyCttYRGYLnHkYDjUeFhmLw, addr 0x1818f6ff0, size 0x70, virtual false, abstract: false, final false
inline void obFmnkyCttYRGYLnHkYDjUeFhmLw() ;

/// @brief Method set_activeColor, addr 0x18187c9d0, size 0x10, virtual false, abstract: false, final false
inline void set_activeColor(::UnityEngine::Color  value) ;

/// @brief Method set_fadeRange, addr 0x1818f7980, size 0x20, virtual false, abstract: false, final false
inline void set_fadeRange(float_t  value) ;

/// @brief Method set_fadeWithAngle, addr 0x1818f79a0, size 0x10, virtual false, abstract: false, final false
inline void set_fadeWithAngle(bool  value) ;

/// @brief Method set_fadeWithValue, addr 0x1818f0c00, size 0x10, virtual false, abstract: false, final false
inline void set_fadeWithValue(bool  value) ;

/// @brief Method set_normalColor, addr 0x180e94c00, size 0x2a50, virtual false, abstract: false, final false
inline void set_normalColor(::UnityEngine::Color  value) ;

/// @brief Method set_targetAngle, addr 0x1818f79c0, size 0x20, virtual false, abstract: false, final false
inline void set_targetAngle(float_t  value) ;

/// @brief Method set_targetAngleFromRotation, addr 0x1818f79b0, size 0x10, virtual false, abstract: false, final false
inline void set_targetAngleFromRotation(bool  value) ;

/// @brief Method set_visible, addr 0x1818f79e0, size 0x20, virtual false, abstract: false, final false
inline void set_visible(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchJoystickAngleIndicator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystickAngleIndicator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchJoystickAngleIndicator(TouchJoystickAngleIndicator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchJoystickAngleIndicator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchJoystickAngleIndicator(TouchJoystickAngleIndicator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2804};

/// @brief Field _visible, offset: 0x20, size: 0x1, def value: None
 bool  ____visible;

/// @brief Field _targetAngleFromRotation, offset: 0x21, size: 0x1, def value: None
 bool  ____targetAngleFromRotation;

/// @brief Field _targetAngle, offset: 0x24, size: 0x4, def value: None
 float_t  ____targetAngle;

/// @brief Field _fadeWithValue, offset: 0x28, size: 0x1, def value: None
 bool  ____fadeWithValue;

/// @brief Field _fadeWithAngle, offset: 0x29, size: 0x1, def value: None
 bool  ____fadeWithAngle;

/// @brief Field _fadeRange, offset: 0x2c, size: 0x4, def value: None
 float_t  ____fadeRange;

/// @brief Field _activeColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____activeColor;

/// @brief Field _normalColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____normalColor;

/// @brief Field jjGBoiXyIaGuAvLEEelyRpsobhWf, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___jjGBoiXyIaGuAvLEEelyRpsobhWf;

/// @brief Field apgtxvbpLxitptmPeyuSXMfzRbLf, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___apgtxvbpLxitptmPeyuSXMfzRbLf;

/// @brief Field mdZYkPkWVRoPwOCNrdljgmSgtHnEA, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___mdZYkPkWVRoPwOCNrdljgmSgtHnEA;

/// @brief Field ZqnDCfONipJShFBpEppqsoLpZVSf, offset: 0x68, size: 0x1, def value: None
 bool  ___ZqnDCfONipJShFBpEppqsoLpZVSf;

/// @brief Field iAedVxLAKSZeGCgPFpYGHiMkeFpU, offset: 0x70, size: 0x8, def value: None
 ::Rewired::Utils::Interfaces::IRegistrar_1<::UnityW<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>>*  ___iAedVxLAKSZeGCgPFpYGHiMkeFpU;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator, ____visible) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator, ____targetAngleFromRotation) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator, ____targetAngle) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator, ____fadeWithValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator, ____fadeWithAngle) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator, ____fadeRange) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator, ____activeColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator, ____normalColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator, ___jjGBoiXyIaGuAvLEEelyRpsobhWf) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator, ___apgtxvbpLxitptmPeyuSXMfzRbLf) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator, ___mdZYkPkWVRoPwOCNrdljgmSgtHnEA) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator, ___ZqnDCfONipJShFBpEppqsoLpZVSf) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator, ___iAedVxLAKSZeGCgPFpYGHiMkeFpU) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator) == 0x78, "Size mismatch!");

} // namespace end def Rewired::ComponentControls::Effects
