#pragma once
// IWYU pragma private; include "Rewired/HardwareControllerMap_Game.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/Mapping/zzzz__HardwareAxisInfo_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareButtonInfo_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_def.hpp"
#include "Rewired/zzzz__AxisCalibrationData_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ControllerElementIdentifier_def.hpp"
#include "Rewired/zzzz__HardwareControllerMapIdentifier_def.hpp"
#include "Rewired/zzzz__JoystickType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HardwareControllerMap_Game)
namespace Rewired::Data::Mapping {
class HardwareAxisInfo;
}
namespace Rewired::Data::Mapping {
class HardwareButtonInfo;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickMap_CompoundElement;
}
namespace Rewired::Internal::Localization {
class DeviceLocalizationInfo;
}
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
class ADictionary_2;
}
namespace Rewired {
class ActionElementMap;
}
namespace Rewired {
struct AxisCalibrationData;
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
struct HardwareControllerMapIdentifier;
}
namespace Rewired {
struct HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA;
}
namespace Rewired {
struct JoystickType;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired {
struct HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA;
}
namespace Rewired {
class HardwareControllerMap_Game;
}
// Write type traits
MARK_VAL_T(::Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA);
MARK_REF_T(::Rewired::HardwareControllerMap_Game*);
DEFINE_IL2CPP_CLASS(::Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA, "Rewired", "HardwareControllerMap_Game/OuZTeJFBvkAyAEfLDMUwxWHbCRBiA");
DEFINE_IL2CPP_CLASS(::Rewired::HardwareControllerMap_Game*, "Rewired", "HardwareControllerMap_Game");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.HardwareControllerMap_Game/OuZTeJFBvkAyAEfLDMUwxWHbCRBiA
struct CORDL_TYPE HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA_Unwrapped
enum struct __HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA_Unwrapped : int32_t {
__E_Error = static_cast<int32_t>(0x0),
__E_FoundIndex = static_cast<int32_t>(0x1),
__E_IsWholeElement = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA_Unwrapped () const noexcept {
return static_cast<__HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA(int32_t  value__) noexcept;

/// @brief Field Error value: I32(0)
static ::Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA const Error;

/// @brief Field FoundIndex value: I32(1)
static ::Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA const FoundIndex;

/// @brief Field IsWholeElement value: I32(2)
static ::Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA const IsWholeElement;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2071};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA) == 0x4, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.AxisCalibrationData, Rewired.AxisRange, Rewired.ControllerElementIdentifier, Rewired.Data.Mapping.HardwareAxisInfo, Rewired.Data.Mapping.HardwareButtonInfo, Rewired.Data.Mapping.HardwareJoystickMap::CompoundElement, Rewired.HardwareControllerMapIdentifier, Rewired.JoystickType, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.HardwareControllerMap_Game
class CORDL_TYPE HardwareControllerMap_Game : public ::System::Object {
public:
// Declarations
using OuZTeJFBvkAyAEfLDMUwxWHbCRBiA = ::Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA;

/// @brief Field TQqVpAUKfkMlWPCgkrLMKXtMqtjA, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_TQqVpAUKfkMlWPCgkrLMKXtMqtjA, put=__cordl_internal_set_TQqVpAUKfkMlWPCgkrLMKXtMqtjA)) ::Rewired::Internal::Localization::DeviceLocalizationInfo*  TQqVpAUKfkMlWPCgkrLMKXtMqtjA;

/// @brief Field axis2DCount, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_axis2DCount, put=__cordl_internal_set_axis2DCount)) int32_t  axis2DCount;

/// @brief Field axis2DElementIdentifierIds, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_axis2DElementIdentifierIds, put=__cordl_internal_set_axis2DElementIdentifierIds)) ::ArrayW<int32_t>  axis2DElementIdentifierIds;

/// @brief Field axis2DElementIdentifiers_cache, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_axis2DElementIdentifiers_cache, put=__cordl_internal_set_axis2DElementIdentifiers_cache)) ::ArrayW<::Rewired::ControllerElementIdentifier*>  axis2DElementIdentifiers_cache;

/// @brief Field axis2DElementIdentifiers_readOnly, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_axis2DElementIdentifiers_readOnly, put=__cordl_internal_set_axis2DElementIdentifiers_readOnly)) ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  axis2DElementIdentifiers_readOnly;

/// @brief Field axisCount, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_axisCount, put=__cordl_internal_set_axisCount)) int32_t  axisCount;

/// @brief Field axisElementIdentifierIds, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_axisElementIdentifierIds, put=__cordl_internal_set_axisElementIdentifierIds)) ::ArrayW<int32_t>  axisElementIdentifierIds;

/// @brief Field axisElementIdentifiers_cache, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_axisElementIdentifiers_cache, put=__cordl_internal_set_axisElementIdentifiers_cache)) ::ArrayW<::Rewired::ControllerElementIdentifier*>  axisElementIdentifiers_cache;

/// @brief Field axisElementIdentifiers_readOnly, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_axisElementIdentifiers_readOnly, put=__cordl_internal_set_axisElementIdentifiers_readOnly)) ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  axisElementIdentifiers_readOnly;

/// @brief Field buttonCount, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonCount, put=__cordl_internal_set_buttonCount)) int32_t  buttonCount;

/// @brief Field buttonElementIdentifierIds, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonElementIdentifierIds, put=__cordl_internal_set_buttonElementIdentifierIds)) ::ArrayW<int32_t>  buttonElementIdentifierIds;

/// @brief Field buttonElementIdentifiers_cache, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonElementIdentifiers_cache, put=__cordl_internal_set_buttonElementIdentifiers_cache)) ::ArrayW<::Rewired::ControllerElementIdentifier*>  buttonElementIdentifiers_cache;

/// @brief Field buttonElementIdentifiers_readOnly, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonElementIdentifiers_readOnly, put=__cordl_internal_set_buttonElementIdentifiers_readOnly)) ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  buttonElementIdentifiers_readOnly;

/// @brief Field compoundElementCount, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_compoundElementCount, put=__cordl_internal_set_compoundElementCount)) int32_t  compoundElementCount;

/// @brief Field compoundElements, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_compoundElements, put=__cordl_internal_set_compoundElements)) ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  compoundElements;

/// @brief Field controllerName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllerName, put=__cordl_internal_set_controllerName)) ::StringW  controllerName;

/// @brief Field customControllerSourceId, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_customControllerSourceId, put=__cordl_internal_set_customControllerSourceId)) int32_t  customControllerSourceId;

