#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnDeleteCacheCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnDeleteCacheCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__DeleteCacheCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnDeleteCacheCompleteCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804f8600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteCacheCallbackInfoInternal>)>(&::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804f85a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteCacheCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteCacheCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteCacheCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternalImplementation::OnDeleteCacheCompleteCallbackInternalImplementation()   {
}
