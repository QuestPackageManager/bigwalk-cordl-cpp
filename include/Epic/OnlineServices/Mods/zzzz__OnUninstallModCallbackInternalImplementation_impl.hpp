#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/OnUninstallModCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Mods/zzzz__OnUninstallModCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__OnUninstallModCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__UninstallModCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Mods::OnUninstallModCallbackInternal* (*)()>(&::Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805109f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Mods::UninstallModCallbackInfoInternal>)>(&::Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180510980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::UninstallModCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Mods::OnUninstallModCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Mods::OnUninstallModCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Mods::OnUninstallModCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Mods::OnUninstallModCallbackInternal* Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Mods::OnUninstallModCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Mods::OnUninstallModCallbackInternal* Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Mods::OnUninstallModCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Mods::UninstallModCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::UninstallModCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation::OnUninstallModCallbackInternalImplementation()   {
}
