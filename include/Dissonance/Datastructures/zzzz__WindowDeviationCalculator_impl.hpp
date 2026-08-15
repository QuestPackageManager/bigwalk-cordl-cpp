#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/WindowDeviationCalculator.hpp"
#include "Dissonance/Datastructures/zzzz__BaseWindowCalculator_1_impl.hpp"
#include "Dissonance/Datastructures/zzzz__WindowDeviationCalculator_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Datastructures::WindowDeviationCalculator.get_StdDev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Datastructures::WindowDeviationCalculator::*)()>(&::Dissonance::Datastructures::WindowDeviationCalculator::get_StdDev)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(),
                        {"get_StdDev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::WindowDeviationCalculator.set_StdDev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::WindowDeviationCalculator::*)(float_t)>(&::Dissonance::Datastructures::WindowDeviationCalculator::set_StdDev)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(),
                        {"set_StdDev", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::WindowDeviationCalculator.get_Mean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Datastructures::WindowDeviationCalculator::*)()>(&::Dissonance::Datastructures::WindowDeviationCalculator::get_Mean)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(),
                        {"get_Mean", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::WindowDeviationCalculator.set_Mean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::WindowDeviationCalculator::*)(float_t)>(&::Dissonance::Datastructures::WindowDeviationCalculator::set_Mean)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f81c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(),
                        {"set_Mean", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::WindowDeviationCalculator.get_Confidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Datastructures::WindowDeviationCalculator::*)()>(&::Dissonance::Datastructures::WindowDeviationCalculator::get_Confidence)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805efbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(),
                        {"get_Confidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::WindowDeviationCalculator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::WindowDeviationCalculator::*)(uint32_t)>(&::Dissonance::Datastructures::WindowDeviationCalculator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805efbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::WindowDeviationCalculator.Updated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::WindowDeviationCalculator::*)(::System::Nullable_1<float_t>, float_t)>(&::Dissonance::Datastructures::WindowDeviationCalculator::Updated)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805efa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(),
                    {::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::WindowDeviationCalculator.CalculateDeviation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Datastructures::WindowDeviationCalculator::*)(float_t, float_t)>(&::Dissonance::Datastructures::WindowDeviationCalculator::CalculateDeviation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805ef9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(),
                        {"CalculateDeviation", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::WindowDeviationCalculator.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::WindowDeviationCalculator::*)()>(&::Dissonance::Datastructures::WindowDeviationCalculator::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805efa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(),
                    {::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr float_t& Dissonance::Datastructures::WindowDeviationCalculator::__cordl_internal_get__sum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sum;
}
constexpr float_t const& Dissonance::Datastructures::WindowDeviationCalculator::__cordl_internal_get__sum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sum;
}
constexpr void Dissonance::Datastructures::WindowDeviationCalculator::__cordl_internal_set__sum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sum = value;
}
constexpr float_t& Dissonance::Datastructures::WindowDeviationCalculator::__cordl_internal_get__sumOfSquares()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sumOfSquares;
}
constexpr float_t const& Dissonance::Datastructures::WindowDeviationCalculator::__cordl_internal_get__sumOfSquares() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sumOfSquares;
}
constexpr void Dissonance::Datastructures::WindowDeviationCalculator::__cordl_internal_set__sumOfSquares(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sumOfSquares = value;
}
constexpr float_t& Dissonance::Datastructures::WindowDeviationCalculator::__cordl_internal_get__StdDev_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StdDev_k__BackingField;
}
constexpr float_t const& Dissonance::Datastructures::WindowDeviationCalculator::__cordl_internal_get__StdDev_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StdDev_k__BackingField;
}
constexpr void Dissonance::Datastructures::WindowDeviationCalculator::__cordl_internal_set__StdDev_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StdDev_k__BackingField = value;
}
constexpr float_t& Dissonance::Datastructures::WindowDeviationCalculator::__cordl_internal_get__Mean_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mean_k__BackingField;
}
constexpr float_t const& Dissonance::Datastructures::WindowDeviationCalculator::__cordl_internal_get__Mean_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mean_k__BackingField;
}
constexpr void Dissonance::Datastructures::WindowDeviationCalculator::__cordl_internal_set__Mean_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Mean_k__BackingField = value;
}
inline float_t Dissonance::Datastructures::WindowDeviationCalculator::get_StdDev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(),
                        {"get_StdDev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Datastructures::WindowDeviationCalculator::set_StdDev(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(),
                        {"set_StdDev", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Dissonance::Datastructures::WindowDeviationCalculator::get_Mean()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(),
                        {"get_Mean", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Datastructures::WindowDeviationCalculator::set_Mean(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(),
                        {"set_Mean", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Dissonance::Datastructures::WindowDeviationCalculator::get_Confidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(),
                        {"get_Confidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Datastructures::WindowDeviationCalculator::_ctor(uint32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void Dissonance::Datastructures::WindowDeviationCalculator::Updated(::System::Nullable_1<float_t>  removed, float_t  added)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removed, added);
}
inline float_t Dissonance::Datastructures::WindowDeviationCalculator::CalculateDeviation(float_t  mean, float_t  meanOfSquares)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(),
                        {"CalculateDeviation", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, mean, meanOfSquares);
}
inline void Dissonance::Datastructures::WindowDeviationCalculator::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Datastructures::WindowDeviationCalculator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Datastructures::WindowDeviationCalculator* Dissonance::Datastructures::WindowDeviationCalculator::New_ctor(uint32_t  size)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Datastructures::WindowDeviationCalculator*>(size));
}
// Ctor Parameters []
constexpr ::Dissonance::Datastructures::WindowDeviationCalculator::WindowDeviationCalculator()   {
}
