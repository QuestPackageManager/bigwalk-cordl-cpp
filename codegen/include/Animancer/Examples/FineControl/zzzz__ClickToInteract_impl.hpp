#pragma once
// IWYU pragma private; include "Animancer/Examples/FineControl/ClickToInteract.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/FineControl/zzzz__ClickToInteract_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::FineControl::ClickToInteract.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::ClickToInteract::*)()>(&::Animancer::Examples::FineControl::ClickToInteract::Update)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1802f8650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::ClickToInteract*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::ClickToInteract._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::ClickToInteract::*)()>(&::Animancer::Examples::FineControl::ClickToInteract::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::ClickToInteract*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::Examples::FineControl::ClickToInteract::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::ClickToInteract*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::FineControl::ClickToInteract::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::ClickToInteract*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::FineControl::ClickToInteract* Animancer::Examples::FineControl::ClickToInteract::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::FineControl::ClickToInteract*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::FineControl::ClickToInteract::ClickToInteract()   {
}
