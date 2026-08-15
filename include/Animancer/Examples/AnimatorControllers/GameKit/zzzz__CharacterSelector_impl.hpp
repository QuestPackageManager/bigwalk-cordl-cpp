#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/CharacterSelector.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__CharacterSelector_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f81d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::Update)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802f8360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector.SelectCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::*)(int32_t)>(&::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::SelectCharacter)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1802f81e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector*>(),
                        {"SelectCharacter", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::__cordl_internal_get__Text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Text;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::__cordl_internal_get__Text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Text;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::__cordl_internal_set__Text(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Text = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::__cordl_internal_get__Characters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Characters;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::__cordl_internal_get__Characters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Characters;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::__cordl_internal_set__Characters(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Characters = value;
}
inline void Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::SelectCharacter(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector*>(),
                        {"SelectCharacter", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector* Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector::CharacterSelector()   {
}
