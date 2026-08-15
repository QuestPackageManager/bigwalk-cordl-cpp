#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/OnReadFileDataCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnReadFileDataCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnReadFileDataCallbackInternal_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__ReadFileDataCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__ReadResult_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternal* (*)()>(&::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804de6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::TitleStorage::ReadResult (*)(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfoInternal>)>(&::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804de650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternal* Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternal* Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternal*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::TitleStorage::ReadResult Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::TitleStorage::ReadResult>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternalImplementation::OnReadFileDataCallbackInternalImplementation()   {
}
