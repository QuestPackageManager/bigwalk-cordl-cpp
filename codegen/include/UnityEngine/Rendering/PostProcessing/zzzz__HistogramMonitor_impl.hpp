#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/HistogramMonitor.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Monitor_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__HistogramMonitor_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__HistogramMonitor_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel::HistogramMonitor_Channel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel::HistogramMonitor_Channel()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel  UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel::Red{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel  UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel::Green{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel  UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel::Blue{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel  UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel::Master{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HistogramMonitor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::HistogramMonitor::*)()>(&::UnityEngine::Rendering::PostProcessing::HistogramMonitor::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fc0060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HistogramMonitor*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HistogramMonitor*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HistogramMonitor.NeedsHalfRes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::HistogramMonitor::*)()>(&::UnityEngine::Rendering::PostProcessing::HistogramMonitor::NeedsHalfRes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HistogramMonitor*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HistogramMonitor*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HistogramMonitor.ShaderResourcesAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::HistogramMonitor::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::HistogramMonitor::ShaderResourcesAvailable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fc04a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HistogramMonitor*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HistogramMonitor*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HistogramMonitor.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::HistogramMonitor::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::HistogramMonitor::Render)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x181fc00c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HistogramMonitor*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HistogramMonitor*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HistogramMonitor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::HistogramMonitor::*)()>(&::UnityEngine::Rendering::PostProcessing::HistogramMonitor::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fc04c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HistogramMonitor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::PostProcessing::HistogramMonitor::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::HistogramMonitor::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void UnityEngine::Rendering::PostProcessing::HistogramMonitor::__cordl_internal_set_width(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
constexpr int32_t& UnityEngine::Rendering::PostProcessing::HistogramMonitor::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::HistogramMonitor::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void UnityEngine::Rendering::PostProcessing::HistogramMonitor::__cordl_internal_set_height(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel& UnityEngine::Rendering::PostProcessing::HistogramMonitor::__cordl_internal_get_channel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channel;
}
constexpr ::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel const& UnityEngine::Rendering::PostProcessing::HistogramMonitor::__cordl_internal_get_channel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channel;
}
constexpr void UnityEngine::Rendering::PostProcessing::HistogramMonitor::__cordl_internal_set_channel(::UnityEngine::Rendering::PostProcessing::HistogramMonitor_Channel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channel = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::PostProcessing::HistogramMonitor::__cordl_internal_get_m_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Data;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::PostProcessing::HistogramMonitor::__cordl_internal_get_m_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Data;
}
constexpr void UnityEngine::Rendering::PostProcessing::HistogramMonitor::__cordl_internal_set_m_Data(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Data = value;
}
inline void UnityEngine::Rendering::PostProcessing::HistogramMonitor::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HistogramMonitor*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::HistogramMonitor::NeedsHalfRes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HistogramMonitor*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::HistogramMonitor::ShaderResourcesAvailable(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HistogramMonitor*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::HistogramMonitor::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HistogramMonitor*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::HistogramMonitor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HistogramMonitor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::HistogramMonitor* UnityEngine::Rendering::PostProcessing::HistogramMonitor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::HistogramMonitor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::HistogramMonitor::HistogramMonitor()   {
}