 __declspec(property(get=get_deviceLocalizationInfo)) ::Rewired::Internal::Localization::DeviceLocalizationInfo*  deviceLocalizationInfo;

/// @brief Field dpadCount, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_dpadCount, put=__cordl_internal_set_dpadCount)) int32_t  dpadCount;

/// @brief Field dpadElementIdentifierIds, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dpadElementIdentifierIds, put=__cordl_internal_set_dpadElementIdentifierIds)) ::ArrayW<int32_t>  dpadElementIdentifierIds;

/// @brief Field dpadElementIdentifiers_cache, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_dpadElementIdentifiers_cache, put=__cordl_internal_set_dpadElementIdentifiers_cache)) ::ArrayW<::Rewired::ControllerElementIdentifier*>  dpadElementIdentifiers_cache;

/// @brief Field dpadElementIdentifiers_readOnly, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_dpadElementIdentifiers_readOnly, put=__cordl_internal_set_dpadElementIdentifiers_readOnly)) ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  dpadElementIdentifiers_readOnly;

/// @brief Field elementIdentifierCount, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_elementIdentifierCount, put=__cordl_internal_set_elementIdentifierCount)) int32_t  elementIdentifierCount;

/// @brief Field elementIdentifiers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementIdentifiers, put=__cordl_internal_set_elementIdentifiers)) ::Rewired::Utils::Classes::Data::ADictionary_2<int32_t,::Rewired::ControllerElementIdentifier*>*  elementIdentifiers;

/// @brief Field elementIdentifiers_cache, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementIdentifiers_cache, put=__cordl_internal_set_elementIdentifiers_cache)) ::ArrayW<::Rewired::ControllerElementIdentifier*>  elementIdentifiers_cache;

/// @brief Field elementIdentifiers_readOnly, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementIdentifiers_readOnly, put=__cordl_internal_set_elementIdentifiers_readOnly)) ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  elementIdentifiers_readOnly;

/// @brief Field hardwareMapIdentifier, offset 0x18, size 0x1c 
 __declspec(property(get=__cordl_internal_get_hardwareMapIdentifier, put=__cordl_internal_set_hardwareMapIdentifier)) ::Rewired::HardwareControllerMapIdentifier  hardwareMapIdentifier;

/// @brief Field hatCount, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_hatCount, put=__cordl_internal_set_hatCount)) int32_t  hatCount;

/// @brief Field hatElementIdentifierIds, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_hatElementIdentifierIds, put=__cordl_internal_set_hatElementIdentifierIds)) ::ArrayW<int32_t>  hatElementIdentifierIds;

/// @brief Field hatElementIdentifiers_cache, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_hatElementIdentifiers_cache, put=__cordl_internal_set_hatElementIdentifiers_cache)) ::ArrayW<::Rewired::ControllerElementIdentifier*>  hatElementIdentifiers_cache;

/// @brief Field hatElementIdentifiers_readOnly, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_hatElementIdentifiers_readOnly, put=__cordl_internal_set_hatElementIdentifiers_readOnly)) ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  hatElementIdentifiers_readOnly;

/// @brief Field hwAxisCalibrationData, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_hwAxisCalibrationData, put=__cordl_internal_set_hwAxisCalibrationData)) ::ArrayW<::Rewired::AxisCalibrationData>  hwAxisCalibrationData;

/// @brief Field hwAxisInfo, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_hwAxisInfo, put=__cordl_internal_set_hwAxisInfo)) ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  hwAxisInfo;

/// @brief Field hwAxisRanges, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_hwAxisRanges, put=__cordl_internal_set_hwAxisRanges)) ::ArrayW<::Rewired::AxisRange>  hwAxisRanges;

/// @brief Field hwButtonInfo, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_hwButtonInfo, put=__cordl_internal_set_hwButtonInfo)) ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  hwButtonInfo;

/// @brief Field joystickTypes, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_joystickTypes, put=__cordl_internal_set_joystickTypes)) ::ArrayW<::Rewired::JoystickType>  joystickTypes;

/// @brief Method DgAjihXXBMHXfaetSwPHxfgpLVaqA, addr 0x1819a0d80, size 0x60, virtual false, abstract: false, final false
inline int32_t DgAjihXXBMHXfaetSwPHxfgpLVaqA(::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method GetAxis2DData, addr 0x1819a0de0, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement* GetAxis2DData(int32_t  index) ;

/// @brief Method GetAxisElementIdentifierById, addr 0x1819a0e70, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementIdentifier* GetAxisElementIdentifierById(int32_t  id) ;

/// @brief Method GetAxisIndex, addr 0x1819a0ee0, size 0x60, virtual false, abstract: false, final false
inline int32_t GetAxisIndex(int32_t  elementIdentifierId) ;

/// @brief Method GetAxisIndex, addr 0x1819a0f40, size 0x100, virtual false, abstract: false, final false
inline int32_t GetAxisIndex(::StringW  elementIdentifierName) ;

/// @brief Method GetButtonElementIdentifierById, addr 0x1819a1040, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementIdentifier* GetButtonElementIdentifierById(int32_t  id) ;

/// @brief Method GetButtonIndex, addr 0x1819a10b0, size 0x60, virtual false, abstract: false, final false
inline int32_t GetButtonIndex(int32_t  elementIdentifierId) ;

/// @brief Method GetButtonIndex, addr 0x1819a1110, size 0x100, virtual false, abstract: false, final false
inline int32_t GetButtonIndex(::StringW  elementIdentifierName) ;

/// @brief Method GetDPadData, addr 0x1819a1210, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement* GetDPadData(int32_t  index) ;

/// @brief Method GetElementIdentifierById, addr 0x1819a12a0, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementIdentifier* GetElementIdentifierById(int32_t  id) ;

/// @brief Method GetElementIdentifierName, addr 0x1819a1330, size 0x60, virtual false, abstract: false, final false
inline ::StringW GetElementIdentifierName(int32_t  elementIdentifierId) ;

/// @brief Method GetElementIdentifierNegativeName, addr 0x1819a1390, size 0x60, virtual false, abstract: false, final false
inline ::StringW GetElementIdentifierNegativeName(int32_t  elementIdentifierId) ;

/// @brief Method GetElementIdentifierPositiveName, addr 0x1819a13f0, size 0x60, virtual false, abstract: false, final false
inline ::StringW GetElementIdentifierPositiveName(int32_t  elementIdentifierId) ;

/// @brief Method GetElementType, addr 0x1819a1450, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementType GetElementType(int32_t  elementIdentifierId) ;

/// @brief Method GetHatData, addr 0x1819a14c0, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement* GetHatData(int32_t  index) ;

static inline ::Rewired::HardwareControllerMap_Game* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::HardwareControllerMapIdentifier  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_4, ::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace_param_5, ::ArrayW<::Rewired::AxisRange>  _cordl_fixed_empty_name_whitespace_param_6, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_9) ;

static inline ::Rewired::HardwareControllerMap_Game* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_4, ::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace_param_5, ::ArrayW<::Rewired::AxisRange>  _cordl_fixed_empty_name_whitespace_param_6, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_9) ;

static inline ::Rewired::HardwareControllerMap_Game* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::HardwareControllerMapIdentifier  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::JoystickType>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace_param_4, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_5, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_6, ::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::AxisRange>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  _cordl_fixed_empty_name_whitespace_param_9, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_10, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_11) ;

