#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/BendRules.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__BendRules_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__BendRules_def.hpp"
#include "Unity/Mathematics/zzzz__Random_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::BendRules_Mode::BendRules_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::BendRules_Mode::BendRules_Mode()   {
}
constexpr ::JBooth::MicroVerseCore::BendRules_Mode  JBooth::MicroVerseCore::BendRules_Mode::None{static_cast<int32_t>(0xffffffff)};
constexpr ::JBooth::MicroVerseCore::BendRules_Mode  JBooth::MicroVerseCore::BendRules_Mode::Bend{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::BendRules_Mode  JBooth::MicroVerseCore::BendRules_Mode::Place{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::BendRules_Mode  JBooth::MicroVerseCore::BendRules_Mode::PlaceRotate{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::BendRules_Mode  JBooth::MicroVerseCore::BendRules_Mode::PlaceRotateNoSlope{static_cast<int32_t>(0x3)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::BendRules_CapMode::BendRules_CapMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::BendRules_CapMode::BendRules_CapMode()   {
}
constexpr ::JBooth::MicroVerseCore::BendRules_CapMode  JBooth::MicroVerseCore::BendRules_CapMode::Always{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::BendRules_CapMode  JBooth::MicroVerseCore::BendRules_CapMode::BeginOnly{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::BendRules_CapMode  JBooth::MicroVerseCore::BendRules_CapMode::Along{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::BendRules_CapMode  JBooth::MicroVerseCore::BendRules_CapMode::EndOnly{static_cast<int32_t>(0x3)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::BendRules_CullMode::BendRules_CullMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::BendRules_CullMode::BendRules_CullMode()   {
}
constexpr ::JBooth::MicroVerseCore::BendRules_CullMode  JBooth::MicroVerseCore::BendRules_CullMode::Cull{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::BendRules_CullMode  JBooth::MicroVerseCore::BendRules_CullMode::Clamp{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::BendRules_CullMode  JBooth::MicroVerseCore::BendRules_CullMode::Overflow{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::BendRules_SpawnRules._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::BendRules_SpawnRules::*)()>(&::JBooth::MicroVerseCore::BendRules_SpawnRules::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181417850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BendRules_SpawnRules*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& JBooth::MicroVerseCore::BendRules_SpawnRules::__cordl_internal_get_chance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chance;
}
constexpr float_t const& JBooth::MicroVerseCore::BendRules_SpawnRules::__cordl_internal_get_chance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chance;
}
constexpr void JBooth::MicroVerseCore::BendRules_SpawnRules::__cordl_internal_set_chance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chance = value;
}
constexpr ::JBooth::MicroVerseCore::BendRules_CapMode& JBooth::MicroVerseCore::BendRules_SpawnRules::__cordl_internal_get_capMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capMode;
}
constexpr ::JBooth::MicroVerseCore::BendRules_CapMode const& JBooth::MicroVerseCore::BendRules_SpawnRules::__cordl_internal_get_capMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capMode;
}
constexpr void JBooth::MicroVerseCore::BendRules_SpawnRules::__cordl_internal_set_capMode(::JBooth::MicroVerseCore::BendRules_CapMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___capMode = value;
}
constexpr float_t& JBooth::MicroVerseCore::BendRules_SpawnRules::__cordl_internal_get_requiredLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredLeft;
}
constexpr float_t const& JBooth::MicroVerseCore::BendRules_SpawnRules::__cordl_internal_get_requiredLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredLeft;
}
constexpr void JBooth::MicroVerseCore::BendRules_SpawnRules::__cordl_internal_set_requiredLeft(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requiredLeft = value;
}
constexpr ::JBooth::MicroVerseCore::BendRules_CullMode& JBooth::MicroVerseCore::BendRules_SpawnRules::__cordl_internal_get_cullingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cullingMode;
}
constexpr ::JBooth::MicroVerseCore::BendRules_CullMode const& JBooth::MicroVerseCore::BendRules_SpawnRules::__cordl_internal_get_cullingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cullingMode;
}
constexpr void JBooth::MicroVerseCore::BendRules_SpawnRules::__cordl_internal_set_cullingMode(::JBooth::MicroVerseCore::BendRules_CullMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cullingMode = value;
}
inline void JBooth::MicroVerseCore::BendRules_SpawnRules::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BendRules_SpawnRules*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::BendRules_SpawnRules* JBooth::MicroVerseCore::BendRules_SpawnRules::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::BendRules_SpawnRules*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::BendRules_SpawnRules::BendRules_SpawnRules()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::BendRules_PlaceRules._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::BendRules_PlaceRules::*)()>(&::JBooth::MicroVerseCore::BendRules_PlaceRules::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18140ddd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BendRules_PlaceRules*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& JBooth::MicroVerseCore::BendRules_PlaceRules::__cordl_internal_get_positionVariance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionVariance;
}
constexpr ::UnityEngine::Vector3 const& JBooth::MicroVerseCore::BendRules_PlaceRules::__cordl_internal_get_positionVariance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionVariance;
}
constexpr void JBooth::MicroVerseCore::BendRules_PlaceRules::__cordl_internal_set_positionVariance(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionVariance = value;
}
constexpr ::UnityEngine::Vector3& JBooth::MicroVerseCore::BendRules_PlaceRules::__cordl_internal_get_rotationVariance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationVariance;
}
constexpr ::UnityEngine::Vector3 const& JBooth::MicroVerseCore::BendRules_PlaceRules::__cordl_internal_get_rotationVariance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationVariance;
}
constexpr void JBooth::MicroVerseCore::BendRules_PlaceRules::__cordl_internal_set_rotationVariance(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationVariance = value;
}
constexpr ::UnityEngine::Vector3& JBooth::MicroVerseCore::BendRules_PlaceRules::__cordl_internal_get_scaleVariant()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleVariant;
}
constexpr ::UnityEngine::Vector3 const& JBooth::MicroVerseCore::BendRules_PlaceRules::__cordl_internal_get_scaleVariant() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleVariant;
}
constexpr void JBooth::MicroVerseCore::BendRules_PlaceRules::__cordl_internal_set_scaleVariant(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleVariant = value;
}
constexpr bool& JBooth::MicroVerseCore::BendRules_PlaceRules::__cordl_internal_get_scaleUniform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleUniform;
}
constexpr bool const& JBooth::MicroVerseCore::BendRules_PlaceRules::__cordl_internal_get_scaleUniform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleUniform;
}
constexpr void JBooth::MicroVerseCore::BendRules_PlaceRules::__cordl_internal_set_scaleUniform(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleUniform = value;
}
inline void JBooth::MicroVerseCore::BendRules_PlaceRules::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BendRules_PlaceRules*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::BendRules_PlaceRules* JBooth::MicroVerseCore::BendRules_PlaceRules::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::BendRules_PlaceRules*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::BendRules_PlaceRules::BendRules_PlaceRules()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::BendRules.GetDesiredCapMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::BendRules_CapMode (*)(float_t, float_t, float_t)>(&::JBooth::MicroVerseCore::BendRules::GetDesiredCapMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181405bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BendRules*>(),
                        {"GetDesiredCapMode", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::BendRules.ShouldSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::JBooth::MicroVerseCore::BendRules*, float_t, float_t, float_t, ::Unity::Mathematics::Random)>(&::JBooth::MicroVerseCore::BendRules::ShouldSpawn)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181405c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BendRules*>(),
                        {"ShouldSpawn", {}, {::i2c::type_of<::JBooth::MicroVerseCore::BendRules*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::Random>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::BendRules._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::BendRules::*)()>(&::JBooth::MicroVerseCore::BendRules::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181405cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BendRules*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::BendRules_Mode& JBooth::MicroVerseCore::BendRules::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::JBooth::MicroVerseCore::BendRules_Mode const& JBooth::MicroVerseCore::BendRules::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void JBooth::MicroVerseCore::BendRules::__cordl_internal_set_mode(::JBooth::MicroVerseCore::BendRules_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::JBooth::MicroVerseCore::BendRules_SpawnRules*& JBooth::MicroVerseCore::BendRules::__cordl_internal_get_spawnRules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnRules;
}
constexpr ::JBooth::MicroVerseCore::BendRules_SpawnRules* const& JBooth::MicroVerseCore::BendRules::__cordl_internal_get_spawnRules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnRules;
}
constexpr void JBooth::MicroVerseCore::BendRules::__cordl_internal_set_spawnRules(::JBooth::MicroVerseCore::BendRules_SpawnRules*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnRules = value;
}
constexpr ::JBooth::MicroVerseCore::BendRules_PlaceRules*& JBooth::MicroVerseCore::BendRules::__cordl_internal_get_placeRules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeRules;
}
constexpr ::JBooth::MicroVerseCore::BendRules_PlaceRules* const& JBooth::MicroVerseCore::BendRules::__cordl_internal_get_placeRules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeRules;
}
constexpr void JBooth::MicroVerseCore::BendRules::__cordl_internal_set_placeRules(::JBooth::MicroVerseCore::BendRules_PlaceRules*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placeRules = value;
}
inline ::JBooth::MicroVerseCore::BendRules_CapMode JBooth::MicroVerseCore::BendRules::GetDesiredCapMode(float_t  remainingLength, float_t  meshLength, float_t  totalLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BendRules*>(),
                        {"GetDesiredCapMode", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::BendRules_CapMode>(nullptr, ___internal_method, remainingLength, meshLength, totalLength);
}
inline bool JBooth::MicroVerseCore::BendRules::ShouldSpawn(::JBooth::MicroVerseCore::BendRules*  rules, float_t  curLength, float_t  meshLength, float_t  totalLength, ::Unity::Mathematics::Random  rand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BendRules*>(),
                        {"ShouldSpawn", {}, {::i2c::type_of<::JBooth::MicroVerseCore::BendRules*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::Random>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rules, curLength, meshLength, totalLength, rand);
}
inline void JBooth::MicroVerseCore::BendRules::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BendRules*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::BendRules* JBooth::MicroVerseCore::BendRules::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::BendRules*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::BendRules::BendRules()   {
}
