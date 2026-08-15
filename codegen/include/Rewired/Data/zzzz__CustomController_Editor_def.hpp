#pragma once
// IWYU pragma private; include "Rewired/Data/CustomController_Editor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__AxisSensitivityType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomController_Editor)
namespace Rewired::Data::Mapping {
class HardwareAxisInfo;
}
namespace Rewired::Data {
class CustomController_Editor_Axis;
}
namespace Rewired::Data {
class CustomController_Editor_Button;
}
namespace Rewired::Data {
class CustomController_Editor_Element;
}
namespace Rewired::Data {
class CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO;
}
namespace Rewired {
struct AxisRange;
}
namespace Rewired {
class ControllerElementIdentifier;
}
namespace Rewired {
struct ControllerElementType;
}
namespace Rewired {
class HardwareControllerMap_Game;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace Rewired::Data {
class CustomController_Editor;
}
namespace Rewired::Data {
class CustomController_Editor_Axis;
}
namespace Rewired::Data {
class CustomController_Editor_Button;
}
namespace Rewired::Data {
class CustomController_Editor_Element;
}
namespace Rewired::Data {
class CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO;
}
// Write type traits
MARK_REF_T(::Rewired::Data::CustomController_Editor*);
MARK_REF_T(::Rewired::Data::CustomController_Editor_Axis*);
MARK_REF_T(::Rewired::Data::CustomController_Editor_Button*);
MARK_REF_T(::Rewired::Data::CustomController_Editor_Element*);
MARK_REF_T(::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::CustomController_Editor*, "Rewired.Data", "CustomController_Editor");
DEFINE_IL2CPP_CLASS(::Rewired::Data::CustomController_Editor_Axis*, "Rewired.Data", "CustomController_Editor/Axis");
DEFINE_IL2CPP_CLASS(::Rewired::Data::CustomController_Editor_Button*, "Rewired.Data", "CustomController_Editor/Button");
DEFINE_IL2CPP_CLASS(::Rewired::Data::CustomController_Editor_Element*, "Rewired.Data", "CustomController_Editor/Element");
DEFINE_IL2CPP_CLASS(::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*, "Rewired.Data", "CustomController_Editor/uszbcWIEZHyvvDMGEXkfUwtbWekO");
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.CustomController_Editor/Element
class CORDL_TYPE CustomController_Editor_Element : public ::System::Object {
public:
// Declarations
/// @brief Field elementIdentifierId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_elementIdentifierId, put=__cordl_internal_set_elementIdentifierId)) int32_t  elementIdentifierId;

/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Method Clone, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Data::CustomController_Editor_Element* Clone() ;

static inline ::Rewired::Data::CustomController_Editor_Element* New_ctor() ;

static inline ::Rewired::Data::CustomController_Editor_Element* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr int32_t const& __cordl_internal_get_elementIdentifierId() const;

constexpr int32_t& __cordl_internal_get_elementIdentifierId() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_elementIdentifierId(int32_t  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18188adc0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomController_Editor_Element() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomController_Editor_Element", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomController_Editor_Element(CustomController_Editor_Element && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomController_Editor_Element", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomController_Editor_Element(CustomController_Editor_Element const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2338};

/// @brief Field elementIdentifierId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___elementIdentifierId;

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::CustomController_Editor_Element, ___elementIdentifierId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor_Element, ___name) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::CustomController_Editor_Element) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies Rewired.Data.CustomController_Editor::Element
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.CustomController_Editor/Button
class CORDL_TYPE CustomController_Editor_Button : public ::Rewired::Data::CustomController_Editor_Element {
public:
// Declarations
/// @brief Method Clone, addr 0x18188ad00, size 0x50, virtual true, abstract: false, final false
inline ::Rewired::Data::CustomController_Editor_Element* Clone() ;

static inline ::Rewired::Data::CustomController_Editor_Button* New_ctor() ;

static inline ::Rewired::Data::CustomController_Editor_Button* New_ctor(::Rewired::Data::CustomController_Editor_Button*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Data::CustomController_Editor_Button* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Data::CustomController_Editor_Button* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18188ad80, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Data::CustomController_Editor_Button*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18188ad50, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18188adc0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomController_Editor_Button() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomController_Editor_Button", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomController_Editor_Button(CustomController_Editor_Button && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomController_Editor_Button", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomController_Editor_Button(CustomController_Editor_Button const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2339};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Data::CustomController_Editor_Button) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies Rewired.AxisRange, Rewired.AxisSensitivityType, Rewired.Data.CustomController_Editor::Element
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.CustomController_Editor/Axis
class CORDL_TYPE CustomController_Editor_Axis : public ::Rewired::Data::CustomController_Editor_Element {
public:
// Declarations
/// @brief Field axisInfo, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_axisInfo, put=__cordl_internal_set_axisInfo)) ::Rewired::Data::Mapping::HardwareAxisInfo*  axisInfo;

/// @brief Field deadZone, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_deadZone, put=__cordl_internal_set_deadZone)) float_t  deadZone;

/// @brief Field doNotCalibrateRange, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_doNotCalibrateRange, put=__cordl_internal_set_doNotCalibrateRange)) bool  doNotCalibrateRange;

/// @brief Field invert, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_invert, put=__cordl_internal_set_invert)) bool  invert;

/// @brief Field max, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_max, put=__cordl_internal_set_max)) float_t  max;

/// @brief Field min, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_min, put=__cordl_internal_set_min)) float_t  min;

/// @brief Field range, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_range, put=__cordl_internal_set_range)) ::Rewired::AxisRange  range;

/// @brief Field sensitivity, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_sensitivity, put=__cordl_internal_set_sensitivity)) float_t  sensitivity;

/// @brief Field sensitivityCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_sensitivityCurve, put=__cordl_internal_set_sensitivityCurve)) ::UnityEngine::AnimationCurve*  sensitivityCurve;

/// @brief Field sensitivityType, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sensitivityType, put=__cordl_internal_set_sensitivityType)) ::Rewired::AxisSensitivityType  sensitivityType;

/// @brief Field zero, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_zero, put=__cordl_internal_set_zero)) float_t  zero;

/// @brief Method Clone, addr 0x18188a8e0, size 0x100, virtual true, abstract: false, final false
inline ::Rewired::Data::CustomController_Editor_Element* Clone() ;

static inline ::Rewired::Data::CustomController_Editor_Axis* New_ctor() ;

static inline ::Rewired::Data::CustomController_Editor_Axis* New_ctor(::Rewired::Data::CustomController_Editor_Axis*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Data::CustomController_Editor_Axis* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Data::CustomController_Editor_Axis* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, float_t  _cordl_fixed_empty_name_whitespace_param_6, float_t  _cordl_fixed_empty_name_whitespace_param_7, float_t  _cordl_fixed_empty_name_whitespace_param_8, float_t  _cordl_fixed_empty_name_whitespace_param_9, bool  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::Data::Mapping::HardwareAxisInfo*  _cordl_fixed_empty_name_whitespace_param_11) ;

constexpr ::Rewired::Data::Mapping::HardwareAxisInfo* const& __cordl_internal_get_axisInfo() const;

constexpr ::Rewired::Data::Mapping::HardwareAxisInfo*& __cordl_internal_get_axisInfo() ;

constexpr float_t const& __cordl_internal_get_deadZone() const;

constexpr float_t& __cordl_internal_get_deadZone() ;

constexpr bool const& __cordl_internal_get_doNotCalibrateRange() const;

constexpr bool& __cordl_internal_get_doNotCalibrateRange() ;

constexpr bool const& __cordl_internal_get_invert() const;

constexpr bool& __cordl_internal_get_invert() ;

constexpr float_t const& __cordl_internal_get_max() const;

constexpr float_t& __cordl_internal_get_max() ;

constexpr float_t const& __cordl_internal_get_min() const;

constexpr float_t& __cordl_internal_get_min() ;

constexpr ::Rewired::AxisRange const& __cordl_internal_get_range() const;

constexpr ::Rewired::AxisRange& __cordl_internal_get_range() ;

constexpr float_t const& __cordl_internal_get_sensitivity() const;

constexpr float_t& __cordl_internal_get_sensitivity() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_sensitivityCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_sensitivityCurve() ;

constexpr ::Rewired::AxisSensitivityType const& __cordl_internal_get_sensitivityType() const;

constexpr ::Rewired::AxisSensitivityType& __cordl_internal_get_sensitivityType() ;

constexpr float_t const& __cordl_internal_get_zero() const;

constexpr float_t& __cordl_internal_get_zero() ;

constexpr void __cordl_internal_set_axisInfo(::Rewired::Data::Mapping::HardwareAxisInfo*  value) ;

constexpr void __cordl_internal_set_deadZone(float_t  value) ;

constexpr void __cordl_internal_set_doNotCalibrateRange(bool  value) ;

constexpr void __cordl_internal_set_invert(bool  value) ;

constexpr void __cordl_internal_set_max(float_t  value) ;

constexpr void __cordl_internal_set_min(float_t  value) ;

constexpr void __cordl_internal_set_range(::Rewired::AxisRange  value) ;

constexpr void __cordl_internal_set_sensitivity(float_t  value) ;

constexpr void __cordl_internal_set_sensitivityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_sensitivityType(::Rewired::AxisSensitivityType  value) ;

constexpr void __cordl_internal_set_zero(float_t  value) ;

/// @brief Method .ctor, addr 0x18188aad0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18188a9e0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Data::CustomController_Editor_Axis*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18188ac10, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18188ab00, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, float_t  _cordl_fixed_empty_name_whitespace_param_6, float_t  _cordl_fixed_empty_name_whitespace_param_7, float_t  _cordl_fixed_empty_name_whitespace_param_8, float_t  _cordl_fixed_empty_name_whitespace_param_9, bool  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::Data::Mapping::HardwareAxisInfo*  _cordl_fixed_empty_name_whitespace_param_11) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomController_Editor_Axis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomController_Editor_Axis", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomController_Editor_Axis(CustomController_Editor_Axis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomController_Editor_Axis", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomController_Editor_Axis(CustomController_Editor_Axis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2340};

/// @brief Field range, offset: 0x20, size: 0x4, def value: None
 ::Rewired::AxisRange  ___range;

/// @brief Field invert, offset: 0x24, size: 0x1, def value: None
 bool  ___invert;

/// @brief Field deadZone, offset: 0x28, size: 0x4, def value: None
 float_t  ___deadZone;

/// @brief Field zero, offset: 0x2c, size: 0x4, def value: None
 float_t  ___zero;

/// @brief Field min, offset: 0x30, size: 0x4, def value: None
 float_t  ___min;

/// @brief Field max, offset: 0x34, size: 0x4, def value: None
 float_t  ___max;

/// @brief Field doNotCalibrateRange, offset: 0x38, size: 0x1, def value: None
 bool  ___doNotCalibrateRange;

/// @brief Field sensitivityType, offset: 0x3c, size: 0x4, def value: None
 ::Rewired::AxisSensitivityType  ___sensitivityType;

/// @brief Field sensitivity, offset: 0x40, size: 0x4, def value: None
 float_t  ___sensitivity;

/// @brief Field sensitivityCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___sensitivityCurve;

/// @brief Field axisInfo, offset: 0x50, size: 0x8, def value: None
 ::Rewired::Data::Mapping::HardwareAxisInfo*  ___axisInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::CustomController_Editor_Axis, ___range) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor_Axis, ___invert) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor_Axis, ___deadZone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor_Axis, ___zero) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor_Axis, ___min) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor_Axis, ___max) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor_Axis, ___doNotCalibrateRange) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor_Axis, ___sensitivityType) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor_Axis, ___sensitivity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor_Axis, ___sensitivityCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor_Axis, ___axisInfo) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::CustomController_Editor_Axis) == 0x58, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.CustomController_Editor/uszbcWIEZHyvvDMGEXkfUwtbWekO
