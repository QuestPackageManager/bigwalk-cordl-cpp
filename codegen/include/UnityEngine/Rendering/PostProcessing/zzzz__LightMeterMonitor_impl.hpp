#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/LightMeterMonitor.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Monitor_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__LightMeterMonitor_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::LightMeterMonitor.ShaderResourcesAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::LightMeterMonitor::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::LightMeterMonitor::ShaderResourcesAvailable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fc0880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LightMeterMonitor*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LightMeterMonitor*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::LightMeterMonitor.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::LightMeterMonitor::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::LightMeterMonitor::Render)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x181fc0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LightMeterMonitor*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LightMeterMonitor*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::LightMeterMonitor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::LightMeterMonitor::*)()>(&::UnityEngine::Rendering::PostProcessing::LightMeterMonitor::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fc08d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LightMeterMonitor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::PostProcessing::LightMeterMonitor::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::LightMeterMonitor::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void UnityEngine::Rendering::PostProcessing::LightMeterMonitor::__cordl_internal_set_width(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
constexpr int32_t& UnityEngine::Rendering::PostProcessing::LightMeterMonitor::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::LightMeterMonitor::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void UnityEngine::Rendering::PostProcessing::LightMeterMonitor::__cordl_internal_set_height(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::LightMeterMonitor::__cordl_internal_get_showCurves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showCurves;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::LightMeterMonitor::__cordl_internal_get_showCurves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showCurves;
}
constexpr void UnityEngine::Rendering::PostProcessing::LightMeterMonitor::__cordl_internal_set_showCurves(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showCurves = value;
}
inline bool UnityEngine::Rendering::PostProcessing::LightMeterMonitor::ShaderResourcesAvailable(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LightMeterMonitor*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::LightMeterMonitor::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LightMeterMonitor*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::LightMeterMonitor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LightMeterMonitor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::LightMeterMonitor* UnityEngine::Rendering::PostProcessing::LightMeterMonitor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::LightMeterMonitor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::LightMeterMonitor::LightMeterMonitor()   {
}
