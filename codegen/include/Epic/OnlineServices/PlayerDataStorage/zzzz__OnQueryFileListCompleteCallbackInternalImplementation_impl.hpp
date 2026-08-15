#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnQueryFileListCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnQueryFileListCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnQueryFileListCompleteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__QueryFileListCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804fa370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileListCallbackInfoInternal>)>(&::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804fa310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileListCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileListCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileListCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternalImplementation::OnQueryFileListCompleteCallbackInternalImplementation()   {
}
