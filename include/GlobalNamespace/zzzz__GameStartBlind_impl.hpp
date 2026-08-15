#pragma once
// IWYU pragma private; include "GlobalNamespace/GameStartBlind.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameStartBlind_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameStartBlind.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameStartBlind::*)()>(&::GlobalNamespace::GameStartBlind::Awake)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180432c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStartBlind*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameStartBlind.OnPlayerReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameStartBlind::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::GameStartBlind::OnPlayerReady)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180432d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStartBlind*>(),
                        {"OnPlayerReady", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameStartBlind.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameStartBlind::*)()>(&::GlobalNamespace::GameStartBlind::Update)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180432d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStartBlind*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameStartBlind._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameStartBlind::*)()>(&::GlobalNamespace::GameStartBlind::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180432e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStartBlind*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::GameStartBlind::__cordl_internal_get_image()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___image;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::GameStartBlind::__cordl_internal_get_image() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___image;
}
constexpr void GlobalNamespace::GameStartBlind::__cordl_internal_set_image(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___image = value;
}
constexpr float_t& GlobalNamespace::GameStartBlind::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::GameStartBlind::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::GameStartBlind::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr float_t& GlobalNamespace::GameStartBlind::__cordl_internal_get__transitionStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionStartTime;
}
constexpr float_t const& GlobalNamespace::GameStartBlind::__cordl_internal_get__transitionStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionStartTime;
}
constexpr void GlobalNamespace::GameStartBlind::__cordl_internal_set__transitionStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transitionStartTime = value;
}
inline void GlobalNamespace::GameStartBlind::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStartBlind*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameStartBlind::OnPlayerReady(::GlobalNamespace::PlayerCharacter*  character)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStartBlind*>(),
                        {"OnPlayerReady", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, character);
}
inline void GlobalNamespace::GameStartBlind::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStartBlind*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameStartBlind::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStartBlind*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameStartBlind* GlobalNamespace::GameStartBlind::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameStartBlind*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameStartBlind::GameStartBlind()   {
}
