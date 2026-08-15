#pragma once
// IWYU pragma private; include "UnityEngine/ISubsystemDescriptor.hpp"
#include "UnityEngine/zzzz__ISubsystemDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::ISubsystemDescriptor.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ISubsystemDescriptor::*)()>(&::UnityEngine::ISubsystemDescriptor::get_id)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ISubsystemDescriptor*>(),
                    {::i2c::class_of<::UnityEngine::ISubsystemDescriptor*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::ISubsystemDescriptor::get_id()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::ISubsystemDescriptor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
