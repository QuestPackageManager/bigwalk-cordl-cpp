#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/OnReadFileCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnReadFileCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnReadFileCompleteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__ReadFileCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804de470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileCallbackInfoInternal>)>(&::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804de410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal* Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal* Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation::OnReadFileCompleteCallbackInternalImplementation()   {
}
