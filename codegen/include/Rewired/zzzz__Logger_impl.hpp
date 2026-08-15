#pragma once
// IWYU pragma private; include "Rewired/Logger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__Logger_def.hpp"
#include "Rewired/Config/zzzz__LogLevelFlags_def.hpp"
#include "Rewired/Config/zzzz__LogLevel_def.hpp"
#include "Rewired/Internal/zzzz__GUIText_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Logger.get_screenLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)()>(&::Rewired::Logger::get_screenLog)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181962ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"get_screenLog", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.get_logLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Config::LogLevelFlags (*)()>(&::Rewired::Logger::get_logLevel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181962e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"get_logLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.get_logToScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Logger::get_logToScreen)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181962ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"get_logToScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.set_logToScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Rewired::Logger::set_logToScreen)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181962f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"set_logToScreen", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Rewired::Logger::LogEditor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181961480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogEditor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, bool)>(&::Rewired::Logger::LogEditor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1819613e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogEditor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogWarningEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Rewired::Logger::LogWarningEditor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181962a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogWarningEditor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogWarningEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, bool)>(&::Rewired::Logger::LogWarningEditor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819629f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogWarningEditor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogErrorEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Rewired::Logger::LogErrorEditor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181961570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogErrorEditor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogErrorEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, bool)>(&::Rewired::Logger::LogErrorEditor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181961510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogErrorEditor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Rewired::Logger::Log)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181962d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"Log", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, bool)>(&::Rewired::Logger::Log)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181962db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"Log", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Rewired::Logger::LogWarning)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181962d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogWarning", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, bool)>(&::Rewired::Logger::LogWarning)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181962c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogWarning", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Rewired::Logger::LogError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181961c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogError", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, bool)>(&::Rewired::Logger::LogError)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x181961760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogError", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*, ::System::Object*)>(&::Rewired::Logger::LogException)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181962300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*, ::System::Object*, bool)>(&::Rewired::Logger::LogException)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x181961e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, bool)>(&::Rewired::Logger::LogNow)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181962400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogNow", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogWarningNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, bool)>(&::Rewired::Logger::LogWarningNow)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181962aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogWarningNow", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogErrorNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, bool)>(&::Rewired::Logger::LogErrorNow)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1819615c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogErrorNow", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogExceptionNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*, ::System::Object*, bool)>(&::Rewired::Logger::LogExceptionNow)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181961c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogExceptionNow", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.IsLoggingAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Config::LogLevel)>(&::Rewired::Logger::IsLoggingAllowed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181961380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"IsLoggingAllowed", {}, {::i2c::type_of<::Rewired::Config::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogToScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Rewired::Logger::LogToScreen)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x1819625a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogToScreen", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Rewired::Logger::LogInit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181962330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogInit", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogInitError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Rewired::Logger::LogInitError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181962310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogInitError", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogInitWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Rewired::Logger::LogInitWarning)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181962320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogInitWarning", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.Log_VCTest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Rewired::Logger::Log_VCTest)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181962d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"Log_VCTest", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.LogUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Rewired::Logger::LogUpdate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181962330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogUpdate", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Logger.FormatMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*)>(&::Rewired::Logger::FormatMessage)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819612f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"FormatMessage", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Logger::setStaticF___screenLog(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "__screenLog", ::Rewired::Logger*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* Rewired::Logger::getStaticF___screenLog()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "__screenLog", ::Rewired::Logger*>();
}
inline void Rewired::Logger::setStaticF__guiText(::UnityW<::Rewired::Internal::GUIText>  value)  {
::cordl_internals::setStaticField<::UnityW<::Rewired::Internal::GUIText>, "_guiText", ::Rewired::Logger*>(std::forward<::UnityW<::Rewired::Internal::GUIText>>(value));
}
inline ::UnityW<::Rewired::Internal::GUIText> Rewired::Logger::getStaticF__guiText()  {
return ::cordl_internals::getStaticField<::UnityW<::Rewired::Internal::GUIText>, "_guiText", ::Rewired::Logger*>();
}
inline void Rewired::Logger::setStaticF__logToScreen(bool  value)  {
::cordl_internals::setStaticField<bool, "_logToScreen", ::Rewired::Logger*>(std::forward<bool>(value));
}
inline bool Rewired::Logger::getStaticF__logToScreen()  {
return ::cordl_internals::getStaticField<bool, "_logToScreen", ::Rewired::Logger*>();
}
inline ::System::Collections::Generic::List_1<::StringW>* Rewired::Logger::get_screenLog()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"get_screenLog", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(nullptr, ___internal_method);
}
inline ::Rewired::Config::LogLevelFlags Rewired::Logger::get_logLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"get_logLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Config::LogLevelFlags>(nullptr, ___internal_method);
}
inline bool Rewired::Logger::get_logToScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"get_logToScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Rewired::Logger::set_logToScreen(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"set_logToScreen", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Rewired::Logger::LogEditor(::System::Object*  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogEditor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void Rewired::Logger::LogEditor(::System::Object*  msg, bool  requiredThreadSafety)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogEditor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, requiredThreadSafety);
}
inline void Rewired::Logger::LogWarningEditor(::System::Object*  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogWarningEditor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void Rewired::Logger::LogWarningEditor(::System::Object*  msg, bool  requiredThreadSafety)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogWarningEditor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, requiredThreadSafety);
}
inline void Rewired::Logger::LogErrorEditor(::System::Object*  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogErrorEditor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void Rewired::Logger::LogErrorEditor(::System::Object*  msg, bool  requiredThreadSafety)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogErrorEditor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, requiredThreadSafety);
}
inline void Rewired::Logger::Log(::System::Object*  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"Log", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void Rewired::Logger::Log(::System::Object*  msg, bool  requiredThreadSafety)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"Log", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, requiredThreadSafety);
}
inline void Rewired::Logger::LogWarning(::System::Object*  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogWarning", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void Rewired::Logger::LogWarning(::System::Object*  msg, bool  requiredThreadSafety)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogWarning", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, requiredThreadSafety);
}
inline void Rewired::Logger::LogError(::System::Object*  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogError", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void Rewired::Logger::LogError(::System::Object*  msg, bool  requiredThreadSafety)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogError", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, requiredThreadSafety);
}
inline void Rewired::Logger::LogException(::System::Exception*  exception, ::System::Object*  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, exception, msg);
}
inline void Rewired::Logger::LogException(::System::Exception*  exception, ::System::Object*  msg, bool  requiredThreadSafety)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, exception, msg, requiredThreadSafety);
}
inline void Rewired::Logger::LogNow(::System::Object*  msg, bool  requireThreadSafety)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogNow", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, requireThreadSafety);
}
inline void Rewired::Logger::LogWarningNow(::System::Object*  msg, bool  requireThreadSafety)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogWarningNow", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, requireThreadSafety);
}
inline void Rewired::Logger::LogErrorNow(::System::Object*  msg, bool  requireThreadSafety)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogErrorNow", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, requireThreadSafety);
}
inline void Rewired::Logger::LogExceptionNow(::System::Exception*  exception, ::System::Object*  msg, bool  requireThreadSafety)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogExceptionNow", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, exception, msg, requireThreadSafety);
}
inline bool Rewired::Logger::IsLoggingAllowed(::Rewired::Config::LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"IsLoggingAllowed", {}, {::i2c::type_of<::Rewired::Config::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, logLevel);
}
inline void Rewired::Logger::LogToScreen(::System::Object*  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogToScreen", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void Rewired::Logger::LogInit(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogInit", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, o);
}
inline void Rewired::Logger::LogInitError(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogInitError", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, o);
}
inline void Rewired::Logger::LogInitWarning(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogInitWarning", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, o);
}
inline void Rewired::Logger::Log_VCTest(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"Log_VCTest", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, o);
}
inline void Rewired::Logger::LogUpdate(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"LogUpdate", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, o);
}
inline ::System::Object* Rewired::Logger::FormatMessage(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Logger*>(),
                        {"FormatMessage", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Rewired::Logger::Logger()   {
}