class CORDL_TYPE CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO : public ::System::Object {
public:
// Declarations
/// @brief Field JlLePNKeyzznpmlLlRnrWsrIsSIk, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_JlLePNKeyzznpmlLlRnrWsrIsSIk, put=__cordl_internal_set_JlLePNKeyzznpmlLlRnrWsrIsSIk)) int32_t  JlLePNKeyzznpmlLlRnrWsrIsSIk;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerElementIdentifier__get_Current)) ::Rewired::ControllerElementIdentifier*  System_Collections_Generic_IEnumerator_Rewired_ControllerElementIdentifier__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field iBSUReteIMhEFuVqacdGhVifRRAJ, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_iBSUReteIMhEFuVqacdGhVifRRAJ, put=__cordl_internal_set_iBSUReteIMhEFuVqacdGhVifRRAJ)) ::Rewired::ControllerElementIdentifier*  iBSUReteIMhEFuVqacdGhVifRRAJ;

/// @brief Field qOZfyKHfJcnODySPccVlFkPNxbefb, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_qOZfyKHfJcnODySPccVlFkPNxbefb, put=__cordl_internal_set_qOZfyKHfJcnODySPccVlFkPNxbefb)) int32_t  qOZfyKHfJcnODySPccVlFkPNxbefb;

/// @brief Field tUEruUNPdWYHfiFLxTSHlSeuogYi, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_tUEruUNPdWYHfiFLxTSHlSeuogYi, put=__cordl_internal_set_tUEruUNPdWYHfiFLxTSHlSeuogYi)) int32_t  tUEruUNPdWYHfiFLxTSHlSeuogYi;

/// @brief Field ubIczptbjqIdfILNHvcfSqnIXEcKA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ubIczptbjqIdfILNHvcfSqnIXEcKA, put=__cordl_internal_set_ubIczptbjqIdfILNHvcfSqnIXEcKA)) ::Rewired::Data::CustomController_Editor*  ubIczptbjqIdfILNHvcfSqnIXEcKA;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerElementIdentifier*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerElementIdentifier*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerElementIdentifier*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerElementIdentifier*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18189f970, size 0x90, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerElementIdentifier>.GetEnumerator, addr 0x18189fa00, size 0xd0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerElementIdentifier*>* System_Collections_Generic_IEnumerable_Rewired_ControllerElementIdentifier__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerElementIdentifier>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::ControllerElementIdentifier* System_Collections_Generic_IEnumerator_Rewired_ControllerElementIdentifier__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x18189fa00, size 0xd0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181049e50, size 0x6fe0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_JlLePNKeyzznpmlLlRnrWsrIsSIk() const;

constexpr int32_t& __cordl_internal_get_JlLePNKeyzznpmlLlRnrWsrIsSIk() ;

constexpr ::Rewired::ControllerElementIdentifier* const& __cordl_internal_get_iBSUReteIMhEFuVqacdGhVifRRAJ() const;

constexpr ::Rewired::ControllerElementIdentifier*& __cordl_internal_get_iBSUReteIMhEFuVqacdGhVifRRAJ() ;

constexpr int32_t const& __cordl_internal_get_qOZfyKHfJcnODySPccVlFkPNxbefb() const;

constexpr int32_t& __cordl_internal_get_qOZfyKHfJcnODySPccVlFkPNxbefb() ;

constexpr int32_t const& __cordl_internal_get_tUEruUNPdWYHfiFLxTSHlSeuogYi() const;

constexpr int32_t& __cordl_internal_get_tUEruUNPdWYHfiFLxTSHlSeuogYi() ;

constexpr ::Rewired::Data::CustomController_Editor* const& __cordl_internal_get_ubIczptbjqIdfILNHvcfSqnIXEcKA() const;

constexpr ::Rewired::Data::CustomController_Editor*& __cordl_internal_get_ubIczptbjqIdfILNHvcfSqnIXEcKA() ;

constexpr void __cordl_internal_set_JlLePNKeyzznpmlLlRnrWsrIsSIk(int32_t  value) ;

constexpr void __cordl_internal_set_iBSUReteIMhEFuVqacdGhVifRRAJ(::Rewired::ControllerElementIdentifier*  value) ;

constexpr void __cordl_internal_set_qOZfyKHfJcnODySPccVlFkPNxbefb(int32_t  value) ;

constexpr void __cordl_internal_set_tUEruUNPdWYHfiFLxTSHlSeuogYi(int32_t  value) ;

constexpr void __cordl_internal_set_ubIczptbjqIdfILNHvcfSqnIXEcKA(::Rewired::Data::CustomController_Editor*  value) ;

/// @brief Method .ctor, addr 0x180d66740, size 0x3cb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerElementIdentifier*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerElementIdentifier*>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerElementIdentifier__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerElementIdentifier*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerElementIdentifier*>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerElementIdentifier__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO(CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO(CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2341};

/// @brief Field tUEruUNPdWYHfiFLxTSHlSeuogYi, offset: 0x10, size: 0x4, def value: None
 int32_t  ___tUEruUNPdWYHfiFLxTSHlSeuogYi;

/// @brief Field iBSUReteIMhEFuVqacdGhVifRRAJ, offset: 0x18, size: 0x8, def value: None
 ::Rewired::ControllerElementIdentifier*  ___iBSUReteIMhEFuVqacdGhVifRRAJ;

/// @brief Field qOZfyKHfJcnODySPccVlFkPNxbefb, offset: 0x20, size: 0x4, def value: None
 int32_t  ___qOZfyKHfJcnODySPccVlFkPNxbefb;

/// @brief Field ubIczptbjqIdfILNHvcfSqnIXEcKA, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Data::CustomController_Editor*  ___ubIczptbjqIdfILNHvcfSqnIXEcKA;

/// @brief Field JlLePNKeyzznpmlLlRnrWsrIsSIk, offset: 0x30, size: 0x4, def value: None
 int32_t  ___JlLePNKeyzznpmlLlRnrWsrIsSIk;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO, ___tUEruUNPdWYHfiFLxTSHlSeuogYi) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO, ___iBSUReteIMhEFuVqacdGhVifRRAJ) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO, ___qOZfyKHfJcnODySPccVlFkPNxbefb) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO, ___ubIczptbjqIdfILNHvcfSqnIXEcKA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO, ___JlLePNKeyzznpmlLlRnrWsrIsSIk) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.CustomController_Editor
