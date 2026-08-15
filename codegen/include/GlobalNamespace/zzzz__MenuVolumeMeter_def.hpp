#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuVolumeMeter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MenuVolumeMeter)
namespace GlobalNamespace {
class OfflineMicMeter;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuVolumeMeter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MenuVolumeMeter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenuVolumeMeter*, "", "MenuVolumeMeter");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuVolumeMeter
class CORDL_TYPE MenuVolumeMeter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _greenHEX, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__greenHEX, put=__cordl_internal_set__greenHEX)) ::StringW  _greenHEX;

/// @brief Field _redHEX, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__redHEX, put=__cordl_internal_set__redHEX)) ::StringW  _redHEX;

/// @brief Field initialMaxMeterColor, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_initialMaxMeterColor, put=__cordl_internal_set_initialMaxMeterColor)) ::UnityEngine::Color  initialMaxMeterColor;

/// @brief Field initialMaxMeterWidth, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialMaxMeterWidth, put=__cordl_internal_set_initialMaxMeterWidth)) float_t  initialMaxMeterWidth;

/// @brief Field initialWidth, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialWidth, put=__cordl_internal_set_initialWidth)) float_t  initialWidth;

/// @brief Field maxAmplitude, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxAmplitude, put=__cordl_internal_set_maxAmplitude)) float_t  maxAmplitude;

/// @brief Field maxMeterImage, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxMeterImage, put=__cordl_internal_set_maxMeterImage)) ::UnityW<::UnityEngine::UI::Image>  maxMeterImage;

/// @brief Field maxMeterTransform, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxMeterTransform, put=__cordl_internal_set_maxMeterTransform)) ::UnityW<::UnityEngine::RectTransform>  maxMeterTransform;

/// @brief Field offlineSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_offlineSource, put=__cordl_internal_set_offlineSource)) ::UnityW<::GlobalNamespace::OfflineMicMeter>  offlineSource;

/// @brief Field scalingTarget, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_scalingTarget, put=__cordl_internal_set_scalingTarget)) ::UnityW<::UnityEngine::RectTransform>  scalingTarget;

/// @brief Field smoothedAmplitude, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothedAmplitude, put=__cordl_internal_set_smoothedAmplitude)) float_t  smoothedAmplitude;

/// @brief Field text, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::UnityW<::TMPro::TMP_Text>  text;

/// @brief Method Awake, addr 0x180425450, size 0x40, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::MenuVolumeMeter* New_ctor() ;

/// @brief Method Update, addr 0x180425490, size 0x520, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::StringW const& __cordl_internal_get__greenHEX() const;

constexpr ::StringW& __cordl_internal_get__greenHEX() ;

constexpr ::StringW const& __cordl_internal_get__redHEX() const;

constexpr ::StringW& __cordl_internal_get__redHEX() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_initialMaxMeterColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_initialMaxMeterColor() ;

constexpr float_t const& __cordl_internal_get_initialMaxMeterWidth() const;

constexpr float_t& __cordl_internal_get_initialMaxMeterWidth() ;

constexpr float_t const& __cordl_internal_get_initialWidth() const;

constexpr float_t& __cordl_internal_get_initialWidth() ;

constexpr float_t const& __cordl_internal_get_maxAmplitude() const;

constexpr float_t& __cordl_internal_get_maxAmplitude() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_maxMeterImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_maxMeterImage() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_maxMeterTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_maxMeterTransform() ;

constexpr ::UnityW<::GlobalNamespace::OfflineMicMeter> const& __cordl_internal_get_offlineSource() const;

constexpr ::UnityW<::GlobalNamespace::OfflineMicMeter>& __cordl_internal_get_offlineSource() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_scalingTarget() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_scalingTarget() ;

constexpr float_t const& __cordl_internal_get_smoothedAmplitude() const;

constexpr float_t& __cordl_internal_get_smoothedAmplitude() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_text() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_text() ;

constexpr void __cordl_internal_set__greenHEX(::StringW  value) ;

constexpr void __cordl_internal_set__redHEX(::StringW  value) ;

constexpr void __cordl_internal_set_initialMaxMeterColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_initialMaxMeterWidth(float_t  value) ;

constexpr void __cordl_internal_set_initialWidth(float_t  value) ;

constexpr void __cordl_internal_set_maxAmplitude(float_t  value) ;

constexpr void __cordl_internal_set_maxMeterImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_maxMeterTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_offlineSource(::UnityW<::GlobalNamespace::OfflineMicMeter>  value) ;

constexpr void __cordl_internal_set_scalingTarget(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_smoothedAmplitude(float_t  value) ;

constexpr void __cordl_internal_set_text(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x1804259b0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MenuVolumeMeter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MenuVolumeMeter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MenuVolumeMeter(MenuVolumeMeter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MenuVolumeMeter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MenuVolumeMeter(MenuVolumeMeter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5217};

/// @brief Field offlineSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OfflineMicMeter>  ___offlineSource;

/// @brief Field text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___text;

/// @brief Field maxAmplitude, offset: 0x30, size: 0x4, def value: None
 float_t  ___maxAmplitude;

/// @brief Field smoothedAmplitude, offset: 0x34, size: 0x4, def value: None
 float_t  ___smoothedAmplitude;

/// @brief Field scalingTarget, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___scalingTarget;

/// @brief Field maxMeterTransform, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___maxMeterTransform;

/// @brief Field maxMeterImage, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___maxMeterImage;

/// @brief Field initialWidth, offset: 0x50, size: 0x4, def value: None
 float_t  ___initialWidth;

/// @brief Field initialMaxMeterWidth, offset: 0x54, size: 0x4, def value: None
 float_t  ___initialMaxMeterWidth;

/// @brief Field initialMaxMeterColor, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Color  ___initialMaxMeterColor;

/// @brief Field _greenHEX, offset: 0x68, size: 0x8, def value: None
 ::StringW  ____greenHEX;

/// @brief Field _redHEX, offset: 0x70, size: 0x8, def value: None
 ::StringW  ____redHEX;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuVolumeMeter, ___offlineSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuVolumeMeter, ___text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuVolumeMeter, ___maxAmplitude) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuVolumeMeter, ___smoothedAmplitude) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuVolumeMeter, ___scalingTarget) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuVolumeMeter, ___maxMeterTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuVolumeMeter, ___maxMeterImage) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuVolumeMeter, ___initialWidth) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuVolumeMeter, ___initialMaxMeterWidth) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuVolumeMeter, ___initialMaxMeterColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuVolumeMeter, ____greenHEX) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuVolumeMeter, ____redHEX) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MenuVolumeMeter) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
