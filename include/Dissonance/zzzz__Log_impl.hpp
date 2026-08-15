#pragma once
// IWYU pragma private; include "Dissonance/Log.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__DissonanceException_def.hpp"
#include "Dissonance/zzzz__LogLevel_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Dissonance::Log._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Log::*)(int32_t, ::StringW)>(&::Dissonance::Log::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805cbbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.get_IsTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Log::*)()>(&::Dissonance::Log::get_IsTrace)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805cbd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"get_IsTrace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.get_IsDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Log::*)()>(&::Dissonance::Log::get_IsDebug)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805cbd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"get_IsDebug", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.get_IsInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Log::*)()>(&::Dissonance::Log::get_IsInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805cbd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"get_IsInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.get_IsWarn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Log::*)()>(&::Dissonance::Log::get_IsWarn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805cbd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"get_IsWarn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.get_IsError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Log::*)()>(&::Dissonance::Log::get_IsError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805cbd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"get_IsError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.ShouldLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Log::*)(::Dissonance::LogLevel)>(&::Dissonance::Log::ShouldLog)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805cb820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"ShouldLog", {}, {::i2c::type_of<::Dissonance::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.WriteLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Log::*)(::Dissonance::LogLevel, ::StringW)>(&::Dissonance::Log::WriteLog)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1805cb9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"WriteLog", {}, {::i2c::type_of<::Dissonance::LogLevel>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.Trace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Log::*)(::StringW)>(&::Dissonance::Log::Trace)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805cb8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"Trace", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.Debug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Log::*)(::StringW)>(&::Dissonance::Log::Debug)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805cb7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Log::*)(::StringW)>(&::Dissonance::Log::Info)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805cb800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.Warn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Log::*)(::StringW)>(&::Dissonance::Log::Warn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805cb9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Log::*)(::StringW)>(&::Dissonance::Log::Error)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805cb7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.CreateUserErrorException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::DissonanceException* (::Dissonance::Log::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::Dissonance::Log::CreateUserErrorException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805cb790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"CreateUserErrorException", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.UserErrorMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Log::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::Dissonance::Log::UserErrorMessage)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805cb8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"UserErrorMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.PossibleBugMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Log::*)(::StringW, ::StringW)>(&::Dissonance::Log::PossibleBugMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805cb810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"PossibleBugMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.CreatePossibleBugException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::DissonanceException* (::Dissonance::Log::*)(::StringW, ::StringW)>(&::Dissonance::Log::CreatePossibleBugException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805cb740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"CreatePossibleBugException", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.AssertAndLogWarn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Log::*)(bool, ::StringW)>(&::Dissonance::Log::AssertAndLogWarn)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805cb6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"AssertAndLogWarn", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.AssertAndLogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Log::*)(bool, ::StringW, ::StringW)>(&::Dissonance::Log::AssertAndLogError)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805cb690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"AssertAndLogError", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Log.AssertAndThrowPossibleBug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Log::*)(bool, ::StringW, ::StringW)>(&::Dissonance::Log::AssertAndThrowPossibleBug)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805cb710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"AssertAndThrowPossibleBug", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Dissonance::Log::__cordl_internal_get__traceFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____traceFormat;
}
constexpr ::StringW const& Dissonance::Log::__cordl_internal_get__traceFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____traceFormat;
}
constexpr void Dissonance::Log::__cordl_internal_set__traceFormat(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____traceFormat = value;
}
constexpr ::StringW& Dissonance::Log::__cordl_internal_get__debugFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugFormat;
}
constexpr ::StringW const& Dissonance::Log::__cordl_internal_get__debugFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugFormat;
}
constexpr void Dissonance::Log::__cordl_internal_set__debugFormat(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugFormat = value;
}
constexpr ::StringW& Dissonance::Log::__cordl_internal_get__basicFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____basicFormat;
}
constexpr ::StringW const& Dissonance::Log::__cordl_internal_get__basicFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____basicFormat;
}
constexpr void Dissonance::Log::__cordl_internal_set__basicFormat(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____basicFormat = value;
}
constexpr int32_t& Dissonance::Log::__cordl_internal_get__category()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____category;
}
constexpr int32_t const& Dissonance::Log::__cordl_internal_get__category() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____category;
}
constexpr void Dissonance::Log::__cordl_internal_set__category(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____category = value;
}
inline void Dissonance::Log::_ctor(int32_t  category, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category, name);
}
inline bool Dissonance::Log::get_IsTrace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"get_IsTrace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Dissonance::Log::get_IsDebug()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"get_IsDebug", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Dissonance::Log::get_IsInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"get_IsInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Dissonance::Log::get_IsWarn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"get_IsWarn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Dissonance::Log::get_IsError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"get_IsError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Dissonance::Log::ShouldLog(::Dissonance::LogLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"ShouldLog", {}, {::i2c::type_of<::Dissonance::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, level);
}
inline void Dissonance::Log::WriteLog(::Dissonance::LogLevel  level, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"WriteLog", {}, {::i2c::type_of<::Dissonance::LogLevel>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, message);
}
template<typename TA>
inline void Dissonance::Log::WriteLogFormat(::Dissonance::LogLevel  level, ::StringW  format, TA  p0)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"WriteLogFormat", {::i2c::class_of<TA>()}, {::i2c::type_of<::Dissonance::LogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<TA>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, format, p0);
}
template<typename TA,typename TB>
inline void Dissonance::Log::WriteLogFormat(::Dissonance::LogLevel  level, ::StringW  format, TA  p0, TB  p1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"WriteLogFormat", {::i2c::class_of<TA>(), ::i2c::class_of<TB>()}, {::i2c::type_of<::Dissonance::LogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, format, p0, p1);
}
template<typename TA,typename TB,typename TC>
inline void Dissonance::Log::WriteLogFormat(::Dissonance::LogLevel  level, ::StringW  format, TA  p0, TB  p1, TC  p2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"WriteLogFormat", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>()}, {::i2c::type_of<::Dissonance::LogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, format, p0, p1, p2);
}
template<typename TA,typename TB,typename TC,typename TD>
inline void Dissonance::Log::WriteLogFormat(::Dissonance::LogLevel  level, ::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"WriteLogFormat", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>()}, {::i2c::type_of<::Dissonance::LogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>(), ::i2c::type_of<TD>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, format, p0, p1, p2, p3);
}
template<typename TA,typename TB,typename TC,typename TD,typename TE>
inline void Dissonance::Log::WriteLogFormat(::Dissonance::LogLevel  level, ::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"WriteLogFormat", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>()}, {::i2c::type_of<::Dissonance::LogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>(), ::i2c::type_of<TD>(), ::i2c::type_of<TE>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, format, p0, p1, p2, p3, p4);
}
template<typename TA,typename TB,typename TC,typename TD,typename TE,typename TF>
inline void Dissonance::Log::WriteLogFormat(::Dissonance::LogLevel  level, ::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4, TF  p5)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"WriteLogFormat", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>(), ::i2c::class_of<TF>()}, {::i2c::type_of<::Dissonance::LogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>(), ::i2c::type_of<TD>(), ::i2c::type_of<TE>(), ::i2c::type_of<TF>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>(), ::i2c::class_of<TF>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, format, p0, p1, p2, p3, p4, p5);
}
template<typename TA,typename TB,typename TC,typename TD,typename TE,typename TF,typename TG>
inline void Dissonance::Log::WriteLogFormat(::Dissonance::LogLevel  level, ::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4, TF  p5, TG  p6)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"WriteLogFormat", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>(), ::i2c::class_of<TF>(), ::i2c::class_of<TG>()}, {::i2c::type_of<::Dissonance::LogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>(), ::i2c::type_of<TD>(), ::i2c::type_of<TE>(), ::i2c::type_of<TF>(), ::i2c::type_of<TG>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>(), ::i2c::class_of<TF>(), ::i2c::class_of<TG>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, format, p0, p1, p2, p3, p4, p5, p6);
}
template<typename TA,typename TB,typename TC,typename TD,typename TE,typename TF,typename TG,typename TH>
inline void Dissonance::Log::WriteLogFormat(::Dissonance::LogLevel  level, ::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4, TF  p5, TG  p6, TH  p7)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"WriteLogFormat", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>(), ::i2c::class_of<TF>(), ::i2c::class_of<TG>(), ::i2c::class_of<TH>()}, {::i2c::type_of<::Dissonance::LogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>(), ::i2c::type_of<TD>(), ::i2c::type_of<TE>(), ::i2c::type_of<TF>(), ::i2c::type_of<TG>(), ::i2c::type_of<TH>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>(), ::i2c::class_of<TF>(), ::i2c::class_of<TG>(), ::i2c::class_of<TH>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, format, p0, p1, p2, p3, p4, p5, p6, p7);
}
inline void Dissonance::Log::Trace(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"Trace", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
template<typename TA>
inline void Dissonance::Log::Trace(::StringW  format, TA  p0)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Trace", {::i2c::class_of<TA>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0);
}
template<typename TA,typename TB>
inline void Dissonance::Log::Trace(::StringW  format, TA  p0, TB  p1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Trace", {::i2c::class_of<TA>(), ::i2c::class_of<TB>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1);
}
inline void Dissonance::Log::Debug(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
template<typename TA>
inline void Dissonance::Log::Debug(::StringW  format, TA  p0)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Debug", {::i2c::class_of<TA>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0);
}
template<typename TA,typename TB>
inline void Dissonance::Log::Debug(::StringW  format, TA  p0, TB  p1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Debug", {::i2c::class_of<TA>(), ::i2c::class_of<TB>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1);
}
template<typename TA,typename TB,typename TC>
inline void Dissonance::Log::Debug(::StringW  format, TA  p0, TB  p1, TC  p2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Debug", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1, p2);
}
template<typename TA,typename TB,typename TC,typename TD>
inline void Dissonance::Log::Debug(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Debug", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>(), ::i2c::type_of<TD>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1, p2, p3);
}
template<typename TA,typename TB,typename TC,typename TD,typename TE>
inline void Dissonance::Log::Debug(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Debug", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>(), ::i2c::type_of<TD>(), ::i2c::type_of<TE>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1, p2, p3, p4);
}
template<typename TA,typename TB,typename TC,typename TD,typename TE,typename TF>
inline void Dissonance::Log::Debug(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4, TF  p5)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Debug", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>(), ::i2c::class_of<TF>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>(), ::i2c::type_of<TD>(), ::i2c::type_of<TE>(), ::i2c::type_of<TF>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>(), ::i2c::class_of<TF>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1, p2, p3, p4, p5);
}
template<typename TA,typename TB,typename TC,typename TD,typename TE,typename TF,typename TG>
inline void Dissonance::Log::Debug(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4, TF  p5, TG  p6)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Debug", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>(), ::i2c::class_of<TF>(), ::i2c::class_of<TG>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>(), ::i2c::type_of<TD>(), ::i2c::type_of<TE>(), ::i2c::type_of<TF>(), ::i2c::type_of<TG>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>(), ::i2c::class_of<TF>(), ::i2c::class_of<TG>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1, p2, p3, p4, p5, p6);
}
template<typename TA,typename TB,typename TC,typename TD,typename TE,typename TF,typename TG,typename TH>
inline void Dissonance::Log::Debug(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4, TF  p5, TG  p6, TH  p7)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Debug", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>(), ::i2c::class_of<TF>(), ::i2c::class_of<TG>(), ::i2c::class_of<TH>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>(), ::i2c::type_of<TD>(), ::i2c::type_of<TE>(), ::i2c::type_of<TF>(), ::i2c::type_of<TG>(), ::i2c::type_of<TH>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>(), ::i2c::class_of<TF>(), ::i2c::class_of<TG>(), ::i2c::class_of<TH>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1, p2, p3, p4, p5, p6, p7);
}
inline void Dissonance::Log::Info(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
template<typename TA>
inline void Dissonance::Log::Info(::StringW  format, TA  p0)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Info", {::i2c::class_of<TA>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0);
}
template<typename TA,typename TB>
inline void Dissonance::Log::Info(::StringW  format, TA  p0, TB  p1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Info", {::i2c::class_of<TA>(), ::i2c::class_of<TB>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1);
}
template<typename TA,typename TB,typename TC>
inline void Dissonance::Log::Info(::StringW  format, TA  p0, TB  p1, TC  p2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Info", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1, p2);
}
template<typename TA,typename TB,typename TC,typename TD>
inline void Dissonance::Log::Info(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Info", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>(), ::i2c::type_of<TD>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1, p2, p3);
}
template<typename TA,typename TB,typename TC,typename TD,typename TE>
inline void Dissonance::Log::Info(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Info", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>(), ::i2c::type_of<TD>(), ::i2c::type_of<TE>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1, p2, p3, p4);
}
inline void Dissonance::Log::Warn(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
template<typename TA>
inline void Dissonance::Log::Warn(::StringW  format, TA  p0)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Warn", {::i2c::class_of<TA>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0);
}
template<typename TA,typename TB>
inline void Dissonance::Log::Warn(::StringW  format, TA  p0, TB  p1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Warn", {::i2c::class_of<TA>(), ::i2c::class_of<TB>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1);
}
template<typename TA,typename TB,typename TC>
inline void Dissonance::Log::Warn(::StringW  format, TA  p0, TB  p1, TC  p2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Warn", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1, p2);
}
template<typename TA,typename TB,typename TC,typename TD>
inline void Dissonance::Log::Warn(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Warn", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>(), ::i2c::type_of<TD>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1, p2, p3);
}
template<typename TA,typename TB,typename TC,typename TD,typename TE>
inline void Dissonance::Log::Warn(::StringW  format, TA  p0, TB  p1, TC  p2, TD  p3, TE  p4)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Warn", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>(), ::i2c::type_of<TD>(), ::i2c::type_of<TE>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>(), ::i2c::class_of<TD>(), ::i2c::class_of<TE>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1, p2, p3, p4);
}
inline void Dissonance::Log::Error(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
template<typename TA>
inline void Dissonance::Log::Error(::StringW  format, TA  p0)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Error", {::i2c::class_of<TA>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0);
}
template<typename TA,typename TB>
inline void Dissonance::Log::Error(::StringW  format, TA  p0, TB  p1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Error", {::i2c::class_of<TA>(), ::i2c::class_of<TB>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1);
}
template<typename TA,typename TB,typename TC>
inline void Dissonance::Log::Error(::StringW  format, TA  p0, TB  p1, TC  p2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"Error", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, p0, p1, p2);
}
inline ::Dissonance::DissonanceException* Dissonance::Log::CreateUserErrorException(::StringW  problem, ::StringW  likelyCause, ::StringW  documentationLink, ::StringW  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"CreateUserErrorException", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::DissonanceException*>(this, ___internal_method, problem, likelyCause, documentationLink, guid);
}
inline ::StringW Dissonance::Log::UserErrorMessage(::StringW  problem, ::StringW  likelyCause, ::StringW  documentationLink, ::StringW  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"UserErrorMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, problem, likelyCause, documentationLink, guid);
}
inline ::StringW Dissonance::Log::PossibleBugMessage(::StringW  problem, ::StringW  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"PossibleBugMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, problem, guid);
}
inline ::Dissonance::DissonanceException* Dissonance::Log::CreatePossibleBugException(::StringW  problem, ::StringW  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"CreatePossibleBugException", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::DissonanceException*>(this, ___internal_method, problem, guid);
}
template<typename T>
inline ::System::Exception* Dissonance::Log::CreatePossibleBugException(::System::Func_2<::StringW,T>*  factory, ::StringW  problem, ::StringW  guid)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"CreatePossibleBugException", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Func_2<::StringW,T>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, factory, problem, guid);
}
inline bool Dissonance::Log::AssertAndLogWarn(bool  assertion, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"AssertAndLogWarn", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, assertion, msg);
}
template<typename TA>
inline bool Dissonance::Log::AssertAndLogWarn(bool  assertion, ::StringW  format, TA  arg0)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"AssertAndLogWarn", {::i2c::class_of<TA>()}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<TA>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, assertion, format, arg0);
}
inline bool Dissonance::Log::AssertAndLogError(bool  assertion, ::StringW  guid, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"AssertAndLogError", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, assertion, guid, msg);
}
template<typename TA>
inline bool Dissonance::Log::AssertAndLogError(bool  assertion, ::StringW  guid, ::StringW  format, TA  arg0)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"AssertAndLogError", {::i2c::class_of<TA>()}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<TA>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, assertion, guid, format, arg0);
}
template<typename TA,typename TB>
inline bool Dissonance::Log::AssertAndLogError(bool  assertion, ::StringW  guid, ::StringW  format, TA  arg0, TB  arg1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"AssertAndLogError", {::i2c::class_of<TA>(), ::i2c::class_of<TB>()}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, assertion, guid, format, arg0, arg1);
}
inline void Dissonance::Log::AssertAndThrowPossibleBug(bool  assertion, ::StringW  guid, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Log*>(),
                        {"AssertAndThrowPossibleBug", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assertion, guid, msg);
}
template<typename TA>
inline void Dissonance::Log::AssertAndThrowPossibleBug(bool  assertion, ::StringW  guid, ::StringW  format, TA  arg0)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"AssertAndThrowPossibleBug", {::i2c::class_of<TA>()}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<TA>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assertion, guid, format, arg0);
}
template<typename TA,typename TB>
inline void Dissonance::Log::AssertAndThrowPossibleBug(bool  assertion, ::StringW  guid, ::StringW  format, TA  arg0, TB  arg1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"AssertAndThrowPossibleBug", {::i2c::class_of<TA>(), ::i2c::class_of<TB>()}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assertion, guid, format, arg0, arg1);
}
template<typename TA,typename TB,typename TC>
inline void Dissonance::Log::AssertAndThrowPossibleBug(bool  assertion, ::StringW  guid, ::StringW  format, TA  arg0, TB  arg1, TC  arg2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Log*>(),
                    {"AssertAndThrowPossibleBug", {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>()}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<TA>(), ::i2c::type_of<TB>(), ::i2c::type_of<TC>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TA>(), ::i2c::class_of<TB>(), ::i2c::class_of<TC>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assertion, guid, format, arg0, arg1, arg2);
}
inline ::Dissonance::Log* Dissonance::Log::New_ctor(int32_t  category, ::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Log*>(category, name));
}
// Ctor Parameters []
constexpr ::Dissonance::Log::Log()   {
}
