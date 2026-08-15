#pragma once
// IWYU pragma private; include "GlobalNamespace/SpeedCalculator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SpeedCalculator_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpeedCalculator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpeedCalculator::*)(int32_t)>(&::GlobalNamespace::SpeedCalculator::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180346c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeedCalculator*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeedCalculator.UpdatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpeedCalculator::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SpeedCalculator::UpdatePosition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180346bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeedCalculator*>(),
                        {"UpdatePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeedCalculator.GetSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SpeedCalculator::*)()>(&::GlobalNamespace::SpeedCalculator::GetSpeed)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180346ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeedCalculator*>(),
                        {"GetSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SpeedCalculator::__cordl_internal_get_bufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferSize;
}
constexpr int32_t const& GlobalNamespace::SpeedCalculator::__cordl_internal_get_bufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferSize;
}
constexpr void GlobalNamespace::SpeedCalculator::__cordl_internal_set_bufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferSize = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::SpeedCalculator::__cordl_internal_get_positions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positions;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::SpeedCalculator::__cordl_internal_get_positions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positions;
}
constexpr void GlobalNamespace::SpeedCalculator::__cordl_internal_set_positions(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positions = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::SpeedCalculator::__cordl_internal_get_times()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___times;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::SpeedCalculator::__cordl_internal_get_times() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___times;
}
constexpr void GlobalNamespace::SpeedCalculator::__cordl_internal_set_times(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___times = value;
}
constexpr int32_t& GlobalNamespace::SpeedCalculator::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& GlobalNamespace::SpeedCalculator::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void GlobalNamespace::SpeedCalculator::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr bool& GlobalNamespace::SpeedCalculator::__cordl_internal_get_isBufferFull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBufferFull;
}
constexpr bool const& GlobalNamespace::SpeedCalculator::__cordl_internal_get_isBufferFull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBufferFull;
}
constexpr void GlobalNamespace::SpeedCalculator::__cordl_internal_set_isBufferFull(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isBufferFull = value;
}
inline void GlobalNamespace::SpeedCalculator::_ctor(int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeedCalculator*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferSize);
}
inline void GlobalNamespace::SpeedCalculator::UpdatePosition(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeedCalculator*>(),
                        {"UpdatePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline float_t GlobalNamespace::SpeedCalculator::GetSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeedCalculator*>(),
                        {"GetSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::SpeedCalculator* GlobalNamespace::SpeedCalculator::New_ctor(int32_t  bufferSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpeedCalculator*>(bufferSize));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpeedCalculator::SpeedCalculator()   {
}
