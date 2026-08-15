#pragma once
// IWYU pragma private; include "Animancer/Examples/FineControl/SpiderBot.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/FineControl/zzzz__SpiderBot_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "Animancer/zzzz__ClipTransition_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::FineControl::SpiderBot.get_Animancer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Animancer::AnimancerComponent> (::Animancer::Examples::FineControl::SpiderBot::*)()>(&::Animancer::Examples::FineControl::SpiderBot::get_Animancer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {"get_Animancer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::SpiderBot.get_Move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ITransition* (::Animancer::Examples::FineControl::SpiderBot::*)()>(&::Animancer::Examples::FineControl::SpiderBot::get_Move)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {"get_Move", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::SpiderBot.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::SpiderBot::*)()>(&::Animancer::Examples::FineControl::SpiderBot::Awake)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180302180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::SpiderBot.OnWakeUpEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::SpiderBot::*)()>(&::Animancer::Examples::FineControl::SpiderBot::OnWakeUpEnd)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803022e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {"OnWakeUpEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::SpiderBot.get_IsMoving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::Examples::FineControl::SpiderBot::*)()>(&::Animancer::Examples::FineControl::SpiderBot::get_IsMoving)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803023c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {"get_IsMoving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::SpiderBot.set_IsMoving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::SpiderBot::*)(bool)>(&::Animancer::Examples::FineControl::SpiderBot::set_IsMoving)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803023d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {"set_IsMoving", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::SpiderBot.WakeUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::SpiderBot::*)()>(&::Animancer::Examples::FineControl::SpiderBot::WakeUp)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180302350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {"WakeUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::SpiderBot.GoToSleep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::SpiderBot::*)()>(&::Animancer::Examples::FineControl::SpiderBot::GoToSleep)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180302240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {"GoToSleep", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::SpiderBot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::SpiderBot::*)()>(&::Animancer::Examples::FineControl::SpiderBot::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::FineControl::SpiderBot::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::FineControl::SpiderBot::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::FineControl::SpiderBot::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::Animancer::ClipTransition*& Animancer::Examples::FineControl::SpiderBot::__cordl_internal_get__WakeUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WakeUp;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::FineControl::SpiderBot::__cordl_internal_get__WakeUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WakeUp;
}
constexpr void Animancer::Examples::FineControl::SpiderBot::__cordl_internal_set__WakeUp(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WakeUp = value;
}
constexpr ::Animancer::ITransition*& Animancer::Examples::FineControl::SpiderBot::__cordl_internal_get__Move()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Move;
}
constexpr ::Animancer::ITransition* const& Animancer::Examples::FineControl::SpiderBot::__cordl_internal_get__Move() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Move;
}
constexpr void Animancer::Examples::FineControl::SpiderBot::__cordl_internal_set__Move(::Animancer::ITransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Move = value;
}
constexpr bool& Animancer::Examples::FineControl::SpiderBot::__cordl_internal_get__IsMoving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMoving;
}
constexpr bool const& Animancer::Examples::FineControl::SpiderBot::__cordl_internal_get__IsMoving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMoving;
}
constexpr void Animancer::Examples::FineControl::SpiderBot::__cordl_internal_set__IsMoving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsMoving = value;
}
inline ::UnityW<::Animancer::AnimancerComponent> Animancer::Examples::FineControl::SpiderBot::get_Animancer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {"get_Animancer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Animancer::AnimancerComponent>>(this, ___internal_method);
}
inline ::Animancer::ITransition* Animancer::Examples::FineControl::SpiderBot::get_Move()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {"get_Move", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ITransition*>(this, ___internal_method);
}
inline void Animancer::Examples::FineControl::SpiderBot::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::FineControl::SpiderBot::OnWakeUpEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {"OnWakeUpEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Animancer::Examples::FineControl::SpiderBot::get_IsMoving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {"get_IsMoving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::Examples::FineControl::SpiderBot::set_IsMoving(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {"set_IsMoving", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::Examples::FineControl::SpiderBot::WakeUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {"WakeUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::FineControl::SpiderBot::GoToSleep()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {"GoToSleep", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::FineControl::SpiderBot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::SpiderBot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::FineControl::SpiderBot* Animancer::Examples::FineControl::SpiderBot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::FineControl::SpiderBot*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::FineControl::SpiderBot::SpiderBot()   {
}
