#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/AxisCalibrationInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__AxisSensitivityType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AxisCalibrationInfo)
namespace Rewired::Utils::Interfaces {
class IDeepCloneable;
}
namespace Rewired {
struct AxisCalibrationData;
}
namespace Rewired {
struct AxisSensitivityType;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace Rewired::Data::Mapping {
class AxisCalibrationInfo;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::AxisCalibrationInfo*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::AxisCalibrationInfo*, "Rewired.Data.Mapping", "AxisCalibrationInfo");
// Dependencies Rewired.AxisSensitivityType, System.Object
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.AxisCalibrationInfo
class CORDL_TYPE AxisCalibrationInfo : public ::System::Object {
public:
// Declarations
/// @brief Field _applyRangeCalibration, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__applyRangeCalibration, put=__cordl_internal_set__applyRangeCalibration)) bool  _applyRangeCalibration;

/// @brief Field _deadZone, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__deadZone, put=__cordl_internal_set__deadZone)) float_t  _deadZone;

/// @brief Field _invert, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__invert, put=__cordl_internal_set__invert)) bool  _invert;

/// @brief Field _max, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__max, put=__cordl_internal_set__max)) float_t  _max;

/// @brief Field _min, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__min, put=__cordl_internal_set__min)) float_t  _min;

/// @brief Field _sensitivity, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__sensitivity, put=__cordl_internal_set__sensitivity)) float_t  _sensitivity;

/// @brief Field _sensitivityCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__sensitivityCurve, put=__cordl_internal_set__sensitivityCurve)) ::UnityEngine::AnimationCurve*  _sensitivityCurve;

/// @brief Field _sensitivityType, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__sensitivityType, put=__cordl_internal_set__sensitivityType)) ::Rewired::AxisSensitivityType  _sensitivityType;

/// @brief Field _zero, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__zero, put=__cordl_internal_set__zero)) float_t  _zero;

 __declspec(property(get=get_applyRangeCalibration, put=set_applyRangeCalibration)) bool  applyRangeCalibration;

 __declspec(property(get=get_deadZone, put=set_deadZone)) float_t  deadZone;

 __declspec(property(get=get_invert, put=set_invert)) bool  invert;

 __declspec(property(get=get_max, put=set_max)) float_t  max;

 __declspec(property(get=get_min, put=set_min)) float_t  min;

 __declspec(property(get=get_sensitivity, put=set_sensitivity)) float_t  sensitivity;

 __declspec(property(get=get_sensitivityCurve, put=set_sensitivityCurve)) ::UnityEngine::AnimationCurve*  sensitivityCurve;

 __declspec(property(get=get_sensitivityType, put=set_sensitivityType)) ::Rewired::AxisSensitivityType  sensitivityType;