class CORDL_TYPE CustomController_Editor : public ::System::Object {
public:
// Declarations
using Axis = ::Rewired::Data::CustomController_Editor_Axis;

using Button = ::Rewired::Data::CustomController_Editor_Button;

using Element = ::Rewired::Data::CustomController_Editor_Element;

using uszbcWIEZHyvvDMGEXkfUwtbWekO = ::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO;

 __declspec(property(get=get_ElementIdentifiers)) ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerElementIdentifier*>*  ElementIdentifiers;

/// @brief Field _axes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__axes, put=__cordl_internal_set__axes)) ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Axis*>*  _axes;

/// @brief Field _buttons, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttons, put=__cordl_internal_set__buttons)) ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Button*>*  _buttons;

/// @brief Field _descriptiveName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__descriptiveName, put=__cordl_internal_set__descriptiveName)) ::StringW  _descriptiveName;

/// @brief Field _elementIdentifierIdCounter, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__elementIdentifierIdCounter, put=__cordl_internal_set__elementIdentifierIdCounter)) int32_t  _elementIdentifierIdCounter;

/// @brief Field _elementIdentifiers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__elementIdentifiers, put=__cordl_internal_set__elementIdentifiers)) ::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>*  _elementIdentifiers;

/// @brief Field _id, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) int32_t  _id;

/// @brief Field _key, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__key, put=__cordl_internal_set__key)) ::StringW  _key;

/// @brief Field _name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _typeGuidString, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__typeGuidString, put=__cordl_internal_set__typeGuidString)) ::StringW  _typeGuidString;

