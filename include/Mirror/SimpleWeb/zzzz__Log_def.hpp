#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/Log.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Log)
namespace Mirror::SimpleWeb {
class ArrayBuffer;
}
namespace Mirror::SimpleWeb {
struct Log_Levels;
}
namespace System {
class Exception;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class ILogger;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
struct Log_Levels;
}
namespace Mirror::SimpleWeb {
class Log;
}
// Write type traits
MARK_VAL_T(::Mirror::SimpleWeb::Log_Levels);
MARK_REF_T(::Mirror::SimpleWeb::Log*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::Log_Levels, "Mirror.SimpleWeb", "Log/Levels");
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::Log*, "Mirror.SimpleWeb", "Log");
// Dependencies 
namespace Mirror::SimpleWeb {
// Is value type: true
// CS Name: Mirror.SimpleWeb.Log/Levels
struct CORDL_TYPE Log_Levels {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Log_Levels_Unwrapped
enum struct __Log_Levels_Unwrapped : int32_t {
__E_none = static_cast<int32_t>(0x0),
__E_error = static_cast<int32_t>(0x1),
__E_warn = static_cast<int32_t>(0x2),
__E_info = static_cast<int32_t>(0x3),
__E_verbose = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Log_Levels_Unwrapped () const noexcept {
return static_cast<__Log_Levels_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Log_Levels() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Log_Levels(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20525};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field error value: I32(1)
static ::Mirror::SimpleWeb::Log_Levels const error;

/// @brief Field info value: I32(3)
static ::Mirror::SimpleWeb::Log_Levels const info;

/// @brief Field none value: I32(0)
static ::Mirror::SimpleWeb::Log_Levels const none;

/// @brief Field verbose value: I32(4)
static ::Mirror::SimpleWeb::Log_Levels const verbose;

/// @brief Field warn value: I32(2)
static ::Mirror::SimpleWeb::Log_Levels const warn;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::Log_Levels, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::Log_Levels) == 0x4, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
// Dependencies Mirror.SimpleWeb.Log::Levels, System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.Log
class CORDL_TYPE Log : public ::System::Object {
public:
// Declarations
using Levels = ::Mirror::SimpleWeb::Log_Levels;

/// @brief Field level, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_level, put=setStaticF_level)) ::Mirror::SimpleWeb::Log_Levels  level;

/// @brief Field logger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_logger, put=setStaticF_logger)) ::UnityEngine::ILogger*  logger;

/// @brief Method BufferToString, addr 0x181ad09d0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW BufferToString(::ArrayW<uint8_t>  buffer, int32_t  offset, ::System::Nullable_1<int32_t>  length) ;

/// @brief Method DumpBuffer, addr 0x181ad0b70, size 0x160, virtual false, abstract: false, final false
static inline void DumpBuffer(::StringW  label, ::Mirror::SimpleWeb::ArrayBuffer*  arrayBuffer) ;

/// @brief Method DumpBuffer, addr 0x181ad0a10, size 0x160, virtual false, abstract: false, final false
static inline void DumpBuffer(::StringW  label, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

/// @brief Method Error, addr 0x181ad0cd0, size 0xa0, virtual false, abstract: false, final false
static inline void Error(::StringW  msg, bool  showColor) ;

/// @brief Method Exception, addr 0x181ad0d70, size 0x180, virtual false, abstract: false, final false
static inline void Exception(::System::Exception*  e) ;

/// @brief Method Info, addr 0x181ad1070, size 0xa0, virtual false, abstract: false, final false
static inline void Info(::StringW  msg, bool  showColor) ;

/// @brief Method InfoException, addr 0x181ad0ef0, size 0x180, virtual false, abstract: false, final false
static inline void InfoException(::System::Exception*  e) ;

/// @brief Method Verbose, addr 0x181ad1110, size 0xa0, virtual false, abstract: false, final false
static inline void Verbose(::StringW  msg, bool  showColor) ;

/// @brief Method Warn, addr 0x181ad11b0, size 0xb0, virtual false, abstract: false, final false
static inline void Warn(::StringW  msg, bool  showColor) ;

static inline ::Mirror::SimpleWeb::Log_Levels getStaticF_level() ;

static inline ::UnityEngine::ILogger* getStaticF_logger() ;

static inline void setStaticF_level(::Mirror::SimpleWeb::Log_Levels  value) ;

static inline void setStaticF_logger(::UnityEngine::ILogger*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Log() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Log(Log && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Log(Log const& ) = delete;

/// @brief Field DEBUG offset 0xffffffff size 0x8
static constexpr ::ConstString  DEBUG{u"DEBUG"};

/// @brief Field SIMPLEWEB_LOG_ENABLED offset 0xffffffff size 0x8
static constexpr ::ConstString  SIMPLEWEB_LOG_ENABLED{u"SIMPLEWEB_LOG_ENABLED"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20526};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SimpleWeb::Log) == 0x10, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
