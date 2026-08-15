#pragma once
// IWYU pragma private; include "Rewired/Utils/InputTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputTools)
namespace Rewired::Data::Mapping {
struct HatType;
}
namespace Rewired {
struct AxisRange;
}
namespace Rewired {
struct AxisSensitivityType;
}
namespace Rewired {
struct ControllerElementType;
}
namespace Rewired {
struct ControllerTemplateElementType;
}
namespace Rewired {
class Controller;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::Utils {
class InputTools;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::InputTools*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::InputTools*, "Rewired.Utils", "InputTools");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.InputTools
class CORDL_TYPE InputTools : public ::System::Object {
public:
// Declarations
/// @brief Method ApplyRadialDeadZone, addr 0x181905080, size 0x130, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ApplyRadialDeadZone(float_t  xValue, float_t  yValue, float_t  deadzone) ;

/// @brief Method ApplyRadialSensitivity, addr 0x1819051b0, size 0x120, virtual false, abstract: false, final false
static inline void ApplyRadialSensitivity(::by_ref<::UnityEngine::Vector2>  value, ::Rewired::AxisSensitivityType  sensitivityType, float_t  sensitivity, ::UnityEngine::AnimationCurve*  sensitivityCurve) ;

/// @brief Method ApplySensitivity, addr 0x1819052d0, size 0x1b0, virtual false, abstract: false, final false
static inline float_t ApplySensitivity(float_t  value, ::Rewired::AxisSensitivityType  sensitivityType, float_t  sensitivity, ::UnityEngine::AnimationCurve*  sensitivityCurve) ;

/// @brief Method AxisToDigitalValue, addr 0x1819054d0, size 0x60, virtual false, abstract: false, final false
static inline float_t AxisToDigitalValue(float_t  value) ;

/// @brief Method AxisToDigitalValue, addr 0x181905480, size 0x50, virtual false, abstract: false, final false
static inline float_t AxisToDigitalValue(float_t  value, float_t  threshold) ;

/// @brief Method CompareLastActiveController, addr 0x181905530, size 0x80, virtual false, abstract: false, final false
static inline void CompareLastActiveController(::Rewired::Controller*  controller, ::by_ref<::Rewired::Controller*>  lastController, ::by_ref<double_t>  lastTime) ;

/// @brief Method FormatHardwareIdentifierString, addr 0x1819055b0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW FormatHardwareIdentifierString(::StringW  str) ;

/// @brief Method GetCalibratedAxisValue, addr 0x1819058b0, size 0xf0, virtual false, abstract: false, final false
static inline float_t GetCalibratedAxisValue(float_t  value, float_t  deadZone, bool  invert, bool  applySensitivity, ::Rewired::AxisSensitivityType  sensitivityType, float_t  sensitivity, ::UnityEngine::AnimationCurve*  sensitivityCurve) ;

/// @brief Method GetCalibratedAxisValueClamped, addr 0x181905620, size 0x290, virtual false, abstract: false, final false
static inline float_t GetCalibratedAxisValueClamped(float_t  value, float_t  zero, float_t  min, float_t  max, float_t  deadZone, bool  invert, bool  applySensitivity, ::Rewired::AxisSensitivityType  sensitivityType, float_t  sensitivity, ::UnityEngine::AnimationCurve*  sensitivityCurve) ;

/// @brief Method HandleForced4WayHatsOnUnknownControllers, addr 0x1819059a0, size 0x90, virtual false, abstract: false, final false
static inline bool HandleForced4WayHatsOnUnknownControllers(int32_t  direction, ::by_ref<::Rewired::Data::Mapping::HatType>  hatType) ;

/// @brief Method InvertAxisRange, addr 0x181905a30, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::AxisRange InvertAxisRange(::Rewired::AxisRange  axisRange) ;

/// @brief Method IsMappableControllerElementType, addr 0x181905a70, size 0xe0, virtual false, abstract: false, final false
static inline bool IsMappableControllerElementType(::System::Object*  type) ;

/// @brief Method IsMappableType, addr 0x181905b50, size 0x10, virtual false, abstract: false, final false
static inline bool IsMappableType(::Rewired::ControllerElementType  type) ;

/// @brief Method IsMappableType, addr 0x181905b60, size 0x10, virtual false, abstract: false, final false
static inline bool IsMappableType(::Rewired::ControllerTemplateElementType  type) ;

/// @brief Method TransformAxis2DComponentValue, addr 0x181905b70, size 0x1c0, virtual false, abstract: false, final false
static inline float_t TransformAxis2DComponentValue(float_t  value, float_t  zero, float_t  min, float_t  max) ;

/// @brief Method geERJyJlBOedUAmtQvHoelhFQBJIA, addr 0x181905d30, size 0xc0, virtual false, abstract: false, final false
static inline bool geERJyJlBOedUAmtQvHoelhFQBJIA(::UnityEngine::AnimationCurve*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputTools(InputTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputTools(InputTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2919};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::InputTools) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils
