#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Utility/LogLevelUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/Utility/zzzz__LogLevelUtility_def.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogLevel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility.get_LogCategoryStringArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility::get_LogCategoryStringArray)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180541410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility*>(),
                        {"get_LogCategoryStringArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility.get_LogLevelStringArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility::get_LogLevelStringArray)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180541610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility*>(),
                        {"get_LogLevelStringArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility.get_LogLevelList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Epic::OnlineServices::Logging::LogLevel>* (*)()>(&::PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility::get_LogLevelList)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180541430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility*>(),
                        {"get_LogLevelList", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::StringW> PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility::get_LogCategoryStringArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility*>(),
                        {"get_LogCategoryStringArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility::get_LogLevelStringArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility*>(),
                        {"get_LogLevelStringArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Epic::OnlineServices::Logging::LogLevel>* PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility::get_LogLevelList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility*>(),
                        {"get_LogLevelList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Epic::OnlineServices::Logging::LogLevel>*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::LogLevelUtility::LogLevelUtility()   {
}
