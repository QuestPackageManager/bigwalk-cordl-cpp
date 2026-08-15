#pragma once
// IWYU pragma private; include "Rewired/ControllerTemplateActionAxisMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ControllerTemplateActionElementMap_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerTemplateActionAxisMap)
namespace Rewired::Utils::Classes::Data {
class SerializedObject;
}
namespace Rewired {
class ActionElementMap;
}
namespace Rewired {
struct AxisRange;
}
namespace Rewired {
class IControllerElementTarget;
}
namespace Rewired {
class IControllerTemplateElementSource;
}
namespace Rewired {
struct Pole;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Rewired {
class ControllerTemplateActionAxisMap;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerTemplateActionAxisMap*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerTemplateActionAxisMap*, "Rewired", "ControllerTemplateActionAxisMap");
// Dependencies Rewired.AxisRange, Rewired.ControllerTemplateActionElementMap, Rewired.Pole
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerTemplateActionAxisMap
class CORDL_TYPE ControllerTemplateActionAxisMap : public ::Rewired::ControllerTemplateActionElementMap {
public:
// Declarations
/// @brief Field ZGIiCoDHReuPmZvWiKFFHJQFGBQp, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ZGIiCoDHReuPmZvWiKFFHJQFGBQp, put=__cordl_internal_set_ZGIiCoDHReuPmZvWiKFFHJQFGBQp)) ::Rewired::Pole  ZGIiCoDHReuPmZvWiKFFHJQFGBQp;

 __declspec(property(get=get_axisContribution)) ::Rewired::Pole  axisContribution;

 __declspec(property(get=get_axisRange)) ::Rewired::AxisRange  axisRange;

 __declspec(property(get=get_invert)) bool  invert;

/// @brief Field knNbdcvlCnWNttoTwRpSUNSJkoIP, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_knNbdcvlCnWNttoTwRpSUNSJkoIP, put=__cordl_internal_set_knNbdcvlCnWNttoTwRpSUNSJkoIP)) bool  knNbdcvlCnWNttoTwRpSUNSJkoIP;

/// @brief Field yzHVCsQOKnZqGaSONvtuffXEvQXR, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_yzHVCsQOKnZqGaSONvtuffXEvQXR, put=__cordl_internal_set_yzHVCsQOKnZqGaSONvtuffXEvQXR)) ::Rewired::AxisRange  yzHVCsQOKnZqGaSONvtuffXEvQXR;

/// @brief Method ARuZrxUPPFhtXqfoDVjTWqfyXXxh, addr 0x181916390, size 0x200, virtual true, abstract: false, final false
inline int32_t ARuZrxUPPFhtXqfoDVjTWqfyXXxh(::Rewired::IControllerTemplateElementSource*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method FHxCFGWfaMxWjoMWTTAknCLQgXnj, addr 0x181916590, size 0x150, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* FHxCFGWfaMxWjoMWTTAknCLQgXnj(::Rewired::IControllerElementTarget*  _cordl_fixed_empty_name_whitespace, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_2) ;

static inline ::Rewired::ControllerTemplateActionAxisMap* New_ctor(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerTemplateActionAxisMap* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2) ;

static inline ::Rewired::ControllerTemplateActionAxisMap* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method WRijltyEtMlrFVbiYDEbdameLNuq, addr 0x1819166e0, size 0x130, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* WRijltyEtMlrFVbiYDEbdameLNuq(::Rewired::IControllerElementTarget*  _cordl_fixed_empty_name_whitespace, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_2) ;

constexpr ::Rewired::Pole const& __cordl_internal_get_ZGIiCoDHReuPmZvWiKFFHJQFGBQp() const;

constexpr ::Rewired::Pole& __cordl_internal_get_ZGIiCoDHReuPmZvWiKFFHJQFGBQp() ;

constexpr bool const& __cordl_internal_get_knNbdcvlCnWNttoTwRpSUNSJkoIP() const;

constexpr bool& __cordl_internal_get_knNbdcvlCnWNttoTwRpSUNSJkoIP() ;

constexpr ::Rewired::AxisRange const& __cordl_internal_get_yzHVCsQOKnZqGaSONvtuffXEvQXR() const;

constexpr ::Rewired::AxisRange& __cordl_internal_get_yzHVCsQOKnZqGaSONvtuffXEvQXR() ;

constexpr void __cordl_internal_set_ZGIiCoDHReuPmZvWiKFFHJQFGBQp(::Rewired::Pole  value) ;

constexpr void __cordl_internal_set_knNbdcvlCnWNttoTwRpSUNSJkoIP(bool  value) ;

constexpr void __cordl_internal_set_yzHVCsQOKnZqGaSONvtuffXEvQXR(::Rewired::AxisRange  value) ;

/// @brief Method .ctor, addr 0x181916890, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181916810, size 0x80, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method .ctor, addr 0x1819168f0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method get_axisContribution, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Pole get_axisContribution() ;

/// @brief Method get_axisRange, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::AxisRange get_axisRange() ;

/// @brief Method get_invert, addr 0x1803561b0, size 0x10, virtual false, abstract: false, final false
inline bool get_invert() ;

/// @brief Method gyFgWZIOkYxRXQFisRfqeYALZruF, addr 0x181916950, size 0xe0, virtual true, abstract: false, final false
inline void gyFgWZIOkYxRXQFisRfqeYALZruF(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method kyEwxmZNagZYfYRfDZtzJIqAPCoG, addr 0x181916a30, size 0x10, virtual true, abstract: false, final false
inline void kyEwxmZNagZYfYRfDZtzJIqAPCoG() ;

/// @brief Method uLNIVnshxLJeyFklVzBLtaBbAcgGA, addr 0x181916a40, size 0x110, virtual true, abstract: false, final false
inline void uLNIVnshxLJeyFklVzBLtaBbAcgGA(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerTemplateActionAxisMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateActionAxisMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerTemplateActionAxisMap(ControllerTemplateActionAxisMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateActionAxisMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerTemplateActionAxisMap(ControllerTemplateActionAxisMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1871};

/// @brief Field yzHVCsQOKnZqGaSONvtuffXEvQXR, offset: 0x24, size: 0x4, def value: None
 ::Rewired::AxisRange  ___yzHVCsQOKnZqGaSONvtuffXEvQXR;

/// @brief Field ZGIiCoDHReuPmZvWiKFFHJQFGBQp, offset: 0x28, size: 0x4, def value: None
 ::Rewired::Pole  ___ZGIiCoDHReuPmZvWiKFFHJQFGBQp;

/// @brief Field knNbdcvlCnWNttoTwRpSUNSJkoIP, offset: 0x2c, size: 0x1, def value: None
 bool  ___knNbdcvlCnWNttoTwRpSUNSJkoIP;

/// @brief Size padding 0x38 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerTemplateActionAxisMap, ___yzHVCsQOKnZqGaSONvtuffXEvQXR) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerTemplateActionAxisMap, ___ZGIiCoDHReuPmZvWiKFFHJQFGBQp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerTemplateActionAxisMap, ___knNbdcvlCnWNttoTwRpSUNSJkoIP) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerTemplateActionAxisMap) == 0x38, "Size mismatch!");

} // namespace end def Rewired
