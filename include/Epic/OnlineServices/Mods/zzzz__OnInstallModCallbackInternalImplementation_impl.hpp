#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/OnInstallModCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Mods/zzzz__OnInstallModCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__InstallModCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__OnInstallModCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Mods::OnInstallModCallbackInternal* (*)()>(&::Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050d9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Mods::InstallModCallbackInfoInternal>)>(&::Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18050d940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::InstallModCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Mods::OnInstallModCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Mods::OnInstallModCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Mods::OnInstallModCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Mods::OnInstallModCallbackInternal* Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Mods::OnInstallModCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Mods::OnInstallModCallbackInternal* Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Mods::OnInstallModCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Mods::InstallModCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::InstallModCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation::OnInstallModCallbackInternalImplementation()   {
}
