#pragma once
// IWYU pragma private; include "MA/Flora/IntProfilerCounter.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "MA/Flora/zzzz__IntProfilerCounter_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarkerDataUnit_def.hpp"
//  Writing Method size for method: ::MA::Flora::IntProfilerCounter.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::IntProfilerCounter::*)()>(&::MA::Flora::IntProfilerCounter::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ff710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IntProfilerCounter>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IntProfilerCounter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IntProfilerCounter::*)(::StringW, ::Unity::Profiling::ProfilerMarkerDataUnit)>(&::MA::Flora::IntProfilerCounter::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814cdf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IntProfilerCounter>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Profiling::ProfilerMarkerDataUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IntProfilerCounter.Sample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IntProfilerCounter::*)(int32_t)>(&::MA::Flora::IntProfilerCounter::Sample)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814cdeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IntProfilerCounter>(),
                        {"Sample", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::IntProfilerCounter::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IntProfilerCounter>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::IntProfilerCounter::_ctor(::StringW  name, ::Unity::Profiling::ProfilerMarkerDataUnit  unit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IntProfilerCounter>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Profiling::ProfilerMarkerDataUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, unit);
}
inline void MA::Flora::IntProfilerCounter::Sample(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IntProfilerCounter>(),
                        {"Sample", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::IntProfilerCounter::IntProfilerCounter(::System::IntPtr  m_Handle) noexcept  {
this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::MA::Flora::IntProfilerCounter::IntProfilerCounter()   {
}
