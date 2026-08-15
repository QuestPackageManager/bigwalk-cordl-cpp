#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Extensions/PlatformFlagsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/Extensions/zzzz__PlatformFlagsExtensions_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__PlatformFlags_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__WrappedPlatformFlags_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions.get_CustomMappings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Platform::PlatformFlags>* (*)()>(&::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions::get_CustomMappings)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805439f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions*>(),
                        {"get_CustomMappings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions.GetDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Epic::OnlineServices::Platform::PlatformFlags)>(&::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions::GetDescription)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1805436c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions*>(),
                        {"GetDescription", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::PlatformFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IList_1<::StringW>*, ::by_ref<::Epic::OnlineServices::Platform::PlatformFlags>)>(&::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions::TryParse)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180543820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::PlatformFlags>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions.Wrap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags (*)(::Epic::OnlineServices::Platform::PlatformFlags)>(&::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions::Wrap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions*>(),
                        {"Wrap", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::PlatformFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions.Unwrap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Platform::PlatformFlags (*)(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags)>(&::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions::Unwrap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions*>(),
                        {"Unwrap", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions::setStaticF__CustomMappings_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Platform::PlatformFlags>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Platform::PlatformFlags>*, "<CustomMappings>k__BackingField", ::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Platform::PlatformFlags>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Platform::PlatformFlags>* PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions::getStaticF__CustomMappings_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Platform::PlatformFlags>*, "<CustomMappings>k__BackingField", ::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions*>();
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Platform::PlatformFlags>* PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions::get_CustomMappings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions*>(),
                        {"get_CustomMappings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Platform::PlatformFlags>*>(nullptr, ___internal_method);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions::GetDescription(::Epic::OnlineServices::Platform::PlatformFlags  platformFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions*>(),
                        {"GetDescription", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::PlatformFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, platformFlags);
}
inline bool PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions::TryParse(::System::Collections::Generic::IList_1<::StringW>*  stringFlags, ::by_ref<::Epic::OnlineServices::Platform::PlatformFlags>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::PlatformFlags>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stringFlags, result);
}
inline ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions::Wrap(::Epic::OnlineServices::Platform::PlatformFlags  internalFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions*>(),
                        {"Wrap", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::PlatformFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags>(nullptr, ___internal_method, internalFlags);
}
inline ::Epic::OnlineServices::Platform::PlatformFlags PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions::Unwrap(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  wrappedFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions*>(),
                        {"Unwrap", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Platform::PlatformFlags>(nullptr, ___internal_method, wrappedFlags);
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Extensions::PlatformFlagsExtensions::PlatformFlagsExtensions()   {
}