 __declspec(property(get=get_axes)) ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Axis*>*  axes;

 __declspec(property(get=get_axisCount)) int32_t  axisCount;

 __declspec(property(get=get_buttonCount)) int32_t  buttonCount;

 __declspec(property(get=get_buttons)) ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Button*>*  buttons;

 __declspec(property(get=get_descriptiveName, put=set_descriptiveName)) ::StringW  descriptiveName;

 __declspec(property(get=get_elementIdentifiers, put=set_elementIdentifiers)) ::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>*  elementIdentifiers;

 __declspec(property(get=get_id, put=set_id)) int32_t  id;

 __declspec(property(get=get_key, put=set_key)) ::StringW  key;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_typeGuid, put=set_typeGuid)) ::System::Guid  typeGuid;

 __declspec(property(get=get_typeGuidString, put=set_typeGuidString)) ::StringW  typeGuidString;

/// @brief Method AddAxis, addr 0x18188b4a0, size 0xa0, virtual false, abstract: false, final false
inline void AddAxis() ;

/// @brief Method AddButton, addr 0x18188b540, size 0xa0, virtual false, abstract: false, final false
inline void AddButton() ;

/// @brief Method AddElement, addr 0x18188b5e0, size 0xf0, virtual false, abstract: false, final false
inline void AddElement(::Rewired::ControllerElementType  type) ;

