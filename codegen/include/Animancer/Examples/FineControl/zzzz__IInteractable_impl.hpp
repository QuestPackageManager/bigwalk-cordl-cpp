#pragma once
// IWYU pragma private; include "Animancer/Examples/FineControl/IInteractable.hpp"
#include "Animancer/Examples/FineControl/zzzz__IInteractable_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::FineControl::IInteractable.Interact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::IInteractable::*)()>(&::Animancer::Examples::FineControl::IInteractable::Interact)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::FineControl::IInteractable*>(),
                    {::i2c::class_of<::Animancer::Examples::FineControl::IInteractable*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Animancer::Examples::FineControl::IInteractable::Interact()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::FineControl::IInteractable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
