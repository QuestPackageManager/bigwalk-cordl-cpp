#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerVegetation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerVegetation_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "TheVisualEngine/zzzz__TVEElement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerVegetation.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVegetation::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerVegetation::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVegetation*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVegetation.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVegetation::*)()>(&::GlobalNamespace::PlayerVegetation::Update)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180378b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVegetation*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVegetation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVegetation::*)()>(&::GlobalNamespace::PlayerVegetation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVegetation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TheVisualEngine::TVEElement>& GlobalNamespace::PlayerVegetation::__cordl_internal_get_tveElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tveElement;
}
constexpr ::UnityW<::TheVisualEngine::TVEElement> const& GlobalNamespace::PlayerVegetation::__cordl_internal_get_tveElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tveElement;
}
constexpr void GlobalNamespace::PlayerVegetation::__cordl_internal_set_tveElement(::UnityW<::TheVisualEngine::TVEElement>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tveElement = value;
}
constexpr float_t& GlobalNamespace::PlayerVegetation::__cordl_internal_get_maxCutoff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCutoff;
}
constexpr float_t const& GlobalNamespace::PlayerVegetation::__cordl_internal_get_maxCutoff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCutoff;
}
constexpr void GlobalNamespace::PlayerVegetation::__cordl_internal_set_maxCutoff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxCutoff = value;
}
constexpr float_t& GlobalNamespace::PlayerVegetation::__cordl_internal_get_minCutoff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minCutoff;
}
constexpr float_t const& GlobalNamespace::PlayerVegetation::__cordl_internal_get_minCutoff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minCutoff;
}
constexpr void GlobalNamespace::PlayerVegetation::__cordl_internal_set_minCutoff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minCutoff = value;
}
constexpr float_t& GlobalNamespace::PlayerVegetation::__cordl_internal_get_maxFadeValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxFadeValue;
}
constexpr float_t const& GlobalNamespace::PlayerVegetation::__cordl_internal_get_maxFadeValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxFadeValue;
}
constexpr void GlobalNamespace::PlayerVegetation::__cordl_internal_set_maxFadeValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxFadeValue = value;
}
constexpr bool& GlobalNamespace::PlayerVegetation::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerVegetation::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerVegetation::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerVegetation::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerVegetation::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerVegetation::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
inline void GlobalNamespace::PlayerVegetation::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVegetation*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerVegetation::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVegetation*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerVegetation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVegetation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerVegetation* GlobalNamespace::PlayerVegetation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerVegetation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerVegetation::PlayerVegetation()   {
}
