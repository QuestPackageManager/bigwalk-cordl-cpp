#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/AttributeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Sessions/zzzz__AttributeDataValue_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AttributeData)
namespace Epic::OnlineServices::Sessions {
struct AttributeDataValue;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct AttributeData;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::AttributeData);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::AttributeData, "Epic.OnlineServices.Sessions", "AttributeData");
// Dependencies Epic.OnlineServices.Sessions.AttributeDataValue
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.AttributeData
struct CORDL_TYPE AttributeData {
public:
// Declarations
 __declspec(property(get=get_Key, put=set_Key)) ::Epic::OnlineServices::Utf8String*  Key;

 __declspec(property(get=get_Value, put=set_Value)) ::Epic::OnlineServices::Sessions::AttributeDataValue  Value;

/// @brief Method get_Key, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Key() ;

/// @brief Method get_Value, addr 0x1804bd9c0, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Sessions::AttributeDataValue get_Value() ;

/// @brief Method set_Key, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Key(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Value, addr 0x1804bd9f0, size 0x30, virtual false, abstract: false, final false
inline void set_Value(::Epic::OnlineServices::Sessions::AttributeDataValue  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AttributeData() ;

// Ctor Parameters [CppParam { name: "_Key_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Value_k__BackingField", ty: "::Epic::OnlineServices::Sessions::AttributeDataValue", modifiers: "", def_value: None }]
constexpr AttributeData(::Epic::OnlineServices::Utf8String*  _Key_k__BackingField, ::Epic::OnlineServices::Sessions::AttributeDataValue  _Value_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7686};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <Key>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Key_k__BackingField;

/// @brief Field <Value>k__BackingField, offset: 0x8, size: 0x38, def value: None
 ::Epic::OnlineServices::Sessions::AttributeDataValue  _Value_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::AttributeData, _Key_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::AttributeData, _Value_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::AttributeData) == 0x40, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
