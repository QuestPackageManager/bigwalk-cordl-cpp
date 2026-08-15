#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnFileTransferProgressCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnFileTransferProgressCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__FileTransferProgressCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnFileTransferProgressCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal* (*)()>(&::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804f9140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfoInternal>)>(&::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804f90e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternalImplementation::OnFileTransferProgressCallbackInternalImplementation()   {
}
