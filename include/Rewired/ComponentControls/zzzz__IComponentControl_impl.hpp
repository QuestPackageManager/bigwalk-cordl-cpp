#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/IComponentControl.hpp"
#include "Rewired/ComponentControls/zzzz__IComponentControl_def.hpp"
//  Writing Method size for method: ::Rewired::ComponentControls::IComponentControl.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::IComponentControl::*)()>(&::Rewired::ComponentControls::IComponentControl::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::IComponentControl*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::IComponentControl*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::IComponentControl.ClearValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::IComponentControl::*)()>(&::Rewired::ComponentControls::IComponentControl::ClearValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::IComponentControl*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::IComponentControl*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::IComponentControl::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::IComponentControl*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::IComponentControl::ClearValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::IComponentControl*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
