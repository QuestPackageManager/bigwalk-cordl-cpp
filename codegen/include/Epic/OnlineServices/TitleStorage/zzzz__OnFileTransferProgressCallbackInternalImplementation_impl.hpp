#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/OnFileTransferProgressCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnFileTransferProgressCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__FileTransferProgressCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnFileTransferProgressCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternal* (*)()>(&::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804dcda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal>)>(&::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804dcd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternal* Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternal* Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallbackInternalImplementation::OnFileTransferProgressCallbackInternalImplementation()   {
}
