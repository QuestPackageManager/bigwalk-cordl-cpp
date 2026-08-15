#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Utility/LogLevelUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LogLevelUtility)
namespace Epic::OnlineServices::Logging {
struct LogLevel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices::Utility {
class LogLevelUtility;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility*, "PlayEveryWare.EpicOnlineServices.Utility", "LogLevelUtility");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices::Utility {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Utility.LogLevelUtility
class CORDL_TYPE LogLevelUtility : public ::System::Object {
public:
// Declarations
/// @brief Method get_LogCategoryStringArray, addr 0x180541410, size 0x20, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> get_LogCategoryStringArray() ;

/// @brief Method get_LogLevelList, addr 0x180541430, size 0x1e0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Epic::OnlineServices::Logging::LogLevel>* get_LogLevelList() ;

/// @brief Method get_LogLevelStringArray, addr 0x180541610, size 0x20, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> get_LogLevelStringArray() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogLevelUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogLevelUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LogLevelUtility(LogLevelUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogLevelUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogLevelUtility(LogLevelUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18951};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices::Utility
