#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/OnDeletePersistentAuthCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnDeletePersistentAuthCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__DeletePersistentAuthCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnDeletePersistentAuthCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal* (*)()>(&::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805278b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfoInternal>)>(&::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180527850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal* Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal* Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternalImplementation::OnDeletePersistentAuthCallbackInternalImplementation()   {
}
