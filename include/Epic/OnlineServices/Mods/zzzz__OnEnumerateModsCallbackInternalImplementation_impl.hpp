#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/OnEnumerateModsCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Mods/zzzz__OnEnumerateModsCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__EnumerateModsCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__OnEnumerateModsCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternal* (*)()>(&::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050d520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal>)>(&::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050d4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternal* Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternal* Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternalImplementation::OnEnumerateModsCallbackInternalImplementation()   {
}
