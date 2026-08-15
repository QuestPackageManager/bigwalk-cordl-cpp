#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Metrics/MetricsInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__MetricsInterface_def.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__BeginPlayerSessionOptions_def.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__EndPlayerSessionOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::MetricsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Metrics::MetricsInterface::*)()>(&::Epic::OnlineServices::Metrics::MetricsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::MetricsInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::MetricsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Metrics::MetricsInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::Metrics::MetricsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::MetricsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::MetricsInterface.BeginPlayerSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Metrics::MetricsInterface::*)(::by_ref<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>)>(&::Epic::OnlineServices::Metrics::MetricsInterface::BeginPlayerSession)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18050c270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::MetricsInterface*>(),
                        {"BeginPlayerSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::MetricsInterface.EndPlayerSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Metrics::MetricsInterface::*)(::by_ref<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>)>(&::Epic::OnlineServices::Metrics::MetricsInterface::EndPlayerSession)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18050c2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::MetricsInterface*>(),
                        {"EndPlayerSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Metrics::MetricsInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::MetricsInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Metrics::MetricsInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::MetricsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Metrics::MetricsInterface::BeginPlayerSession(::by_ref<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::MetricsInterface*>(),
                        {"BeginPlayerSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Metrics::MetricsInterface::EndPlayerSession(::by_ref<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::MetricsInterface*>(),
                        {"EndPlayerSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Metrics::MetricsInterface* Epic::OnlineServices::Metrics::MetricsInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Metrics::MetricsInterface*>());
}
inline ::Epic::OnlineServices::Metrics::MetricsInterface* Epic::OnlineServices::Metrics::MetricsInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Metrics::MetricsInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Metrics::MetricsInterface::MetricsInterface()   {
}
