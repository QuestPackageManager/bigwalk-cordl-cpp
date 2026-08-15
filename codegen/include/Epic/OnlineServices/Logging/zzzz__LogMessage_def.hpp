#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Logging/LogMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Logging/zzzz__LogLevel_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LogMessage)
namespace Epic::OnlineServices::Logging {
struct LogLevel;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Logging {
struct LogMessage;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Logging::LogMessage);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Logging::LogMessage, "Epic.OnlineServices.Logging", "LogMessage");
// Dependencies Epic.OnlineServices.Logging.LogLevel
namespace Epic::OnlineServices::Logging {
// Is value type: true
// CS Name: Epic.OnlineServices.Logging.LogMessage
struct CORDL_TYPE LogMessage {
public:
// Declarations
 __declspec(property(get=get_Category, put=set_Category)) ::Epic::OnlineServices::Utf8String*  Category;

 __declspec(property(get=get_Level, put=set_Level)) ::Epic::OnlineServices::Logging::LogLevel  Level;

 __declspec(property(get=get_Message, put=set_Message)) ::Epic::OnlineServices::Utf8String*  Message;

/// @brief Method get_Category, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Category() ;

/// @brief Method get_Level, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Logging::LogLevel get_Level() ;

/// @brief Method get_Message, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Message() ;

/// @brief Method set_Category, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Category(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Level, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_Level(::Epic::OnlineServices::Logging::LogLevel  value) ;

/// @brief Method set_Message, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_Message(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogMessage() ;

// Ctor Parameters [CppParam { name: "_Category_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Message_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Level_k__BackingField", ty: "::Epic::OnlineServices::Logging::LogLevel", modifiers: "", def_value: None }]
constexpr LogMessage(::Epic::OnlineServices::Utf8String*  _Category_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Message_k__BackingField, ::Epic::OnlineServices::Logging::LogLevel  _Level_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8419};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <Category>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Category_k__BackingField;

/// @brief Field <Message>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Message_k__BackingField;

/// @brief Field <Level>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Logging::LogLevel  _Level_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Logging::LogMessage, _Category_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Logging::LogMessage, _Message_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Logging::LogMessage, _Level_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Logging::LogMessage) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Logging