/// @brief Method Clone, addr 0x18188b6d0, size 0x40, virtual false, abstract: false, final false
inline ::Rewired::Data::CustomController_Editor* Clone() ;

/// @brief Method ContainsElementIdentifier, addr 0x18188b710, size 0x60, virtual false, abstract: false, final false
inline bool ContainsElementIdentifier(int32_t  id) ;

/// @brief Method CreateGameHardwareMap, addr 0x18188b770, size 0x680, virtual false, abstract: false, final false
inline ::Rewired::HardwareControllerMap_Game* CreateGameHardwareMap() ;

/// @brief Method DeleteElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void DeleteElement(int32_t  index) ;

/// @brief Method DeleteElement, addr 0x18188bdf0, size 0x40, virtual false, abstract: false, final false
inline void DeleteElement(::Rewired::ControllerElementType  type, int32_t  index) ;

/// @brief Method DuplicateElement, addr 0x18188be30, size 0x50, virtual false, abstract: false, final false
inline void DuplicateElement(::Rewired::ControllerElementType  type, int32_t  index) ;

/// @brief Method GetAxisElementIdentifierIds, addr 0x18188be80, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetAxisElementIdentifierIds() ;

/// @brief Method GetAxisNames, addr 0x18188bf10, size 0xc0, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetAxisNames() ;

