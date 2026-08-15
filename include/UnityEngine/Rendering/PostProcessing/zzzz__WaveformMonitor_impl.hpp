#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/WaveformMonitor.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Monitor_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__WaveformMonitor_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::WaveformMonitor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::WaveformMonitor::*)()>(&::UnityEngine::Rendering::PostProcessing::WaveformMonitor::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fd0a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::WaveformMonitor*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::WaveformMonitor*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::WaveformMonitor.NeedsHalfRes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::WaveformMonitor::*)()>(&::UnityEngine::Rendering::PostProcessing::WaveformMonitor::NeedsHalfRes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::WaveformMonitor*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::WaveformMonitor*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::WaveformMonitor.ShaderResourcesAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::WaveformMonitor::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::WaveformMonitor::ShaderResourcesAvailable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fd15a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::WaveformMonitor*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::WaveformMonitor*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::WaveformMonitor.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::WaveformMonitor::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::WaveformMonitor::Render)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x181fd0f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::WaveformMonitor*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::WaveformMonitor*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::WaveformMonitor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::WaveformMonitor::*)()>(&::UnityEngine::Rendering::PostProcessing::WaveformMonitor::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fd15c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::WaveformMonitor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::PostProcessing::WaveformMonitor::__cordl_internal_get_exposure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exposure;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::WaveformMonitor::__cordl_internal_get_exposure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exposure;
}
constexpr void UnityEngine::Rendering::PostProcessing::WaveformMonitor::__cordl_internal_set_exposure(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exposure = value;
}
constexpr int32_t& UnityEngine::Rendering::PostProcessing::WaveformMonitor::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::WaveformMonitor::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void UnityEngine::Rendering::PostProcessing::WaveformMonitor::__cordl_internal_set_height(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::PostProcessing::WaveformMonitor::__cordl_internal_get_m_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Data;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::PostProcessing::WaveformMonitor::__cordl_internal_get_m_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Data;
}
constexpr void UnityEngine::Rendering::PostProcessing::WaveformMonitor::__cordl_internal_set_m_Data(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Data = value;
}
inline void UnityEngine::Rendering::PostProcessing::WaveformMonitor::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::WaveformMonitor*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::WaveformMonitor::NeedsHalfRes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::WaveformMonitor*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::WaveformMonitor::ShaderResourcesAvailable(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::WaveformMonitor*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::WaveformMonitor::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::WaveformMonitor*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::WaveformMonitor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::WaveformMonitor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::WaveformMonitor* UnityEngine::Rendering::PostProcessing::WaveformMonitor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::WaveformMonitor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::WaveformMonitor::WaveformMonitor()   {
}
