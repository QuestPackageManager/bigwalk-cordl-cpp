#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/OnQueryFileCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnQueryFileCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnQueryFileCompleteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__QueryFileCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804dd6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileCallbackInfoInternal>)>(&::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804dd640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternal* Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternal* Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation::OnQueryFileCompleteCallbackInternalImplementation()   {
}
