#pragma once
// IWYU pragma private; include "MA/Flora/CommandBufferProfilerScope.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "MA/Flora/zzzz__CommandBufferProfilerScope_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
//  Writing Method size for method: ::MA::Flora::CommandBufferProfilerScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CommandBufferProfilerScope::*)(::UnityEngine::Rendering::CommandBuffer*, ::Unity::Profiling::ProfilerMarker)>(&::MA::Flora::CommandBufferProfilerScope::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1809c0120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CommandBufferProfilerScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::Unity::Profiling::ProfilerMarker>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CommandBufferProfilerScope.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CommandBufferProfilerScope::*)()>(&::MA::Flora::CommandBufferProfilerScope::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CommandBufferProfilerScope>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CommandBufferProfilerScope::_ctor(::UnityEngine::Rendering::CommandBuffer*  cmd, ::Unity::Profiling::ProfilerMarker  marker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CommandBufferProfilerScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::Unity::Profiling::ProfilerMarker>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, marker);
}
inline void MA::Flora::CommandBufferProfilerScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CommandBufferProfilerScope>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::CommandBufferProfilerScope::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::CommandBufferProfilerScope::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_CommandBuffer", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Marker", ty: "::Unity::Profiling::ProfilerMarker", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CommandBufferProfilerScope::CommandBufferProfilerScope(::UnityEngine::Rendering::CommandBuffer*  m_CommandBuffer, ::Unity::Profiling::ProfilerMarker  m_Marker) noexcept  {
this->m_CommandBuffer = m_CommandBuffer;
this->m_Marker = m_Marker;
}
// Ctor Parameters []
constexpr ::MA::Flora::CommandBufferProfilerScope::CommandBufferProfilerScope()   {
}
