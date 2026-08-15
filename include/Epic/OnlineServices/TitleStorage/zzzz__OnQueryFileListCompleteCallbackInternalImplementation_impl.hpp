#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/OnQueryFileListCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnQueryFileListCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnQueryFileListCompleteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__QueryFileListCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804dd8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileListCallbackInfoInternal>)>(&::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804dd880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileListCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternal* Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternal* Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileListCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileListCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation::OnQueryFileListCompleteCallbackInternalImplementation()   {
}
