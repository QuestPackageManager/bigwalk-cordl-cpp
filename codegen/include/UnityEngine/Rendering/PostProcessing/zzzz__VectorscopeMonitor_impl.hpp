#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/VectorscopeMonitor.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Monitor_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__VectorscopeMonitor_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::*)()>(&::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fd0a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor.NeedsHalfRes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::*)()>(&::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::NeedsHalfRes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor.ShaderResourcesAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::ShaderResourcesAvailable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fd0ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::Render)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x181fd0ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::*)()>(&::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fd0ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr void UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::__cordl_internal_set_size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::__cordl_internal_get_exposure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exposure;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::__cordl_internal_get_exposure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exposure;
}
constexpr void UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::__cordl_internal_set_exposure(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exposure = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::__cordl_internal_get_m_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Data;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::__cordl_internal_get_m_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Data;
}
constexpr void UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::__cordl_internal_set_m_Data(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Data = value;
}
inline void UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::NeedsHalfRes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::ShaderResourcesAvailable(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor* UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor::VectorscopeMonitor()   {
}
