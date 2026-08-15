#pragma once
// IWYU pragma private; include "Animancer/Examples/Layers/DynamicLayeredCharacterAnimations.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/Layers/zzzz__DynamicLayeredCharacterAnimations_def.hpp"
#include "Animancer/Examples/Layers/zzzz__LayeredAnimationManager_def.hpp"
#include "Animancer/zzzz__ClipTransition_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::*)()>(&::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802fa6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::*)()>(&::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::Update)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1802fa8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations.UpdateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::*)()>(&::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::UpdateMovement)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802fa850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations*>(),
                        {"UpdateMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations.UpdateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::*)()>(&::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::UpdateAction)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1802fa760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations*>(),
                        {"UpdateAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::*)()>(&::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::Examples::Layers::LayeredAnimationManager>& Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::__cordl_internal_get__AnimationManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnimationManager;
}
constexpr ::UnityW<::Animancer::Examples::Layers::LayeredAnimationManager> const& Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::__cordl_internal_get__AnimationManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnimationManager;
}
constexpr void Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::__cordl_internal_set__AnimationManager(::UnityW<::Animancer::Examples::Layers::LayeredAnimationManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AnimationManager = value;
}
constexpr ::Animancer::ClipTransition*& Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::__cordl_internal_get__Idle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Idle;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::__cordl_internal_get__Idle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Idle;
}
constexpr void Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::__cordl_internal_set__Idle(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Idle = value;
}
constexpr ::Animancer::ClipTransition*& Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::__cordl_internal_get__Move()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Move;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::__cordl_internal_get__Move() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Move;
}
constexpr void Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::__cordl_internal_set__Move(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Move = value;
}
constexpr ::Animancer::ClipTransition*& Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::__cordl_internal_get__Action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Action;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::__cordl_internal_get__Action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Action;
}
constexpr void Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::__cordl_internal_set__Action(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Action = value;
}
inline void Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::UpdateMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations*>(),
                        {"UpdateMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::UpdateAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations*>(),
                        {"UpdateAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations* Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations::DynamicLayeredCharacterAnimations()   {
}