/// @brief Method GetButtonElementIdentifierIds, addr 0x18188bfd0, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetButtonElementIdentifierIds() ;

/// @brief Method GetButtonNames, addr 0x18188c060, size 0xc0, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetButtonNames() ;

/// @brief Method GetEffectiveAxisRange, addr 0x18188c120, size 0xf0, virtual false, abstract: false, final false
inline bool GetEffectiveAxisRange(int32_t  elementIdentifierId, ::by_ref<::Rewired::AxisRange>  axisRange) ;

/// @brief Method GetEffectiveElementIdentifierType, addr 0x18188c210, size 0x100, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementType GetEffectiveElementIdentifierType(int32_t  elementIdentifierId) ;

/// @brief Method GetElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetElement(int32_t  index) ;

/// @brief Method GetElementElementIdentifierIds, addr 0x18188c310, size 0x140, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetElementElementIdentifierIds(::Rewired::ControllerElementType  type) ;

/// @brief Method GetElementIdentifier, addr 0x18188c940, size 0x40, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementIdentifier* GetElementIdentifier(int32_t  id) ;

/// @brief Method GetElementIdentifierIds, addr 0x18188c5d0, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetElementIdentifierIds() ;

/// @brief Method GetElementIdentifierIdsTypeSorted, addr 0x18188c450, size 0x180, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetElementIdentifierIdsTypeSorted() ;

