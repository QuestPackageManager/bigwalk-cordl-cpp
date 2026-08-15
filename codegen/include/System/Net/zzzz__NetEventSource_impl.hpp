#pragma once
// IWYU pragma private; include "System/Net/NetEventSource.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventKeywords_impl.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventSource_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__NetEventSource_def.hpp"
#include "System/Net/zzzz__NetEventSource_def.hpp"
#include "System/zzzz__FormattableString_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters []
constexpr ::System::Net::NetEventSource_Keywords::NetEventSource_Keywords()   {
}
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Net::NetEventSource_Keywords::Default{static_cast<int64_t>(0x1)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Net::NetEventSource_Keywords::Debug{static_cast<int64_t>(0x2)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Net::NetEventSource_Keywords::EnterExit{static_cast<int64_t>(0x4)};
//  Writing Method size for method: ::System::Net::NetEventSource.Enter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::FormattableString*, ::StringW)>(&::System::Net::NetEventSource::Enter)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181e18640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Enter", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::FormattableString*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.Enter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*, ::StringW)>(&::System::Net::NetEventSource::Enter)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181e184e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Enter", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.Enter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::StringW)>(&::System::Net::NetEventSource::Enter)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181e187a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Enter", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.Enter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetEventSource::*)(::StringW, ::StringW, ::StringW)>(&::System::Net::NetEventSource::Enter)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e18940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Enter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.Exit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::FormattableString*, ::StringW)>(&::System::Net::NetEventSource::Exit)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181e18b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Exit", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::FormattableString*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.Exit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*, ::StringW)>(&::System::Net::NetEventSource::Exit)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181e18cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Exit", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.Exit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetEventSource::*)(::StringW, ::StringW, ::StringW)>(&::System::Net::NetEventSource::Exit)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e18b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Exit", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::FormattableString*, ::StringW)>(&::System::Net::NetEventSource::Info)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181e195e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Info", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::FormattableString*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*, ::StringW)>(&::System::Net::NetEventSource::Info)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181e19780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Info", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetEventSource::*)(::StringW, ::StringW, ::StringW)>(&::System::Net::NetEventSource::Info)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e19740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*, ::StringW)>(&::System::Net::NetEventSource::Error)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181e189c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Error", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.ErrorMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetEventSource::*)(::StringW, ::StringW, ::StringW)>(&::System::Net::NetEventSource::ErrorMessage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e18980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"ErrorMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.Fail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*, ::StringW)>(&::System::Net::NetEventSource::Fail)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181e18e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Fail", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.CriticalFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetEventSource::*)(::StringW, ::StringW, ::StringW)>(&::System::Net::NetEventSource::CriticalFailure)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e184a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"CriticalFailure", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.Associate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*, ::StringW)>(&::System::Net::NetEventSource::Associate)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181e18210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Associate", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.Associate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetEventSource::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Net::NetEventSource::Associate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e18460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Associate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.get_IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Net::NetEventSource::get_IsEnabled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e19aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"get_IsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.IdOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::System::Net::NetEventSource::IdOf)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e19550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"IdOf", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Object*)>(&::System::Net::NetEventSource::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e19530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*)>(&::System::Net::NetEventSource::Format)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x181e19220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Format", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::FormattableString*)>(&::System::Net::NetEventSource::Format)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181e18f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Format", {}, {::i2c::type_of<::System::FormattableString*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource.WriteEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetEventSource::*)(int32_t, ::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Net::NetEventSource::WriteEvent)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181e198e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetEventSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetEventSource::*)()>(&::System::Net::NetEventSource::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b83e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::NetEventSource::setStaticF_Log(::System::Net::NetEventSource*  value)  {
::cordl_internals::setStaticField<::System::Net::NetEventSource*, "Log", ::System::Net::NetEventSource*>(std::forward<::System::Net::NetEventSource*>(value));
}
inline ::System::Net::NetEventSource* System::Net::NetEventSource::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::System::Net::NetEventSource*, "Log", ::System::Net::NetEventSource*>();
}
inline void System::Net::NetEventSource::Enter(::System::Object*  thisOrContextObject, ::System::FormattableString*  formattableString, ::StringW  memberName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Enter", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::FormattableString*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thisOrContextObject, formattableString, memberName);
}
inline void System::Net::NetEventSource::Enter(::System::Object*  thisOrContextObject, ::System::Object*  arg0, ::StringW  memberName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Enter", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thisOrContextObject, arg0, memberName);
}
inline void System::Net::NetEventSource::Enter(::System::Object*  thisOrContextObject, ::System::Object*  arg0, ::System::Object*  arg1, ::System::Object*  arg2, ::StringW  memberName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Enter", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thisOrContextObject, arg0, arg1, arg2, memberName);
}
inline void System::Net::NetEventSource::Enter(::StringW  thisOrContextObject, ::StringW  memberName, ::StringW  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Enter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisOrContextObject, memberName, parameters);
}
inline void System::Net::NetEventSource::Exit(::System::Object*  thisOrContextObject, ::System::FormattableString*  formattableString, ::StringW  memberName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Exit", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::FormattableString*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thisOrContextObject, formattableString, memberName);
}
inline void System::Net::NetEventSource::Exit(::System::Object*  thisOrContextObject, ::System::Object*  arg0, ::StringW  memberName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Exit", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thisOrContextObject, arg0, memberName);
}
inline void System::Net::NetEventSource::Exit(::StringW  thisOrContextObject, ::StringW  memberName, ::StringW  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Exit", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisOrContextObject, memberName, result);
}
inline void System::Net::NetEventSource::Info(::System::Object*  thisOrContextObject, ::System::FormattableString*  formattableString, ::StringW  memberName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Info", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::FormattableString*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thisOrContextObject, formattableString, memberName);
}
inline void System::Net::NetEventSource::Info(::System::Object*  thisOrContextObject, ::System::Object*  message, ::StringW  memberName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Info", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thisOrContextObject, message, memberName);
}
inline void System::Net::NetEventSource::Info(::StringW  thisOrContextObject, ::StringW  memberName, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisOrContextObject, memberName, message);
}
inline void System::Net::NetEventSource::Error(::System::Object*  thisOrContextObject, ::System::Object*  message, ::StringW  memberName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Error", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thisOrContextObject, message, memberName);
}
inline void System::Net::NetEventSource::ErrorMessage(::StringW  thisOrContextObject, ::StringW  memberName, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"ErrorMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisOrContextObject, memberName, message);
}
inline void System::Net::NetEventSource::Fail(::System::Object*  thisOrContextObject, ::System::Object*  message, ::StringW  memberName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Fail", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thisOrContextObject, message, memberName);
}
inline void System::Net::NetEventSource::CriticalFailure(::StringW  thisOrContextObject, ::StringW  memberName, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"CriticalFailure", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisOrContextObject, memberName, message);
}
inline void System::Net::NetEventSource::Associate(::System::Object*  first, ::System::Object*  second, ::StringW  memberName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Associate", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, first, second, memberName);
}
inline void System::Net::NetEventSource::Associate(::StringW  thisOrContextObject, ::StringW  memberName, ::StringW  first, ::StringW  second)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Associate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisOrContextObject, memberName, first, second);
}
inline bool System::Net::NetEventSource::get_IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"get_IsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW System::Net::NetEventSource::IdOf(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"IdOf", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline int32_t System::Net::NetEventSource::GetHashCode(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline ::System::Object* System::Net::NetEventSource::Format(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Format", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value);
}
inline ::StringW System::Net::NetEventSource::Format(::System::FormattableString*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"Format", {}, {::i2c::type_of<::System::FormattableString*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline void System::Net::NetEventSource::WriteEvent(int32_t  eventId, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3, ::StringW  arg4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {"WriteEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventId, arg1, arg2, arg3, arg4);
}
inline void System::Net::NetEventSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetEventSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::NetEventSource* System::Net::NetEventSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetEventSource*>());
}
// Ctor Parameters []
constexpr ::System::Net::NetEventSource::NetEventSource()   {
}
