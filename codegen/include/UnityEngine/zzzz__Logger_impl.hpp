#pragma once
// IWYU pragma private; include "UnityEngine/Logger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LogType_impl.hpp"
#include "UnityEngine/zzzz__Logger_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ILogHandler_def.hpp"
#include "UnityEngine/zzzz__ILogger_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Logger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Logger::*)(::UnityEngine::ILogHandler*)>(&::UnityEngine::Logger::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182265770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ILogHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Logger.get_logHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ILogHandler* (::UnityEngine::Logger::*)()>(&::UnityEngine::Logger::get_logHandler)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"get_logHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Logger.set_logHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Logger::*)(::UnityEngine::ILogHandler*)>(&::UnityEngine::Logger::set_logHandler)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"set_logHandler", {}, {::i2c::type_of<::UnityEngine::ILogHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Logger.get_logEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Logger::*)()>(&::UnityEngine::Logger::get_logEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"get_logEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Logger.set_logEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Logger::*)(bool)>(&::UnityEngine::Logger::set_logEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"set_logEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Logger.get_filterLogType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LogType (::UnityEngine::Logger::*)()>(&::UnityEngine::Logger::get_filterLogType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"get_filterLogType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Logger.set_filterLogType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Logger::*)(::UnityEngine::LogType)>(&::UnityEngine::Logger::set_filterLogType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"set_filterLogType", {}, {::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Logger.IsLogTypeAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Logger::*)(::UnityEngine::LogType)>(&::UnityEngine::Logger::IsLogTypeAllowed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182265280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"IsLogTypeAllowed", {}, {::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Logger.GetString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::UnityEngine::Logger::GetString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182265190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"GetString", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Logger.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Logger::*)(::UnityEngine::LogType, ::System::Object*)>(&::UnityEngine::Logger::Log)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182265600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"Log", {}, {::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Logger.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Logger::*)(::UnityEngine::LogType, ::System::Object*, ::UnityEngine::Object*)>(&::UnityEngine::Logger::Log)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1822656b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"Log", {}, {::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Logger.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Logger::*)(::StringW, ::System::Object*)>(&::UnityEngine::Logger::Log)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182265540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Logger.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Logger::*)(::StringW, ::System::Object*)>(&::UnityEngine::Logger::LogWarning)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182265480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Logger.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Logger::*)(::StringW, ::System::Object*)>(&::UnityEngine::Logger::LogError)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1822652a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Logger.LogException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Logger::*)(::System::Exception*)>(&::UnityEngine::Logger::LogException)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822653a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"LogException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Logger.LogException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Logger::*)(::System::Exception*, ::UnityEngine::Object*)>(&::UnityEngine::Logger::LogException)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182265360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"LogException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Logger.LogFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Logger::*)(::UnityEngine::LogType, ::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Logger::LogFormat)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822653e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"LogFormat", {}, {::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Logger.LogFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Logger::*)(::UnityEngine::LogType, ::UnityEngine::Object*, ::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Logger::LogFormat)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182265430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"LogFormat", {}, {::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ILogHandler*& UnityEngine::Logger::__cordl_internal_get__logHandler_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logHandler_k__BackingField;
}
constexpr ::UnityEngine::ILogHandler* const& UnityEngine::Logger::__cordl_internal_get__logHandler_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logHandler_k__BackingField;
}
constexpr void UnityEngine::Logger::__cordl_internal_set__logHandler_k__BackingField(::UnityEngine::ILogHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logHandler_k__BackingField = value;
}
constexpr bool& UnityEngine::Logger::__cordl_internal_get__logEnabled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logEnabled_k__BackingField;
}
constexpr bool const& UnityEngine::Logger::__cordl_internal_get__logEnabled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logEnabled_k__BackingField;
}
constexpr void UnityEngine::Logger::__cordl_internal_set__logEnabled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logEnabled_k__BackingField = value;
}
constexpr ::UnityEngine::LogType& UnityEngine::Logger::__cordl_internal_get__filterLogType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterLogType_k__BackingField;
}
constexpr ::UnityEngine::LogType const& UnityEngine::Logger::__cordl_internal_get__filterLogType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterLogType_k__BackingField;
}
constexpr void UnityEngine::Logger::__cordl_internal_set__filterLogType_k__BackingField(::UnityEngine::LogType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filterLogType_k__BackingField = value;
}
inline void UnityEngine::Logger::_ctor(::UnityEngine::ILogHandler*  logHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ILogHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logHandler);
}
inline ::UnityEngine::ILogHandler* UnityEngine::Logger::get_logHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"get_logHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ILogHandler*>(this, ___internal_method);
}
inline void UnityEngine::Logger::set_logHandler(::UnityEngine::ILogHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"set_logHandler", {}, {::i2c::type_of<::UnityEngine::ILogHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Logger::get_logEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"get_logEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Logger::set_logEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"set_logEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LogType UnityEngine::Logger::get_filterLogType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"get_filterLogType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LogType>(this, ___internal_method);
}
inline void UnityEngine::Logger::set_filterLogType(::UnityEngine::LogType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"set_filterLogType", {}, {::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Logger::IsLogTypeAllowed(::UnityEngine::LogType  logType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"IsLogTypeAllowed", {}, {::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, logType);
}
inline ::StringW UnityEngine::Logger::GetString(::System::Object*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"GetString", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, message);
}
inline void UnityEngine::Logger::Log(::UnityEngine::LogType  logType, ::System::Object*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"Log", {}, {::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logType, message);
}
inline void UnityEngine::Logger::Log(::UnityEngine::LogType  logType, ::System::Object*  message, ::UnityEngine::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"Log", {}, {::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logType, message, context);
}
inline void UnityEngine::Logger::Log(::StringW  tag, ::System::Object*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag, message);
}
inline void UnityEngine::Logger::LogWarning(::StringW  tag, ::System::Object*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag, message);
}
inline void UnityEngine::Logger::LogError(::StringW  tag, ::System::Object*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag, message);
}
inline void UnityEngine::Logger::LogException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"LogException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
inline void UnityEngine::Logger::LogException(::System::Exception*  exception, ::UnityEngine::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"LogException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception, context);
}
inline void UnityEngine::Logger::LogFormat(::UnityEngine::LogType  logType, ::StringW  format, ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"LogFormat", {}, {::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logType, format, args);
}
inline void UnityEngine::Logger::LogFormat(::UnityEngine::LogType  logType, ::UnityEngine::Object*  context, ::StringW  format, ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Logger*>(),
                        {"LogFormat", {}, {::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logType, context, format, args);
}
inline ::UnityEngine::Logger* UnityEngine::Logger::New_ctor(::UnityEngine::ILogHandler*  logHandler)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Logger*>(logHandler));
}
/// @brief Convert operator to "::UnityEngine::ILogger"
constexpr  UnityEngine::Logger::operator ::UnityEngine::ILogger*() noexcept {
return static_cast<::UnityEngine::ILogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ILogger"
constexpr ::UnityEngine::ILogger* UnityEngine::Logger::i___UnityEngine__ILogger() noexcept {
return static_cast<::UnityEngine::ILogger*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ILogHandler"
constexpr  UnityEngine::Logger::operator ::UnityEngine::ILogHandler*() noexcept {
return static_cast<::UnityEngine::ILogHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ILogHandler"
constexpr ::UnityEngine::ILogHandler* UnityEngine::Logger::i___UnityEngine__ILogHandler() noexcept {
return static_cast<::UnityEngine::ILogHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Logger::Logger()   {
}