static inline ::Rewired::HardwareControllerMap_Game* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_4, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_5, ::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace_param_6, ::ArrayW<::Rewired::AxisRange>  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_9, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_10) ;

/// @brief Method TryGetCompoundElementMemberCombinedGlyph, addr 0x1819a1550, size 0x2a0, virtual false, abstract: false, final false
inline bool TryGetCompoundElementMemberCombinedGlyph(::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  aems, bool  getGlyph, bool  getFinalKey, ::by_ref<::System::Object*>  glyphResult, ::by_ref<::StringW>  finalKey) ;

/// @brief Method TryGetCompoundElementMemberCombinedLocalizedName, addr 0x1819a17f0, size 0x1d0, virtual false, abstract: false, final false
inline bool TryGetCompoundElementMemberCombinedLocalizedName(::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  aems, ::by_ref<::StringW>  result) ;

constexpr ::Rewired::Internal::Localization::DeviceLocalizationInfo* const& __cordl_internal_get_TQqVpAUKfkMlWPCgkrLMKXtMqtjA() const;

constexpr ::Rewired::Internal::Localization::DeviceLocalizationInfo*& __cordl_internal_get_TQqVpAUKfkMlWPCgkrLMKXtMqtjA() ;

constexpr int32_t const& __cordl_internal_get_axis2DCount() const;

