#pragma once
// IWYU pragma private; include "Animancer/FSM/IPrioritizable.hpp"
#include "Animancer/FSM/zzzz__IPrioritizable_def.hpp"
#include "Animancer/FSM/zzzz__IState_def.hpp"
//  Writing Method size for method: ::Animancer::FSM::IPrioritizable.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::FSM::IPrioritizable::*)()>(&::Animancer::FSM::IPrioritizable::get_Priority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::IPrioritizable*>(),
                    {::i2c::class_of<::Animancer::FSM::IPrioritizable*>(), 0}
                ));
    return ___internal_method;
  }
};
inline float_t Animancer::FSM::IPrioritizable::get_Priority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IPrioritizable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
/// @brief Convert operator to "::Animancer::FSM::IState"
constexpr  Animancer::FSM::IPrioritizable::operator ::Animancer::FSM::IState*() noexcept {
return static_cast<::Animancer::FSM::IState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::FSM::IState"
constexpr ::Animancer::FSM::IState* Animancer::FSM::IPrioritizable::i___Animancer__FSM__IState() noexcept {
return static_cast<::Animancer::FSM::IState*>(static_cast<void*>(this));
}
