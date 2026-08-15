#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnDeleteFileCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnDeleteFileCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__DeleteFileCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnDeleteFileCompleteCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804f8840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteFileCallbackInfoInternal>)>(&::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804f87e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteFileCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteFileCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteFileCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation::OnDeleteFileCompleteCallbackInternalImplementation()   {
}