constexpr int32_t& __cordl_internal_get_axis2DCount() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_axis2DElementIdentifierIds() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_axis2DElementIdentifierIds() ;

constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*> const& __cordl_internal_get_axis2DElementIdentifiers_cache() const;

constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*>& __cordl_internal_get_axis2DElementIdentifiers_cache() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* const& __cordl_internal_get_axis2DElementIdentifiers_readOnly() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*& __cordl_internal_get_axis2DElementIdentifiers_readOnly() ;

constexpr int32_t const& __cordl_internal_get_axisCount() const;

constexpr int32_t& __cordl_internal_get_axisCount() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_axisElementIdentifierIds() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_axisElementIdentifierIds() ;

constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*> const& __cordl_internal_get_axisElementIdentifiers_cache() const;

constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*>& __cordl_internal_get_axisElementIdentifiers_cache() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* const& __cordl_internal_get_axisElementIdentifiers_readOnly() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*& __cordl_internal_get_axisElementIdentifiers_readOnly() ;

constexpr int32_t const& __cordl_internal_get_buttonCount() const;

constexpr int32_t& __cordl_internal_get_buttonCount() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_buttonElementIdentifierIds() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_buttonElementIdentifierIds() ;

constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*> const& __cordl_internal_get_buttonElementIdentifiers_cache() const;

constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*>& __cordl_internal_get_buttonElementIdentifiers_cache() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* const& __cordl_internal_get_buttonElementIdentifiers_readOnly() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*& __cordl_internal_get_buttonElementIdentifiers_readOnly() ;

constexpr int32_t const& __cordl_internal_get_compoundElementCount() const;

constexpr int32_t& __cordl_internal_get_compoundElementCount() ;

constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*> const& __cordl_internal_get_compoundElements() const;

constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>& __cordl_internal_get_compoundElements() ;

constexpr ::StringW const& __cordl_internal_get_controllerName() const;

constexpr ::StringW& __cordl_internal_get_controllerName() ;

constexpr int32_t const& __cordl_internal_get_customControllerSourceId() const;

constexpr int32_t& __cordl_internal_get_customControllerSourceId() ;

constexpr int32_t const& __cordl_internal_get_dpadCount() const;

constexpr int32_t& __cordl_internal_get_dpadCount() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_dpadElementIdentifierIds() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_dpadElementIdentifierIds() ;

constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*> const& __cordl_internal_get_dpadElementIdentifiers_cache() const;

constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*>& __cordl_internal_get_dpadElementIdentifiers_cache() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* const& __cordl_internal_get_dpadElementIdentifiers_readOnly() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*& __cordl_internal_get_dpadElementIdentifiers_readOnly() ;

constexpr int32_t const& __cordl_internal_get_elementIdentifierCount() const;

constexpr int32_t& __cordl_internal_get_elementIdentifierCount() ;

constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<int32_t,::Rewired::ControllerElementIdentifier*>* const& __cordl_internal_get_elementIdentifiers() const;

constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<int32_t,::Rewired::ControllerElementIdentifier*>*& __cordl_internal_get_elementIdentifiers() ;

constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*> const& __cordl_internal_get_elementIdentifiers_cache() const;

constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*>& __cordl_internal_get_elementIdentifiers_cache() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* const& __cordl_internal_get_elementIdentifiers_readOnly() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*& __cordl_internal_get_elementIdentifiers_readOnly() ;

constexpr ::Rewired::HardwareControllerMapIdentifier const& __cordl_internal_get_hardwareMapIdentifier() const;

constexpr ::Rewired::HardwareControllerMapIdentifier& __cordl_internal_get_hardwareMapIdentifier() ;

constexpr int32_t const& __cordl_internal_get_hatCount() const;

constexpr int32_t& __cordl_internal_get_hatCount() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_hatElementIdentifierIds() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_hatElementIdentifierIds() ;

constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*> const& __cordl_internal_get_hatElementIdentifiers_cache() const;

constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*>& __cordl_internal_get_hatElementIdentifiers_cache() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* const& __cordl_internal_get_hatElementIdentifiers_readOnly() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*& __cordl_internal_get_hatElementIdentifiers_readOnly() ;

constexpr ::ArrayW<::Rewired::AxisCalibrationData> const& __cordl_internal_get_hwAxisCalibrationData() const;

constexpr ::ArrayW<::Rewired::AxisCalibrationData>& __cordl_internal_get_hwAxisCalibrationData() ;

constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*> const& __cordl_internal_get_hwAxisInfo() const;

constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>& __cordl_internal_get_hwAxisInfo() ;

constexpr ::ArrayW<::Rewired::AxisRange> const& __cordl_internal_get_hwAxisRanges() const;

constexpr ::ArrayW<::Rewired::AxisRange>& __cordl_internal_get_hwAxisRanges() ;

constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*> const& __cordl_internal_get_hwButtonInfo() const;

constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>& __cordl_internal_get_hwButtonInfo() ;

constexpr ::ArrayW<::Rewired::JoystickType> const& __cordl_internal_get_joystickTypes() const;

constexpr ::ArrayW<::Rewired::JoystickType>& __cordl_internal_get_joystickTypes() ;

constexpr void __cordl_internal_set_TQqVpAUKfkMlWPCgkrLMKXtMqtjA(::Rewired::Internal::Localization::DeviceLocalizationInfo*  value) ;

constexpr void __cordl_internal_set_axis2DCount(int32_t  value) ;

constexpr void __cordl_internal_set_axis2DElementIdentifierIds(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_axis2DElementIdentifiers_cache(::ArrayW<::Rewired::ControllerElementIdentifier*>  value) ;

constexpr void __cordl_internal_set_axis2DElementIdentifiers_readOnly(::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  value) ;

constexpr void __cordl_internal_set_axisCount(int32_t  value) ;

constexpr void __cordl_internal_set_axisElementIdentifierIds(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_axisElementIdentifiers_cache(::ArrayW<::Rewired::ControllerElementIdentifier*>  value) ;

constexpr void __cordl_internal_set_axisElementIdentifiers_readOnly(::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  value) ;

constexpr void __cordl_internal_set_buttonCount(int32_t  value) ;

constexpr void __cordl_internal_set_buttonElementIdentifierIds(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_buttonElementIdentifiers_cache(::ArrayW<::Rewired::ControllerElementIdentifier*>  value) ;

constexpr void __cordl_internal_set_buttonElementIdentifiers_readOnly(::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  value) ;

constexpr void __cordl_internal_set_compoundElementCount(int32_t  value) ;

constexpr void __cordl_internal_set_compoundElements(::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  value) ;

constexpr void __cordl_internal_set_controllerName(::StringW  value) ;

constexpr void __cordl_internal_set_customControllerSourceId(int32_t  value) ;

constexpr void __cordl_internal_set_dpadCount(int32_t  value) ;

constexpr void __cordl_internal_set_dpadElementIdentifierIds(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_dpadElementIdentifiers_cache(::ArrayW<::Rewired::ControllerElementIdentifier*>  value) ;

constexpr void __cordl_internal_set_dpadElementIdentifiers_readOnly(::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  value) ;

constexpr void __cordl_internal_set_elementIdentifierCount(int32_t  value) ;

constexpr void __cordl_internal_set_elementIdentifiers(::Rewired::Utils::Classes::Data::ADictionary_2<int32_t,::Rewired::ControllerElementIdentifier*>*  value) ;

constexpr void __cordl_internal_set_elementIdentifiers_cache(::ArrayW<::Rewired::ControllerElementIdentifier*>  value) ;

constexpr void __cordl_internal_set_elementIdentifiers_readOnly(::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  value) ;

constexpr void __cordl_internal_set_hardwareMapIdentifier(::Rewired::HardwareControllerMapIdentifier  value) ;

constexpr void __cordl_internal_set_hatCount(int32_t  value) ;

constexpr void __cordl_internal_set_hatElementIdentifierIds(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_hatElementIdentifiers_cache(::ArrayW<::Rewired::ControllerElementIdentifier*>  value) ;

constexpr void __cordl_internal_set_hatElementIdentifiers_readOnly(::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  value) ;

constexpr void __cordl_internal_set_hwAxisCalibrationData(::ArrayW<::Rewired::AxisCalibrationData>  value) ;

constexpr void __cordl_internal_set_hwAxisInfo(::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  value) ;

constexpr void __cordl_internal_set_hwAxisRanges(::ArrayW<::Rewired::AxisRange>  value) ;

constexpr void __cordl_internal_set_hwButtonInfo(::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  value) ;

constexpr void __cordl_internal_set_joystickTypes(::ArrayW<::Rewired::JoystickType>  value) ;

/// @brief Method .ctor, addr 0x1819a19c0, size 0x320, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::HardwareControllerMapIdentifier  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_4, ::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace_param_5, ::ArrayW<::Rewired::AxisRange>  _cordl_fixed_empty_name_whitespace_param_6, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_9) ;

/// @brief Method .ctor, addr 0x1819a1d70, size 0xb90, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_4, ::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace_param_5, ::ArrayW<::Rewired::AxisRange>  _cordl_fixed_empty_name_whitespace_param_6, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_9) ;

/// @brief Method .ctor, addr 0x1819a2900, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::HardwareControllerMapIdentifier  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::JoystickType>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace_param_4, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_5, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_6, ::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::AxisRange>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  _cordl_fixed_empty_name_whitespace_param_9, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_10, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_11) ;

/// @brief Method .ctor, addr 0x1819a1ce0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_4, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_5, ::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace_param_6, ::ArrayW<::Rewired::AxisRange>  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_9, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_10) ;

/// @brief Method fUhOVmNVjWkAOhjkChKNPhLglmnx, addr 0x1819a29f0, size 0x360, virtual false, abstract: false, final false
static inline ::Rewired::HardwareControllerMap_Game_OuZTeJFBvkAyAEfLDMUwxWHbCRBiA fUhOVmNVjWkAOhjkChKNPhLglmnx(::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementIdentifier*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<int32_t>  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method get_deviceLocalizationInfo, addr 0x1803370e0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Internal::Localization::DeviceLocalizationInfo* get_deviceLocalizationInfo() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareControllerMap_Game() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareControllerMap_Game", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareControllerMap_Game(HardwareControllerMap_Game && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareControllerMap_Game", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareControllerMap_Game(HardwareControllerMap_Game const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2072};

/// @brief Field controllerName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___controllerName;

/// @brief Field hardwareMapIdentifier, offset: 0x18, size: 0x1c, def value: None
 ::Rewired::HardwareControllerMapIdentifier  ___hardwareMapIdentifier;

/// @brief Field customControllerSourceId, offset: 0x34, size: 0x4, def value: None
 int32_t  ___customControllerSourceId;

/// @brief Field elementIdentifiers, offset: 0x38, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::ADictionary_2<int32_t,::Rewired::ControllerElementIdentifier*>*  ___elementIdentifiers;

/// @brief Field elementIdentifiers_cache, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Rewired::ControllerElementIdentifier*>  ___elementIdentifiers_cache;

/// @brief Field buttonElementIdentifiers_cache, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::Rewired::ControllerElementIdentifier*>  ___buttonElementIdentifiers_cache;

/// @brief Field axisElementIdentifiers_cache, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::Rewired::ControllerElementIdentifier*>  ___axisElementIdentifiers_cache;

/// @brief Field axis2DElementIdentifiers_cache, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::Rewired::ControllerElementIdentifier*>  ___axis2DElementIdentifiers_cache;

/// @brief Field hatElementIdentifiers_cache, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::Rewired::ControllerElementIdentifier*>  ___hatElementIdentifiers_cache;

/// @brief Field dpadElementIdentifiers_cache, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::Rewired::ControllerElementIdentifier*>  ___dpadElementIdentifiers_cache;

/// @brief Field elementIdentifiers_readOnly, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  ___elementIdentifiers_readOnly;

/// @brief Field buttonElementIdentifiers_readOnly, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  ___buttonElementIdentifiers_readOnly;

/// @brief Field axisElementIdentifiers_readOnly, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  ___axisElementIdentifiers_readOnly;

/// @brief Field axis2DElementIdentifiers_readOnly, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  ___axis2DElementIdentifiers_readOnly;

/// @brief Field hatElementIdentifiers_readOnly, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  ___hatElementIdentifiers_readOnly;

/// @brief Field dpadElementIdentifiers_readOnly, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  ___dpadElementIdentifiers_readOnly;

/// @brief Field buttonElementIdentifierIds, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___buttonElementIdentifierIds;

/// @brief Field axisElementIdentifierIds, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___axisElementIdentifierIds;

/// @brief Field axis2DElementIdentifierIds, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___axis2DElementIdentifierIds;

/// @brief Field hatElementIdentifierIds, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___hatElementIdentifierIds;

/// @brief Field dpadElementIdentifierIds, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___dpadElementIdentifierIds;

/// @brief Field elementIdentifierCount, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___elementIdentifierCount;

/// @brief Field axisCount, offset: 0xcc, size: 0x4, def value: None
 int32_t  ___axisCount;

/// @brief Field buttonCount, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___buttonCount;

/// @brief Field compoundElementCount, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___compoundElementCount;

/// @brief Field axis2DCount, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___axis2DCount;

/// @brief Field hatCount, offset: 0xdc, size: 0x4, def value: None
 int32_t  ___hatCount;

/// @brief Field dpadCount, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___dpadCount;

/// @brief Field joystickTypes, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::Rewired::JoystickType>  ___joystickTypes;

/// @brief Field hwAxisCalibrationData, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<::Rewired::AxisCalibrationData>  ___hwAxisCalibrationData;

/// @brief Field hwAxisRanges, offset: 0xf8, size: 0x8, def value: None
 ::ArrayW<::Rewired::AxisRange>  ___hwAxisRanges;

/// @brief Field hwAxisInfo, offset: 0x100, size: 0x8, def value: None
 ::ArrayW<::Rewired::Data::Mapping::HardwareAxisInfo*>  ___hwAxisInfo;

/// @brief Field hwButtonInfo, offset: 0x108, size: 0x8, def value: None
 ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  ___hwButtonInfo;

/// @brief Field compoundElements, offset: 0x110, size: 0x8, def value: None
 ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  ___compoundElements;

/// @brief Field TQqVpAUKfkMlWPCgkrLMKXtMqtjA, offset: 0x118, size: 0x8, def value: None
 ::Rewired::Internal::Localization::DeviceLocalizationInfo*  ___TQqVpAUKfkMlWPCgkrLMKXtMqtjA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___controllerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___hardwareMapIdentifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___customControllerSourceId) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___elementIdentifiers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___elementIdentifiers_cache) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___buttonElementIdentifiers_cache) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___axisElementIdentifiers_cache) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___axis2DElementIdentifiers_cache) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___hatElementIdentifiers_cache) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___dpadElementIdentifiers_cache) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___elementIdentifiers_readOnly) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___buttonElementIdentifiers_readOnly) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___axisElementIdentifiers_readOnly) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___axis2DElementIdentifiers_readOnly) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___hatElementIdentifiers_readOnly) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___dpadElementIdentifiers_readOnly) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___buttonElementIdentifierIds) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___axisElementIdentifierIds) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___axis2DElementIdentifierIds) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___hatElementIdentifierIds) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___dpadElementIdentifierIds) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___elementIdentifierCount) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___axisCount) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___buttonCount) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___compoundElementCount) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___axis2DCount) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___hatCount) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___dpadCount) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___joystickTypes) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___hwAxisCalibrationData) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___hwAxisRanges) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___hwAxisInfo) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___hwButtonInfo) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___compoundElements) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMap_Game, ___TQqVpAUKfkMlWPCgkrLMKXtMqtjA) == 0x118, "Offset mismatch!");

static_assert(sizeof(::Rewired::HardwareControllerMap_Game) == 0x120, "Size mismatch!");

} // namespace end def Rewired