 __declspec(property(get=get_zero, put=set_zero)) float_t  zero;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr operator  ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept;

/// @brief Method DeepClone, addr 0x1818c88f0, size 0xc0, virtual true, abstract: false, final true
inline ::System::Object* DeepClone() ;

static inline ::Rewired::Data::Mapping::AxisCalibrationInfo* New_ctor() ;

static inline ::Rewired::Data::Mapping::AxisCalibrationInfo* New_ctor(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::AxisSensitivityType  _cordl_fixed_empty_name_whitespace_param_6, float_t  _cordl_fixed_empty_name_whitespace_param_7, ::UnityEngine::AnimationCurve*  _cordl_fixed_empty_name_whitespace_param_8) ;

constexpr bool const& __cordl_internal_get__applyRangeCalibration() const;

constexpr bool& __cordl_internal_get__applyRangeCalibration() ;

constexpr float_t const& __cordl_internal_get__deadZone() const;

constexpr float_t& __cordl_internal_get__deadZone() ;

constexpr bool const& __cordl_internal_get__invert() const;

constexpr bool& __cordl_internal_get__invert() ;

constexpr float_t const& __cordl_internal_get__max() const;

constexpr float_t& __cordl_internal_get__max() ;

constexpr float_t const& __cordl_internal_get__min() const;

constexpr float_t& __cordl_internal_get__min() ;

constexpr float_t const& __cordl_internal_get__sensitivity() const;

constexpr float_t& __cordl_internal_get__sensitivity() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__sensitivityCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__sensitivityCurve() ;

constexpr ::Rewired::AxisSensitivityType const& __cordl_internal_get__sensitivityType() const;

constexpr ::Rewired::AxisSensitivityType& __cordl_internal_get__sensitivityType() ;

constexpr float_t const& __cordl_internal_get__zero() const;

constexpr float_t& __cordl_internal_get__zero() ;

constexpr void __cordl_internal_set__applyRangeCalibration(bool  value) ;

constexpr void __cordl_internal_set__deadZone(float_t  value) ;

constexpr void __cordl_internal_set__invert(bool  value) ;

constexpr void __cordl_internal_set__max(float_t  value) ;

constexpr void __cordl_internal_set__min(float_t  value) ;

constexpr void __cordl_internal_set__sensitivity(float_t  value) ;

constexpr void __cordl_internal_set__sensitivityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__sensitivityType(::Rewired::AxisSensitivityType  value) ;

constexpr void __cordl_internal_set__zero(float_t  value) ;

/// @brief Method .ctor, addr 0x180346ec0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1818c89b0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::AxisSensitivityType  _cordl_fixed_empty_name_whitespace_param_6, float_t  _cordl_fixed_empty_name_whitespace_param_7, ::UnityEngine::AnimationCurve*  _cordl_fixed_empty_name_whitespace_param_8) ;

/// @brief Method fjYdWnGjJQWWySSDdSRbQDKroIQtA, addr 0x1818c8a00, size 0x120, virtual false, abstract: false, final false
static inline ::Rewired::AxisCalibrationData fjYdWnGjJQWWySSDdSRbQDKroIQtA(::Rewired::Data::Mapping::AxisCalibrationInfo*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_applyRangeCalibration, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_applyRangeCalibration() ;

/// @brief Method get_deadZone, addr 0x1803bda00, size 0x10, virtual false, abstract: false, final false
inline float_t get_deadZone() ;

/// @brief Method get_invert, addr 0x180503b10, size 0x10, virtual false, abstract: false, final false
inline bool get_invert() ;

/// @brief Method get_max, addr 0x1802f42b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_max() ;

/// @brief Method get_min, addr 0x1802f80a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_min() ;

/// @brief Method get_sensitivity, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_sensitivity() ;

/// @brief Method get_sensitivityCurve, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_sensitivityCurve() ;

/// @brief Method get_sensitivityType, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::AxisSensitivityType get_sensitivityType() ;

/// @brief Method get_zero, addr 0x18048d8a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_zero() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept;

/// @brief Method pGruEvbQvywsrXRZuQCflKbuJHWK, addr 0x1818c8b20, size 0x80, virtual false, abstract: false, final false
static inline ::Rewired::Data::Mapping::AxisCalibrationInfo* pGruEvbQvywsrXRZuQCflKbuJHWK(::Rewired::AxisCalibrationData  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method set_applyRangeCalibration, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_applyRangeCalibration(bool  value) ;

/// @brief Method set_deadZone, addr 0x1803bda40, size 0x10, virtual false, abstract: false, final false
inline void set_deadZone(float_t  value) ;

/// @brief Method set_invert, addr 0x180503b60, size 0x10, virtual false, abstract: false, final false
inline void set_invert(bool  value) ;

/// @brief Method set_max, addr 0x1802f43c0, size 0x10, virtual false, abstract: false, final false
inline void set_max(float_t  value) ;

/// @brief Method set_min, addr 0x1802f80f0, size 0x10, virtual false, abstract: false, final false
inline void set_min(float_t  value) ;

/// @brief Method set_sensitivity, addr 0x1803f2c00, size 0x10, virtual false, abstract: false, final false
inline void set_sensitivity(float_t  value) ;

/// @brief Method set_sensitivityCurve, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_sensitivityCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_sensitivityType, addr 0x180396f00, size 0x10, virtual false, abstract: false, final false
inline void set_sensitivityType(::Rewired::AxisSensitivityType  value) ;

/// @brief Method set_zero, addr 0x1804bdb50, size 0x10, virtual false, abstract: false, final false
inline void set_zero(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AxisCalibrationInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AxisCalibrationInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AxisCalibrationInfo(AxisCalibrationInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AxisCalibrationInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AxisCalibrationInfo(AxisCalibrationInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2666};

/// @brief Field _applyRangeCalibration, offset: 0x10, size: 0x1, def value: None
 bool  ____applyRangeCalibration;

/// @brief Field _invert, offset: 0x11, size: 0x1, def value: None
 bool  ____invert;

/// @brief Field _deadZone, offset: 0x14, size: 0x4, def value: None
 float_t  ____deadZone;

/// @brief Field _zero, offset: 0x18, size: 0x4, def value: None
 float_t  ____zero;

/// @brief Field _min, offset: 0x1c, size: 0x4, def value: None
 float_t  ____min;

/// @brief Field _max, offset: 0x20, size: 0x4, def value: None
 float_t  ____max;

/// @brief Field _sensitivityType, offset: 0x24, size: 0x4, def value: None
 ::Rewired::AxisSensitivityType  ____sensitivityType;

/// @brief Field _sensitivity, offset: 0x28, size: 0x4, def value: None
 float_t  ____sensitivity;

/// @brief Field _sensitivityCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____sensitivityCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::AxisCalibrationInfo, ____applyRangeCalibration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::AxisCalibrationInfo, ____invert) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::AxisCalibrationInfo, ____deadZone) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::AxisCalibrationInfo, ____zero) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::AxisCalibrationInfo, ____min) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::AxisCalibrationInfo, ____max) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::AxisCalibrationInfo, ____sensitivityType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::AxisCalibrationInfo, ____sensitivity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::AxisCalibrationInfo, ____sensitivityCurve) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::AxisCalibrationInfo) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
