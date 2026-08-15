#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Logging/LogMessageInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Logging/zzzz__LogLevel_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LogMessageInternal)
namespace Epic::OnlineServices::Logging {
struct LogMessage;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Logging {
struct LogMessageInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Logging::LogMessageInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Logging::LogMessageInternal, "Epic.OnlineServices.Logging", "LogMessageInternal");
// Dependencies Epic.OnlineServices.Logging.LogLevel, System.IntPtr
namespace Epic::OnlineServices::Logging {
// Is value type: true
// CS Name: Epic.OnlineServices.Logging.LogMessageInternal
struct CORDL_TYPE LogMessageInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Logging::LogMessage>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Logging::LogMessage>*() ;

/// @brief Method Get, addr 0x18050c030, size 0xc0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Logging::LogMessage>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Logging::LogMessage>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Logging::LogMessage>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Logging__LogMessage_() ;

// Ctor Parameters []
// @brief default ctor
constexpr LogMessageInternal() ;

// Ctor Parameters [CppParam { name: "m_Category", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Message", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Level", ty: "::Epic::OnlineServices::Logging::LogLevel", modifiers: "", def_value: None }]
constexpr LogMessageInternal(::System::IntPtr  m_Category, ::System::IntPtr  m_Message, ::Epic::OnlineServices::Logging::LogLevel  m_Level) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8420};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Category, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_Category;

/// @brief Field m_Message, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Message;

/// @brief Field m_Level, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Logging::LogLevel  m_Level;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Logging::LogMessageInternal, m_Category) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Logging::LogMessageInternal, m_Message) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Logging::LogMessageInternal, m_Level) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Logging::LogMessageInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Logging
