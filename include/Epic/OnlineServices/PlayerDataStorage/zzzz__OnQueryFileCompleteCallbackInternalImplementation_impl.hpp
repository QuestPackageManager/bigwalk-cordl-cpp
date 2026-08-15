#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnQueryFileCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnQueryFileCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnQueryFileCompleteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__QueryFileCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804fa130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileCallbackInfoInternal>)>(&::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804fa0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation::OnQueryFileCompleteCallbackInternalImplementation()   {
}
