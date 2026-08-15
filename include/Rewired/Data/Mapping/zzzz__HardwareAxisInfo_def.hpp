#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/HardwareAxisInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/Mapping/zzzz__SpecialAxisType_def.hpp"
#include "Rewired/zzzz__AxisCoordinateMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HardwareAxisInfo)
namespace Rewired::Data::Mapping {
struct SpecialAxisType;
}
namespace Rewired::Utils::Interfaces {
class IDeepCloneable;
}
namespace Rewired {
struct AxisCoordinateMode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Data::Mapping {
class HardwareAxisInfo;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::HardwareAxisInfo*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::HardwareAxisInfo*, "Rewired.Data.Mapping", "HardwareAxisInfo");
// Dependencies Rewired.AxisCoordinateMode, Rewired.Data.Mapping.SpecialAxisType, System.Object
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.HardwareAxisInfo
class CORDL_TYPE HardwareAxisInfo : public ::System::Object {
public:
// Declarations
/// @brief Field _dataFormat, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__dataFormat, put=__cordl_internal_set__dataFormat)) ::Rewired::AxisCoordinateMode  _dataFormat;

/// @brief Field _excludeFromPolling, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get__excludeFromPolling, put=__cordl_internal_set__excludeFromPolling)) bool  _excludeFromPolling;

/// @brief Field _pollingDeadZone, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__pollingDeadZone, put=__cordl_internal_set__pollingDeadZone)) float_t  _pollingDeadZone;

/// @brief Field _specialAxisType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__specialAxisType, put=__cordl_internal_set__specialAxisType)) ::Rewired::Data::Mapping::SpecialAxisType  _specialAxisType;

 __declspec(property(get=get_dataFormat)) ::Rewired::AxisCoordinateMode  dataFormat;

 __declspec(property(get=get_excludeFromPolling)) bool  excludeFromPolling;

 __declspec(property(get=get_pollingDeadZone)) float_t  pollingDeadZone;

 __declspec(property(get=get_specialAxisType)) ::Rewired::Data::Mapping::SpecialAxisType  specialAxisType;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr operator  ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept;

/// @brief Method DeepClone, addr 0x1818d0c20, size 0x60, virtual true, abstract: false, final true
inline ::System::Object* DeepClone() ;

static inline ::Rewired::Data::Mapping::HardwareAxisInfo* New_ctor() ;

static inline ::Rewired::Data::Mapping::HardwareAxisInfo* New_ctor(::Rewired::AxisCoordinateMode  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Data::Mapping::SpecialAxisType  _cordl_fixed_empty_name_whitespace_param_3) ;

constexpr ::Rewired::AxisCoordinateMode const& __cordl_internal_get__dataFormat() const;

constexpr ::Rewired::AxisCoordinateMode& __cordl_internal_get__dataFormat() ;

constexpr bool const& __cordl_internal_get__excludeFromPolling() const;

constexpr bool& __cordl_internal_get__excludeFromPolling() ;

constexpr float_t const& __cordl_internal_get__pollingDeadZone() const;

constexpr float_t& __cordl_internal_get__pollingDeadZone() ;

constexpr ::Rewired::Data::Mapping::SpecialAxisType const& __cordl_internal_get__specialAxisType() const;

constexpr ::Rewired::Data::Mapping::SpecialAxisType& __cordl_internal_get__specialAxisType() ;

constexpr void __cordl_internal_set__dataFormat(::Rewired::AxisCoordinateMode  value) ;

constexpr void __cordl_internal_set__excludeFromPolling(bool  value) ;

constexpr void __cordl_internal_set__pollingDeadZone(float_t  value) ;

constexpr void __cordl_internal_set__specialAxisType(::Rewired::Data::Mapping::SpecialAxisType  value) ;

/// @brief Method .ctor, addr 0x1818d0c80, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1818d0ca0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Rewired::AxisCoordinateMode  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Data::Mapping::SpecialAxisType  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method get_Default, addr 0x1818d0cc0, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::Data::Mapping::HardwareAxisInfo* get_Default() ;

/// @brief Method get_dataFormat, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::AxisCoordinateMode get_dataFormat() ;

/// @brief Method get_excludeFromPolling, addr 0x18039e7b0, size 0x10, virtual false, abstract: false, final false
inline bool get_excludeFromPolling() ;

/// @brief Method get_pollingDeadZone, addr 0x1802f80a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_pollingDeadZone() ;

/// @brief Method get_specialAxisType, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Data::Mapping::SpecialAxisType get_specialAxisType() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareAxisInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareAxisInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareAxisInfo(HardwareAxisInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareAxisInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareAxisInfo(HardwareAxisInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2664};

/// @brief Field _dataFormat, offset: 0x10, size: 0x4, def value: None
 ::Rewired::AxisCoordinateMode  ____dataFormat;

/// @brief Field _excludeFromPolling, offset: 0x14, size: 0x1, def value: None
 bool  ____excludeFromPolling;

/// @brief Field _specialAxisType, offset: 0x18, size: 0x4, def value: None
 ::Rewired::Data::Mapping::SpecialAxisType  ____specialAxisType;

/// @brief Field _pollingDeadZone, offset: 0x1c, size: 0x4, def value: None
 float_t  ____pollingDeadZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::HardwareAxisInfo, ____dataFormat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareAxisInfo, ____excludeFromPolling) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareAxisInfo, ____specialAxisType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::HardwareAxisInfo, ____pollingDeadZone) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::HardwareAxisInfo) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
