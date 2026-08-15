#pragma once
// IWYU pragma private; include "Rewired/UI/IVisibilityChangedHandler.hpp"
#include "Rewired/UI/zzzz__IVisibilityChangedHandler_def.hpp"
//  Writing Method size for method: ::Rewired::UI::IVisibilityChangedHandler.OnVisibilityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::UI::IVisibilityChangedHandler::*)(bool)>(&::Rewired::UI::IVisibilityChangedHandler::OnVisibilityChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::UI::IVisibilityChangedHandler*>(),
                    {::i2c::class_of<::Rewired::UI::IVisibilityChangedHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Rewired::UI::IVisibilityChangedHandler::OnVisibilityChanged(bool  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::UI::IVisibilityChangedHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
