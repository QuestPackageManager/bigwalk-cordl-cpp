#pragma once
// IWYU pragma private; include "Animancer/IWrapper.hpp"
#include "Animancer/zzzz__IWrapper_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Animancer::IWrapper.get_WrappedObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::IWrapper::*)()>(&::Animancer::IWrapper::get_WrappedObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::IWrapper*>(),
                    {::i2c::class_of<::Animancer::IWrapper*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Object* Animancer::IWrapper::get_WrappedObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::IWrapper*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
