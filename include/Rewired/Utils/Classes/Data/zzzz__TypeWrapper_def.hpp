#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/TypeWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__qBWyugAMXKGLKcRNPDuTbJFzTVsE_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeWrapper)
namespace Rewired::Utils::Classes::Data {
struct TypeWrapper_DataType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
struct TypeWrapper_DataType;
}
namespace Rewired::Utils::Classes::Data {
struct TypeWrapper;
}
// Write type traits
MARK_VAL_T(::Rewired::Utils::Classes::Data::TypeWrapper_DataType);
MARK_VAL_T(::Rewired::Utils::Classes::Data::TypeWrapper);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::TypeWrapper_DataType, "Rewired.Utils.Classes.Data", "TypeWrapper/DataType");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::TypeWrapper, "Rewired.Utils.Classes.Data", "TypeWrapper");
// Dependencies 
namespace Rewired::Utils::Classes::Data {
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.TypeWrapper/DataType
struct CORDL_TYPE TypeWrapper_DataType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TypeWrapper_DataType_Unwrapped
enum struct __TypeWrapper_DataType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Byte = static_cast<int32_t>(0x1),
__E_SByte = static_cast<int32_t>(0x2),
__E_Char = static_cast<int32_t>(0x3),
__E_Int16 = static_cast<int32_t>(0x4),
__E_UInt16 = static_cast<int32_t>(0x5),
__E_Int32 = static_cast<int32_t>(0x6),
__E_UInt32 = static_cast<int32_t>(0x7),
__E_Int64 = static_cast<int32_t>(0x8),
__E_UInt64 = static_cast<int32_t>(0x9),
__E_Single = static_cast<int32_t>(0xa),
__E_Double = static_cast<int32_t>(0xb),
__E_Boolean = static_cast<int32_t>(0xc),
__E_String = static_cast<int32_t>(0xd),
__E_Object = static_cast<int32_t>(0xe),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TypeWrapper_DataType_Unwrapped () const noexcept {
return static_cast<__TypeWrapper_DataType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TypeWrapper_DataType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TypeWrapper_DataType(int32_t  value__) noexcept;

/// @brief Field Boolean value: I32(12)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const Boolean;

/// @brief Field Byte value: I32(1)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const Byte;

/// @brief Field Char value: I32(3)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const Char;

/// @brief Field Double value: I32(11)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const Double;

/// @brief Field Int16 value: I32(4)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const Int16;

/// @brief Field Int32 value: I32(6)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const Int32;

/// @brief Field Int64 value: I32(8)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const Int64;

/// @brief Field Object value: I32(14)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const Object;

/// @brief Field SByte value: I32(2)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const SByte;

/// @brief Field Single value: I32(10)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const Single;

/// @brief Field String value: I32(13)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const String;

/// @brief Field UInt16 value: I32(5)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const UInt16;

/// @brief Field UInt32 value: I32(7)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const UInt32;

/// @brief Field UInt64 value: I32(9)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const UInt64;

/// @brief Field Unknown value: I32(0)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3037};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::TypeWrapper_DataType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::TypeWrapper_DataType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
// Dependencies Rewired.Utils.Classes.Data.TypeWrapper::DataType, qBWyugAMXKGLKcRNPDuTbJFzTVsE
namespace Rewired::Utils::Classes::Data {
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.TypeWrapper
struct CORDL_TYPE TypeWrapper {
public:
// Declarations
using DataType = ::Rewired::Utils::Classes::Data::TypeWrapper_DataType;

/// @brief Method Clear, addr 0x181957ef0, size 0x60, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method .ctor, addr 0x181958330, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::Classes::Data::TypeWrapper_DataType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1819582c0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181958250, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181957fb0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181958010, size 0x60, virtual false, abstract: false, final false
inline void _ctor(char16_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181958070, size 0x60, virtual false, abstract: false, final false
inline void _ctor(double_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181958440, size 0x60, virtual false, abstract: false, final false
inline void _ctor(float_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181957f50, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int16_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1819583e0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181958130, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int64_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1819584a0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int8_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1819580d0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(uint16_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181958190, size 0x60, virtual false, abstract: false, final false
inline void _ctor(uint32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181958380, size 0x60, virtual false, abstract: false, final false
inline void _ctor(uint64_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1819581f0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(uint8_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method op_Implicit, addr 0x181958820, size 0x70, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::TypeWrapper op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(::StringW  obj) ;

/// @brief Method op_Implicit, addr 0x1819588e0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::TypeWrapper op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(bool  obj) ;

/// @brief Method op_Implicit, addr 0x181958710, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::TypeWrapper op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(char16_t  obj) ;

/// @brief Method op_Implicit, addr 0x181958940, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::TypeWrapper op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(double_t  obj) ;

/// @brief Method op_Implicit, addr 0x1819587c0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::TypeWrapper op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(float_t  obj) ;

/// @brief Method op_Implicit, addr 0x181958550, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::TypeWrapper op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(int16_t  obj) ;

/// @brief Method op_Implicit, addr 0x181958bb0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::TypeWrapper op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(int32_t  obj) ;

/// @brief Method op_Implicit, addr 0x181958cc0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::TypeWrapper op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(int64_t  obj) ;

/// @brief Method op_Implicit, addr 0x181958aa0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::TypeWrapper op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(int8_t  obj) ;

/// @brief Method op_Implicit, addr 0x181958c60, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::TypeWrapper op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(uint16_t  obj) ;

/// @brief Method op_Implicit, addr 0x181958dc0, size 0x270, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::TypeWrapper op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(uint32_t  obj) ;

/// @brief Method op_Implicit, addr 0x1819585b0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::TypeWrapper op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(uint64_t  obj) ;

/// @brief Method op_Implicit, addr 0x181958610, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::TypeWrapper op_Implicit___Rewired__Utils__Classes__Data__TypeWrapper(uint8_t  obj) ;

/// @brief Method op_Implicit, addr 0x181958b60, size 0x50, virtual false, abstract: false, final false
static inline ::StringW op_Implicit___StringW(::Rewired::Utils::Classes::Data::TypeWrapper  obj) ;

/// @brief Method op_Implicit, addr 0x181958500, size 0x50, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::Rewired::Utils::Classes::Data::TypeWrapper  obj) ;

/// @brief Method op_Implicit, addr 0x1819586c0, size 0x50, virtual false, abstract: false, final false
static inline char16_t op_Implicit_char16_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj) ;

/// @brief Method op_Implicit, addr 0x181958a40, size 0x60, virtual false, abstract: false, final false
static inline double_t op_Implicit_double_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj) ;

/// @brief Method op_Implicit, addr 0x181958b00, size 0x60, virtual false, abstract: false, final false
static inline float_t op_Implicit_float_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj) ;

/// @brief Method op_Implicit, addr 0x181958c10, size 0x50, virtual false, abstract: false, final false
static inline int16_t op_Implicit_int16_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj) ;

/// @brief Method op_Implicit, addr 0x1819589a0, size 0x50, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj) ;

/// @brief Method op_Implicit, addr 0x181958890, size 0x50, virtual false, abstract: false, final false
static inline int64_t op_Implicit_int64_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj) ;

/// @brief Method op_Implicit, addr 0x1819589f0, size 0x50, virtual false, abstract: false, final false
static inline int8_t op_Implicit_int8_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj) ;

/// @brief Method op_Implicit, addr 0x181958d70, size 0x50, virtual false, abstract: false, final false
static inline uint16_t op_Implicit_uint16_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj) ;

/// @brief Method op_Implicit, addr 0x181958d20, size 0x50, virtual false, abstract: false, final false
static inline uint32_t op_Implicit_uint32_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj) ;

/// @brief Method op_Implicit, addr 0x181958770, size 0x50, virtual false, abstract: false, final false
static inline uint64_t op_Implicit_uint64_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj) ;

/// @brief Method op_Implicit, addr 0x181958670, size 0x50, virtual false, abstract: false, final false
static inline uint8_t op_Implicit_uint8_t(::Rewired::Utils::Classes::Data::TypeWrapper  obj) ;

// Ctor Parameters []
// @brief default ctor
constexpr TypeWrapper() ;

// Ctor Parameters [CppParam { name: "type", ty: "::Rewired::Utils::Classes::Data::TypeWrapper_DataType", modifiers: "", def_value: None }, CppParam { name: "WpTjzngerFPTAZiUbUEcfVdvFZID", ty: "::GlobalNamespace::qBWyugAMXKGLKcRNPDuTbJFzTVsE", modifiers: "", def_value: None }, CppParam { name: "EXYVzjucwevhPPTTrnycVDnhnhWF", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "HcntLiMlimDCufoyEaZIRPMsMLiMA", ty: "::System::Object*", modifiers: "", def_value: None }]
constexpr TypeWrapper(::Rewired::Utils::Classes::Data::TypeWrapper_DataType  type, ::GlobalNamespace::qBWyugAMXKGLKcRNPDuTbJFzTVsE  WpTjzngerFPTAZiUbUEcfVdvFZID, ::StringW  EXYVzjucwevhPPTTrnycVDnhnhWF, ::System::Object*  HcntLiMlimDCufoyEaZIRPMsMLiMA) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3038};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  type;

/// @brief Field WpTjzngerFPTAZiUbUEcfVdvFZID, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::qBWyugAMXKGLKcRNPDuTbJFzTVsE  WpTjzngerFPTAZiUbUEcfVdvFZID;

/// @brief Field EXYVzjucwevhPPTTrnycVDnhnhWF, offset: 0x10, size: 0x8, def value: None
 ::StringW  EXYVzjucwevhPPTTrnycVDnhnhWF;

/// @brief Field HcntLiMlimDCufoyEaZIRPMsMLiMA, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  HcntLiMlimDCufoyEaZIRPMsMLiMA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::TypeWrapper, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::TypeWrapper, WpTjzngerFPTAZiUbUEcfVdvFZID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::TypeWrapper, EXYVzjucwevhPPTTrnycVDnhnhWF) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::TypeWrapper, HcntLiMlimDCufoyEaZIRPMsMLiMA) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::TypeWrapper) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
