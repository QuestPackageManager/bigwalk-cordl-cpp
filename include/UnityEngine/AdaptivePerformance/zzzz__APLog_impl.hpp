#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/APLog.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__APLog_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::APLog.Debug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::AdaptivePerformance::APLog::Debug)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182215dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::APLog*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::APLog.LogMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::AdaptivePerformance::APLog::LogMessage)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182215e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::APLog*>(),
                        {"LogMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::APLog.ShouldLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::AdaptivePerformance::APLog::ShouldLog)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182215ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::APLog*>(),
                        {"ShouldLog", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AdaptivePerformance::APLog::setStaticF_enabled(bool  value)  {
::cordl_internals::setStaticField<bool, "enabled", ::UnityEngine::AdaptivePerformance::APLog*>(std::forward<bool>(value));
}
inline bool UnityEngine::AdaptivePerformance::APLog::getStaticF_enabled()  {
return ::cordl_internals::getStaticField<bool, "enabled", ::UnityEngine::AdaptivePerformance::APLog*>();
}
inline void UnityEngine::AdaptivePerformance::APLog::setStaticF_s_LogBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "s_LogBuilder", ::UnityEngine::AdaptivePerformance::APLog*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* UnityEngine::AdaptivePerformance::APLog::getStaticF_s_LogBuilder()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "s_LogBuilder", ::UnityEngine::AdaptivePerformance::APLog*>();
}
inline void UnityEngine::AdaptivePerformance::APLog::setStaticF_s_AdaptivePerformancePrefix(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "s_AdaptivePerformancePrefix", ::UnityEngine::AdaptivePerformance::APLog*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::AdaptivePerformance::APLog::getStaticF_s_AdaptivePerformancePrefix()  {
return ::cordl_internals::getStaticField<::StringW, "s_AdaptivePerformancePrefix", ::UnityEngine::AdaptivePerformance::APLog*>();
}
inline void UnityEngine::AdaptivePerformance::APLog::Debug(::StringW  format, ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::APLog*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, args);
}
inline void UnityEngine::AdaptivePerformance::APLog::LogMessage(::StringW  format, ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::APLog*>(),
                        {"LogMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, args);
}
inline bool UnityEngine::AdaptivePerformance::APLog::ShouldLog()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::APLog*>(),
                        {"ShouldLog", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::APLog::APLog()   {
}
