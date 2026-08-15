#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/PacketLossCalculator.hpp"
#include "Dissonance/Datastructures/zzzz__BaseWindowCalculator_1_impl.hpp"
#include "Dissonance/Datastructures/zzzz__PacketLossCalculator_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Datastructures::PacketLossCalculator.get_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Datastructures::PacketLossCalculator::*)()>(&::Dissonance::Datastructures::PacketLossCalculator::get_PacketLoss)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805e1ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::PacketLossCalculator*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::PacketLossCalculator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::PacketLossCalculator::*)(uint32_t)>(&::Dissonance::Datastructures::PacketLossCalculator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e1e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::PacketLossCalculator*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::PacketLossCalculator.Updated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::PacketLossCalculator::*)(::System::Nullable_1<bool>, bool)>(&::Dissonance::Datastructures::PacketLossCalculator::Updated)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805e1e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Datastructures::PacketLossCalculator*>(),
                    {::i2c::class_of<::Dissonance::Datastructures::PacketLossCalculator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::PacketLossCalculator.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::PacketLossCalculator::*)()>(&::Dissonance::Datastructures::PacketLossCalculator::Clear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805e1e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Datastructures::PacketLossCalculator*>(),
                    {::i2c::class_of<::Dissonance::Datastructures::PacketLossCalculator*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr uint32_t& Dissonance::Datastructures::PacketLossCalculator::__cordl_internal_get__lost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lost;
}
constexpr uint32_t const& Dissonance::Datastructures::PacketLossCalculator::__cordl_internal_get__lost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lost;
}
constexpr void Dissonance::Datastructures::PacketLossCalculator::__cordl_internal_set__lost(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lost = value;
}
inline float_t Dissonance::Datastructures::PacketLossCalculator::get_PacketLoss()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::PacketLossCalculator*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Datastructures::PacketLossCalculator::_ctor(uint32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::PacketLossCalculator*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void Dissonance::Datastructures::PacketLossCalculator::Updated(::System::Nullable_1<bool>  removed, bool  added)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Datastructures::PacketLossCalculator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removed, added);
}
inline void Dissonance::Datastructures::PacketLossCalculator::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Datastructures::PacketLossCalculator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Datastructures::PacketLossCalculator* Dissonance::Datastructures::PacketLossCalculator::New_ctor(uint32_t  size)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Datastructures::PacketLossCalculator*>(size));
}
// Ctor Parameters []
constexpr ::Dissonance::Datastructures::PacketLossCalculator::PacketLossCalculator()   {
}
