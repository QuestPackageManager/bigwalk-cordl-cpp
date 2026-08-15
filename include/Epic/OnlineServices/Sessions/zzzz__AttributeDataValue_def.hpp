#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/AttributeDataValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__AttributeType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeDataValue)
namespace Epic::OnlineServices {
struct AttributeType;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct AttributeDataValue;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::AttributeDataValue);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::AttributeDataValue, "Epic.OnlineServices.Sessions", "AttributeDataValue");
// Dependencies Epic.OnlineServices.AttributeType, System.Nullable`1<T>
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.AttributeDataValue
struct CORDL_TYPE AttributeDataValue {
public:
// Declarations
 __declspec(property(get=get_AsBool, put=set_AsBool)) ::System::Nullable_1<bool>  AsBool;

 __declspec(property(get=get_AsDouble, put=set_AsDouble)) ::System::Nullable_1<double_t>  AsDouble;

 __declspec(property(get=get_AsInt64, put=set_AsInt64)) ::System::Nullable_1<int64_t>  AsInt64;

 __declspec(property(get=get_AsUtf8, put=set_AsUtf8)) ::Epic::OnlineServices::Utf8String*  AsUtf8;

 __declspec(property(get=get_ValueType)) ::Epic::OnlineServices::AttributeType  ValueType;

/// @brief Method get_AsBool, addr 0x1804be6e0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> get_AsBool() ;

/// @brief Method get_AsDouble, addr 0x1804be700, size 0x50, virtual false, abstract: false, final false
inline ::System::Nullable_1<double_t> get_AsDouble() ;

/// @brief Method get_AsInt64, addr 0x1804be750, size 0x50, virtual false, abstract: false, final false
inline ::System::Nullable_1<int64_t> get_AsInt64() ;

/// @brief Method get_AsUtf8, addr 0x1804be7a0, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_AsUtf8() ;

/// @brief Method get_ValueType, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AttributeType get_ValueType() ;

/// @brief Method op_Implicit, addr 0x1804be8a0, size 0x40, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::AttributeDataValue op_Implicit___Epic__OnlineServices__Sessions__AttributeDataValue(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method op_Implicit, addr 0x1804be850, size 0x50, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::AttributeDataValue op_Implicit___Epic__OnlineServices__Sessions__AttributeDataValue(::StringW  value) ;

/// @brief Method op_Implicit, addr 0x1804be800, size 0x20, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::AttributeDataValue op_Implicit___Epic__OnlineServices__Sessions__AttributeDataValue(::System::Nullable_1<bool>  value) ;

/// @brief Method op_Implicit, addr 0x1804be7d0, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::AttributeDataValue op_Implicit___Epic__OnlineServices__Sessions__AttributeDataValue(::System::Nullable_1<double_t>  value) ;

/// @brief Method op_Implicit, addr 0x1804be820, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::AttributeDataValue op_Implicit___Epic__OnlineServices__Sessions__AttributeDataValue(::System::Nullable_1<int64_t>  value) ;

/// @brief Method set_AsBool, addr 0x1804be8e0, size 0x20, virtual false, abstract: false, final false
inline void set_AsBool(::System::Nullable_1<bool>  value) ;

/// @brief Method set_AsDouble, addr 0x1804be900, size 0x40, virtual false, abstract: false, final false
inline void set_AsDouble(::System::Nullable_1<double_t>  value) ;

/// @brief Method set_AsInt64, addr 0x1804be940, size 0x40, virtual false, abstract: false, final false
inline void set_AsInt64(::System::Nullable_1<int64_t>  value) ;

/// @brief Method set_AsUtf8, addr 0x1804be980, size 0x110, virtual false, abstract: false, final false
inline void set_AsUtf8(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AttributeDataValue() ;

// Ctor Parameters [CppParam { name: "m_AsInt64", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "m_AsDouble", ty: "::System::Nullable_1<double_t>", modifiers: "", def_value: None }, CppParam { name: "m_AsBool", ty: "::System::Nullable_1<bool>", modifiers: "", def_value: None }, CppParam { name: "m_AsUtf8", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "m_ValueType", ty: "::Epic::OnlineServices::AttributeType", modifiers: "", def_value: None }]
constexpr AttributeDataValue(::System::Nullable_1<int64_t>  m_AsInt64, ::System::Nullable_1<double_t>  m_AsDouble, ::System::Nullable_1<bool>  m_AsBool, ::Epic::OnlineServices::Utf8String*  m_AsUtf8, ::Epic::OnlineServices::AttributeType  m_ValueType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7688};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_AsInt64, offset: 0x0, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  m_AsInt64;

/// @brief Field m_AsDouble, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<double_t>  m_AsDouble;

/// @brief Field m_AsBool, offset: 0x20, size: 0x2, def value: None
 ::System::Nullable_1<bool>  m_AsBool;

/// @brief Field m_AsUtf8, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  m_AsUtf8;

/// @brief Field m_ValueType, offset: 0x30, size: 0x4, def value: None
 ::Epic::OnlineServices::AttributeType  m_ValueType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::AttributeDataValue, m_AsInt64) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::AttributeDataValue, m_AsDouble) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::AttributeDataValue, m_AsBool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::AttributeDataValue, m_AsUtf8) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::AttributeDataValue, m_ValueType) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::AttributeDataValue) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
