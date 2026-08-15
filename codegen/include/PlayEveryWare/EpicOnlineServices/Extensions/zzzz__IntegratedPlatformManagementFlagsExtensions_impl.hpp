#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Extensions/IntegratedPlatformManagementFlagsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/Extensions/zzzz__IntegratedPlatformManagementFlagsExtensions_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformManagementFlags_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions.get_CustomMappings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>* (*)()>(&::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions::get_CustomMappings)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180540e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions*>(),
                        {"get_CustomMappings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions.GetDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags)>(&::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions::GetDescription)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180540a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions*>(),
                        {"GetDescription", {}, {::i2c::type_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IList_1<::StringW>*, ::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>)>(&::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions::TryParse)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180540ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions::setStaticF__CustomMappings_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>*, "<CustomMappings>k__BackingField", ::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>* PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions::getStaticF__CustomMappings_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>*, "<CustomMappings>k__BackingField", ::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions*>();
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>* PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions::get_CustomMappings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions*>(),
                        {"get_CustomMappings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>*>(nullptr, ___internal_method);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions::GetDescription(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions*>(),
                        {"GetDescription", {}, {::i2c::type_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, flags);
}
inline bool PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions::TryParse(::System::Collections::Generic::IList_1<::StringW>*  stringFlags, ::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stringFlags, flags);
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Extensions::IntegratedPlatformManagementFlagsExtensions::IntegratedPlatformManagementFlagsExtensions()   {
}