/// @brief Method GetElementIdentifierNames, addr 0x18188c880, size 0xc0, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetElementIdentifierNames() ;

/// @brief Method GetElementIdentifierNamesTypeSorted, addr 0x18188c660, size 0x220, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetElementIdentifierNamesTypeSorted() ;

/// @brief Method GetElementIdentifiersTypeSorted, addr 0x18188c980, size 0x210, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::ControllerElementIdentifier*> GetElementIdentifiersTypeSorted() ;

/// @brief Method GetElementNames, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<::StringW> GetElementNames() ;

/// @brief Method GetElementNames, addr 0x18188cb90, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetElementNames(::Rewired::ControllerElementType  type) ;

/// @brief Method IndexOfElementIdentifier, addr 0x18188cbc0, size 0x80, virtual false, abstract: false, final false
inline int32_t IndexOfElementIdentifier(int32_t  id) ;

/// @brief Method InsertAxis, addr 0x18188cc40, size 0x90, virtual false, abstract: false, final false
inline void InsertAxis(int32_t  index) ;

/// @brief Method InsertButton, addr 0x18188ccd0, size 0x90, virtual false, abstract: false, final false
inline void InsertButton(int32_t  index) ;

/// @brief Method InsertElement, addr 0x18188cd60, size 0xe0, virtual false, abstract: false, final false
inline void InsertElement(::Rewired::ControllerElementType  type, int32_t  index) ;

static inline ::Rewired::Data::CustomController_Editor* New_ctor() ;

