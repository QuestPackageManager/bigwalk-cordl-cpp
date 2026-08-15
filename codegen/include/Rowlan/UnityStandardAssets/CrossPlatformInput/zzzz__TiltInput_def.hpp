#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/CrossPlatformInput/TiltInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TiltInput)
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
struct AxisMapping_TiltInput_MappingType;
}
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
class CrossPlatformInputManager_VirtualAxis;
}
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
class TiltInput_AxisMapping;
}
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
struct TiltInput_AxisOptions;
}
// Forward declare root types
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
struct AxisMapping_TiltInput_MappingType;
}
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
struct TiltInput_AxisOptions;
}
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
class TiltInput;
}
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
class TiltInput_AxisMapping;
}
// Write type traits
MARK_VAL_T(::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType);
MARK_VAL_T(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions);
MARK_REF_T(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput*);
MARK_REF_T(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping*);
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType, "Rowlan.UnityStandardAssets.CrossPlatformInput", "TiltInput/AxisMapping/MappingType");
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions, "Rowlan.UnityStandardAssets.CrossPlatformInput", "TiltInput/AxisOptions");
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput*, "Rowlan.UnityStandardAssets.CrossPlatformInput", "TiltInput");
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping*, "Rowlan.UnityStandardAssets.CrossPlatformInput", "TiltInput/AxisMapping");
// Dependencies 
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
// Is value type: true
// CS Name: Rowlan.UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions
struct CORDL_TYPE TiltInput_AxisOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TiltInput_AxisOptions_Unwrapped
enum struct __TiltInput_AxisOptions_Unwrapped : int32_t {
__E_ForwardAxis = static_cast<int32_t>(0x0),
__E_SidewaysAxis = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TiltInput_AxisOptions_Unwrapped () const noexcept {
return static_cast<__TiltInput_AxisOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TiltInput_AxisOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TiltInput_AxisOptions(int32_t  value__) noexcept;

/// @brief Field ForwardAxis value: I32(0)
static ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions const ForwardAxis;

/// @brief Field SidewaysAxis value: I32(1)
static ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions const SidewaysAxis;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20355};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::CrossPlatformInput
// Dependencies 
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
// Is value type: true
// CS Name: Rowlan.UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType
struct CORDL_TYPE AxisMapping_TiltInput_MappingType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AxisMapping_TiltInput_MappingType_Unwrapped
enum struct __AxisMapping_TiltInput_MappingType_Unwrapped : int32_t {
__E_NamedAxis = static_cast<int32_t>(0x0),
__E_MousePositionX = static_cast<int32_t>(0x1),
__E_MousePositionY = static_cast<int32_t>(0x2),
__E_MousePositionZ = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AxisMapping_TiltInput_MappingType_Unwrapped () const noexcept {
return static_cast<__AxisMapping_TiltInput_MappingType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AxisMapping_TiltInput_MappingType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AxisMapping_TiltInput_MappingType(int32_t  value__) noexcept;

/// @brief Field MousePositionX value: I32(1)
static ::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType const MousePositionX;

/// @brief Field MousePositionY value: I32(2)
static ::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType const MousePositionY;

/// @brief Field MousePositionZ value: I32(3)
static ::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType const MousePositionZ;

/// @brief Field NamedAxis value: I32(0)
static ::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType const NamedAxis;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20356};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::CrossPlatformInput
// Dependencies Rowlan.UnityStandardAssets.CrossPlatformInput.TiltInput::AxisMapping::MappingType, System.Object
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
// Is value type: false
// CS Name: Rowlan.UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
class CORDL_TYPE TiltInput_AxisMapping : public ::System::Object {
public:
// Declarations
using MappingType = ::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType;

/// @brief Field axisName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_axisName, put=__cordl_internal_set_axisName)) ::StringW  axisName;

/// @brief Field type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType  type;

static inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_axisName() const;

constexpr ::StringW& __cordl_internal_get_axisName() ;

constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType const& __cordl_internal_get_type() const;

constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_axisName(::StringW  value) ;

constexpr void __cordl_internal_set_type(::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TiltInput_AxisMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TiltInput_AxisMapping", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TiltInput_AxisMapping(TiltInput_AxisMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TiltInput_AxisMapping", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TiltInput_AxisMapping(TiltInput_AxisMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20357};

/// @brief Field type, offset: 0x10, size: 0x4, def value: None
 ::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType  ___type;

/// @brief Field axisName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___axisName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping, ___axisName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping) == 0x20, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::CrossPlatformInput
// Dependencies Rowlan.UnityStandardAssets.CrossPlatformInput.TiltInput::AxisOptions, UnityEngine.MonoBehaviour
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
// Is value type: false
// CS Name: Rowlan.UnityStandardAssets.CrossPlatformInput.TiltInput
class CORDL_TYPE TiltInput : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AxisMapping = ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping;

using AxisOptions = ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions;

/// @brief Field centreAngleOffset, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_centreAngleOffset, put=__cordl_internal_set_centreAngleOffset)) float_t  centreAngleOffset;

/// @brief Field fullTiltAngle, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fullTiltAngle, put=__cordl_internal_set_fullTiltAngle)) float_t  fullTiltAngle;

/// @brief Field m_SteerAxis, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SteerAxis, put=__cordl_internal_set_m_SteerAxis)) ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*  m_SteerAxis;

/// @brief Field mapping, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapping, put=__cordl_internal_set_mapping)) ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping*  mapping;

/// @brief Field tiltAroundAxis, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_tiltAroundAxis, put=__cordl_internal_set_tiltAroundAxis)) ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions  tiltAroundAxis;

static inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput* New_ctor() ;

/// @brief Method OnDisable, addr 0x181ac1610, size 0xc0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x181ac16d0, size 0xa0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x181ac1770, size 0x2f0, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_centreAngleOffset() const;

constexpr float_t& __cordl_internal_get_centreAngleOffset() ;

constexpr float_t const& __cordl_internal_get_fullTiltAngle() const;

constexpr float_t& __cordl_internal_get_fullTiltAngle() ;

constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis* const& __cordl_internal_get_m_SteerAxis() const;

constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*& __cordl_internal_get_m_SteerAxis() ;

constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping* const& __cordl_internal_get_mapping() const;

constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping*& __cordl_internal_get_mapping() ;

constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions const& __cordl_internal_get_tiltAroundAxis() const;

constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions& __cordl_internal_get_tiltAroundAxis() ;

constexpr void __cordl_internal_set_centreAngleOffset(float_t  value) ;

constexpr void __cordl_internal_set_fullTiltAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_SteerAxis(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*  value) ;

constexpr void __cordl_internal_set_mapping(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping*  value) ;

constexpr void __cordl_internal_set_tiltAroundAxis(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions  value) ;

/// @brief Method .ctor, addr 0x181ac1a60, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TiltInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TiltInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TiltInput(TiltInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TiltInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TiltInput(TiltInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20358};

/// @brief Field mapping, offset: 0x20, size: 0x8, def value: None
 ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping*  ___mapping;

/// @brief Field tiltAroundAxis, offset: 0x28, size: 0x4, def value: None
 ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions  ___tiltAroundAxis;

/// @brief Field fullTiltAngle, offset: 0x2c, size: 0x4, def value: None
 float_t  ___fullTiltAngle;

/// @brief Field centreAngleOffset, offset: 0x30, size: 0x4, def value: None
 float_t  ___centreAngleOffset;

/// @brief Field m_SteerAxis, offset: 0x38, size: 0x8, def value: None
 ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*  ___m_SteerAxis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput, ___mapping) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput, ___tiltAroundAxis) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput, ___fullTiltAngle) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput, ___centreAngleOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput, ___m_SteerAxis) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput) == 0x40, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::CrossPlatformInput
