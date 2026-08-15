#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnMemoryMonitorCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnMemoryMonitorCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__MemoryMonitorCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnMemoryMonitorCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternal* (*)()>(&::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804dd460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::UI::MemoryMonitorCallbackInfoInternal>)>(&::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804dd400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::MemoryMonitorCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternal* Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternal* Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::UI::MemoryMonitorCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::MemoryMonitorCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation::OnMemoryMonitorCallbackInternalImplementation()   {
}