static inline ::Rewired::Data::CustomController_Editor* New_ctor(::Rewired::Data::CustomController_Editor*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ReorderElement, addr 0x18188ce40, size 0xa0, virtual false, abstract: false, final false
inline bool ReorderElement(::Rewired::ControllerElementType  type, int32_t  index, bool  offsetDown, bool  offsetNow) ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Axis*>* const& __cordl_internal_get__axes() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Axis*>*& __cordl_internal_get__axes() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Button*>* const& __cordl_internal_get__buttons() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Button*>*& __cordl_internal_get__buttons() ;

constexpr ::StringW const& __cordl_internal_get__descriptiveName() const;

constexpr ::StringW& __cordl_internal_get__descriptiveName() ;

constexpr int32_t const& __cordl_internal_get__elementIdentifierIdCounter() const;

constexpr int32_t& __cordl_internal_get__elementIdentifierIdCounter() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>* const& __cordl_internal_get__elementIdentifiers() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>*& __cordl_internal_get__elementIdentifiers() ;

constexpr int32_t const& __cordl_internal_get__id() const;

constexpr int32_t& __cordl_internal_get__id() ;

constexpr ::StringW const& __cordl_internal_get__key() const;

constexpr ::StringW& __cordl_internal_get__key() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::StringW const& __cordl_internal_get__typeGuidString() const;

constexpr ::StringW& __cordl_internal_get__typeGuidString() ;

constexpr void __cordl_internal_set__axes(::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Axis*>*  value) ;

constexpr void __cordl_internal_set__buttons(::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Button*>*  value) ;

constexpr void __cordl_internal_set__descriptiveName(::StringW  value) ;

constexpr void __cordl_internal_set__elementIdentifierIdCounter(int32_t  value) ;

constexpr void __cordl_internal_set__elementIdentifiers(::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>*  value) ;

constexpr void __cordl_internal_set__id(int32_t  value) ;

constexpr void __cordl_internal_set__key(::StringW  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__typeGuidString(::StringW  value) ;

/// @brief Method .ctor, addr 0x18188d290, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18188cee0, size 0x3b0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Data::CustomController_Editor*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_ElementIdentifiers, addr 0x18188d340, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerElementIdentifier*>* get_ElementIdentifiers() ;

/// @brief Method get_axes, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Axis*>* get_axes() ;

/// @brief Method get_axisCount, addr 0x18188d390, size 0x20, virtual false, abstract: false, final false
inline int32_t get_axisCount() ;

/// @brief Method get_buttonCount, addr 0x18188d3b0, size 0x20, virtual false, abstract: false, final false
inline int32_t get_buttonCount() ;

/// @brief Method get_buttons, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Button*>* get_buttons() ;

/// @brief Method get_descriptiveName, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_descriptiveName() ;

/// @brief Method get_elementIdentifiers, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>* get_elementIdentifiers() ;

/// @brief Method get_id, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_id() ;

/// @brief Method get_key, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_key() ;

/// @brief Method get_name, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_typeGuid, addr 0x18188d3d0, size 0x50, virtual false, abstract: false, final false
inline ::System::Guid get_typeGuid() ;

/// @brief Method get_typeGuidString, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_typeGuidString() ;

/// @brief Method sZmMoICjGFeINIXYGxOJNeEZTQFfA, addr 0x18188d420, size 0x340, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementIdentifier* sZmMoICjGFeINIXYGxOJNeEZTQFfA(int32_t  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method set_descriptiveName, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_descriptiveName(::StringW  value) ;

/// @brief Method set_elementIdentifiers, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_elementIdentifiers(::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>*  value) ;

/// @brief Method set_id, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_id(int32_t  value) ;

/// @brief Method set_key, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_key(::StringW  value) ;

/// @brief Method set_name, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_typeGuid, addr 0x18188d760, size 0x30, virtual false, abstract: false, final false
inline void set_typeGuid(::System::Guid  value) ;

/// @brief Method set_typeGuidString, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_typeGuidString(::StringW  value) ;

/// @brief Method uemmJivCTMqgDqKMJkzAqZgfNhOy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename >
inline void uemmJivCTMqgDqKMJkzAqZgfNhOy(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<>*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method vBFuXvsVbpPlaYIZCWaKHEWfoeeV, addr 0x18188d790, size 0x260, virtual false, abstract: false, final false
inline ::Rewired::Data::CustomController_Editor_Element* vBFuXvsVbpPlaYIZCWaKHEWfoeeV(::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method xletMqHDXntmZFgNXiUyCUKfmoYXA, addr 0x18188d9f0, size 0x140, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementIdentifier* xletMqHDXntmZFgNXiUyCUKfmoYXA(::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::StringW  _cordl_fixed_empty_name_whitespace_param_5, ::StringW  _cordl_fixed_empty_name_whitespace_param_6) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomController_Editor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomController_Editor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomController_Editor(CustomController_Editor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomController_Editor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomController_Editor(CustomController_Editor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2342};

/// @brief Field _name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _descriptiveName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____descriptiveName;

/// @brief Field _id, offset: 0x20, size: 0x4, def value: None
 int32_t  ____id;

/// @brief Field _typeGuidString, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____typeGuidString;

/// @brief Field _key, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____key;

/// @brief Field _elementIdentifiers, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>*  ____elementIdentifiers;

/// @brief Field _axes, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Axis*>*  ____axes;

/// @brief Field _buttons, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Button*>*  ____buttons;

/// @brief Field _elementIdentifierIdCounter, offset: 0x50, size: 0x4, def value: None
 int32_t  ____elementIdentifierIdCounter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::CustomController_Editor, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor, ____descriptiveName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor, ____id) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor, ____typeGuidString) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor, ____key) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor, ____elementIdentifiers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor, ____axes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor, ____buttons) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::CustomController_Editor, ____elementIdentifierIdCounter) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::CustomController_Editor) == 0x58, "Size mismatch!");

} // namespace end def Rewired::Data
