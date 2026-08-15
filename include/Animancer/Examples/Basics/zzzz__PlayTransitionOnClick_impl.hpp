#pragma once
// IWYU pragma private; include "Animancer/Examples/Basics/PlayTransitionOnClick.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/Basics/zzzz__PlayTransitionOnClick_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "Animancer/zzzz__ClipTransition_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Basics::PlayTransitionOnClick.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Basics::PlayTransitionOnClick::*)()>(&::Animancer::Examples::Basics::PlayTransitionOnClick::OnEnable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180300210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::PlayTransitionOnClick*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Basics::PlayTransitionOnClick.OnActionEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Basics::PlayTransitionOnClick::*)()>(&::Animancer::Examples::Basics::PlayTransitionOnClick::OnActionEnd)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802fba70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::PlayTransitionOnClick*>(),
                        {"OnActionEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Basics::PlayTransitionOnClick.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Basics::PlayTransitionOnClick::*)()>(&::Animancer::Examples::Basics::PlayTransitionOnClick::Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803002a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::PlayTransitionOnClick*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Basics::PlayTransitionOnClick._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Basics::PlayTransitionOnClick::*)()>(&::Animancer::Examples::Basics::PlayTransitionOnClick::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::PlayTransitionOnClick*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::Basics::PlayTransitionOnClick::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::Basics::PlayTransitionOnClick::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::Basics::PlayTransitionOnClick::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::Animancer::ClipTransition*& Animancer::Examples::Basics::PlayTransitionOnClick::__cordl_internal_get__Idle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Idle;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::Basics::PlayTransitionOnClick::__cordl_internal_get__Idle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Idle;
}
constexpr void Animancer::Examples::Basics::PlayTransitionOnClick::__cordl_internal_set__Idle(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Idle = value;
}
constexpr ::Animancer::ClipTransition*& Animancer::Examples::Basics::PlayTransitionOnClick::__cordl_internal_get__Action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Action;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::Basics::PlayTransitionOnClick::__cordl_internal_get__Action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Action;
}
constexpr void Animancer::Examples::Basics::PlayTransitionOnClick::__cordl_internal_set__Action(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Action = value;
}
inline void Animancer::Examples::Basics::PlayTransitionOnClick::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::PlayTransitionOnClick*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Basics::PlayTransitionOnClick::OnActionEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::PlayTransitionOnClick*>(),
                        {"OnActionEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Basics::PlayTransitionOnClick::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::PlayTransitionOnClick*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Basics::PlayTransitionOnClick::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::PlayTransitionOnClick*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Basics::PlayTransitionOnClick* Animancer::Examples::Basics::PlayTransitionOnClick::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Basics::PlayTransitionOnClick*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Basics::PlayTransitionOnClick::PlayTransitionOnClick()   {
}
