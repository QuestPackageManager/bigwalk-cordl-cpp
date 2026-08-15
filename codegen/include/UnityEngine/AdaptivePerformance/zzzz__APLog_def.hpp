#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/APLog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(APLog)
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class APLog;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::APLog*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::APLog*, "UnityEngine.AdaptivePerformance", "APLog");
// Dependencies System.Object
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.APLog
class CORDL_TYPE APLog : public ::System::Object {
public:
// Declarations
/// @brief Field enabled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_enabled, put=setStaticF_enabled)) bool  enabled;

/// @brief Field s_AdaptivePerformancePrefix, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_AdaptivePerformancePrefix, put=setStaticF_s_AdaptivePerformancePrefix)) ::StringW  s_AdaptivePerformancePrefix;

/// @brief Field s_LogBuilder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LogBuilder, put=setStaticF_s_LogBuilder)) ::System::Text::StringBuilder*  s_LogBuilder;

/// @brief Method Debug, addr 0x182215dc0, size 0xa0, virtual false, abstract: false, final false
static inline void Debug(::StringW  format, ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogMessage, addr 0x182215e60, size 0x60, virtual false, abstract: false, final false
static inline void LogMessage(::StringW  format, ::ArrayW<::System::Object*>  args) ;

/// @brief Method ShouldLog, addr 0x182215ec0, size 0x50, virtual false, abstract: false, final false
static inline bool ShouldLog() ;

static inline bool getStaticF_enabled() ;

static inline ::StringW getStaticF_s_AdaptivePerformancePrefix() ;

static inline ::System::Text::StringBuilder* getStaticF_s_LogBuilder() ;

static inline void setStaticF_enabled(bool  value) ;

static inline void setStaticF_s_AdaptivePerformancePrefix(::StringW  value) ;

static inline void setStaticF_s_LogBuilder(::System::Text::StringBuilder*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr APLog() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "APLog", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
APLog(APLog && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "APLog", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
APLog(APLog const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19385};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::APLog) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
