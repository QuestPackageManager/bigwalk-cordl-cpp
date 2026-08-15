#pragma once
// IWYU pragma private; include "Dissonance/Metrics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__Metrics_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__Metrics_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
//  Writing Method size for method: ::Dissonance::Metrics_MetricEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Metrics_MetricEvent::*)(::StringW, double_t)>(&::Dissonance::Metrics_MetricEvent::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805cc390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Metrics_MetricEvent>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Metrics_MetricEvent::_ctor(::StringW  name, double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Metrics_MetricEvent>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, value);
}
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Value", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Metrics_MetricEvent::Metrics_MetricEvent(::StringW  Name, double_t  Value) noexcept  {
this->Name = Name;
this->Value = Value;
}
// Ctor Parameters []
constexpr ::Dissonance::Metrics_MetricEvent::Metrics_MetricEvent()   {
}
//  Writing Method size for method: ::Dissonance::Metrics.WriteMultithreadedMetrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Dissonance::Metrics::WriteMultithreadedMetrics)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805cc450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Metrics*>(),
                        {"WriteMultithreadedMetrics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Metrics.InternalSampleMetric
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, double_t)>(&::Dissonance::Metrics::InternalSampleMetric)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Metrics*>(),
                        {"InternalSampleMetric", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Metrics.MetricName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::Dissonance::Metrics::MetricName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Metrics*>(),
                        {"MetricName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Metrics.MetricName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Dissonance::Metrics::MetricName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Metrics*>(),
                        {"MetricName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Metrics.Sample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, float_t)>(&::Dissonance::Metrics::Sample)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Metrics*>(),
                        {"Sample", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Metrics::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Metrics*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Metrics::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Metrics*>();
}
inline void Dissonance::Metrics::setStaticF__main(::System::Threading::Thread*  value)  {
::cordl_internals::setStaticField<::System::Threading::Thread*, "_main", ::Dissonance::Metrics*>(std::forward<::System::Threading::Thread*>(value));
}
inline ::System::Threading::Thread* Dissonance::Metrics::getStaticF__main()  {
return ::cordl_internals::getStaticField<::System::Threading::Thread*, "_main", ::Dissonance::Metrics*>();
}
inline void Dissonance::Metrics::WriteMultithreadedMetrics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Metrics*>(),
                        {"WriteMultithreadedMetrics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Dissonance::Metrics::InternalSampleMetric(::StringW  name, double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Metrics*>(),
                        {"InternalSampleMetric", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
inline ::StringW Dissonance::Metrics::MetricName(::StringW  category, ::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Metrics*>(),
                        {"MetricName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, category, id);
}
inline ::StringW Dissonance::Metrics::MetricName(::StringW  category)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Metrics*>(),
                        {"MetricName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, category);
}
inline void Dissonance::Metrics::Sample(::StringW  name, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Metrics*>(),
                        {"Sample", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, value);
}
// Ctor Parameters []
constexpr ::Dissonance::Metrics::Metrics()   {
}
