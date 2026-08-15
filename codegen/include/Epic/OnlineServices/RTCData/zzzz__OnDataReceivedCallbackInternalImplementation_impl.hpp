#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/OnDataReceivedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__OnDataReceivedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__DataReceivedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__OnDataReceivedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e8870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCData::DataReceivedCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804e8800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::DataReceivedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternal* Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternal* Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCData::DataReceivedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::DataReceivedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternalImplementation::OnDataReceivedCallbackInternalImplementation()   {
}
