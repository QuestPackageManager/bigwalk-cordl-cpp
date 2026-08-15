#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/OnQueryStatsCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Stats/zzzz__OnQueryStatsCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Stats/zzzz__OnQueryStatsCompleteCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Stats/zzzz__OnQueryStatsCompleteCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ddb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInfoInternal>)>(&::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ddaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternal* Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternal* Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation::OnQueryStatsCompleteCallbackInternalImplementation()   {
}
