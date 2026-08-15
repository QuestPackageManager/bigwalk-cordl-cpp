#pragma once
// IWYU pragma private; include "UnityEngine/SubsystemsImplementation/SubsystemProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemProvider_def.hpp"
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SubsystemsImplementation::SubsystemProvider::*)()>(&::UnityEngine::SubsystemsImplementation::SubsystemProvider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::SubsystemsImplementation::SubsystemProvider::__cordl_internal_get_m_Running()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Running;
}
constexpr bool const& UnityEngine::SubsystemsImplementation::SubsystemProvider::__cordl_internal_get_m_Running() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Running;
}
constexpr void UnityEngine::SubsystemsImplementation::SubsystemProvider::__cordl_internal_set_m_Running(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Running = value;
}
inline void UnityEngine::SubsystemsImplementation::SubsystemProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::SubsystemsImplementation::SubsystemProvider* UnityEngine::SubsystemsImplementation::SubsystemProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::SubsystemsImplementation::SubsystemProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::SubsystemsImplementation::SubsystemProvider::SubsystemProvider()   {
}
