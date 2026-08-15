#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IDeepCloneable.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IDeepCloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Interfaces::IDeepCloneable.DeepClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Utils::Interfaces::IDeepCloneable::*)()>(&::Rewired::Utils::Interfaces::IDeepCloneable::DeepClone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Interfaces::IDeepCloneable*>(),
                    {::i2c::class_of<::Rewired::Utils::Interfaces::IDeepCloneable*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Object* Rewired::Utils::Interfaces::IDeepCloneable::DeepClone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IDeepCloneable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
