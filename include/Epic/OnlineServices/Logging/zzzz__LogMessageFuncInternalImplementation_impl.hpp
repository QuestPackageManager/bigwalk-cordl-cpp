#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Logging/LogMessageFuncInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogMessageFuncInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogMessageFuncInternal_def.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogMessageInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Logging::LogMessageFuncInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Logging::LogMessageFuncInternal* (*)()>(&::Epic::OnlineServices::Logging::LogMessageFuncInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050be50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessageFuncInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Logging::LogMessageFuncInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Logging::LogMessageInternal>)>(&::Epic::OnlineServices::Logging::LogMessageFuncInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18050bdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessageFuncInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Logging::LogMessageInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Logging::LogMessageFuncInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Logging::LogMessageFuncInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Logging::LogMessageFuncInternal*, "s_Delegate", ::Epic::OnlineServices::Logging::LogMessageFuncInternalImplementation*>(std::forward<::Epic::OnlineServices::Logging::LogMessageFuncInternal*>(value));
}
inline ::Epic::OnlineServices::Logging::LogMessageFuncInternal* Epic::OnlineServices::Logging::LogMessageFuncInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Logging::LogMessageFuncInternal*, "s_Delegate", ::Epic::OnlineServices::Logging::LogMessageFuncInternalImplementation*>();
}
inline ::Epic::OnlineServices::Logging::LogMessageFuncInternal* Epic::OnlineServices::Logging::LogMessageFuncInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessageFuncInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Logging::LogMessageFuncInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Logging::LogMessageFuncInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Logging::LogMessageInternal>  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessageFuncInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Logging::LogMessageInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Logging::LogMessageFuncInternalImplementation::LogMessageFuncInternalImplementation()   {
}
