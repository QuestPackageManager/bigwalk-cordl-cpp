#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnReadFileDataCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnReadFileDataCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnReadFileDataCallbackInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__ReadFileDataCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__ReadResult_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal* (*)()>(&::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804fac90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::ReadResult (*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>)>(&::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804fac20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::PlayerDataStorage::ReadResult Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::ReadResult>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation::OnReadFileDataCallbackInternalImplementation()   {
}
