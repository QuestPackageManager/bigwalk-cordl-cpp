#pragma once
// IWYU pragma private; include "System/Random.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::System::Random._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Random::*)()>(&::System::Random::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181723b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Random*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Random._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Random::*)(int32_t)>(&::System::Random::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181723ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Random*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Random.Sample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Random::*)()>(&::System::Random::Sample)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181723a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Random*>(),
                    {::i2c::class_of<::System::Random*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Random.InternalSample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Random::*)()>(&::System::Random::InternalSample)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181723790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Random*>(),
                        {"InternalSample", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Random.GenerateSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Random::GenerateSeed)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181723520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Random*>(),
                        {"GenerateSeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Random.GenerateGlobalSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Random::GenerateGlobalSeed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18170c7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Random*>(),
                        {"GenerateGlobalSeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Random.Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Random::*)()>(&::System::Random::Next)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181723790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Random*>(),
                    {::i2c::class_of<::System::Random*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Random.GetSampleForLargeRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Random::*)()>(&::System::Random::GetSampleForLargeRange)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181723690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Random*>(),
                        {"GetSampleForLargeRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Random.Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Random::*)(int32_t, int32_t)>(&::System::Random::Next)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181723830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Random*>(),
                    {::i2c::class_of<::System::Random*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Random.Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Random::*)(int32_t)>(&::System::Random::Next)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1817239f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Random*>(),
                    {::i2c::class_of<::System::Random*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Random.NextDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Random::*)()>(&::System::Random::NextDouble)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181723810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Random*>(),
                    {::i2c::class_of<::System::Random*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& System::Random::__cordl_internal_get__inext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inext;
}
constexpr int32_t const& System::Random::__cordl_internal_get__inext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inext;
}
constexpr void System::Random::__cordl_internal_set__inext(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inext = value;
}
constexpr int32_t& System::Random::__cordl_internal_get__inextp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inextp;
}
constexpr int32_t const& System::Random::__cordl_internal_get__inextp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inextp;
}
constexpr void System::Random::__cordl_internal_set__inextp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inextp = value;
}
constexpr ::ArrayW<int32_t>& System::Random::__cordl_internal_get__seedArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____seedArray;
}
constexpr ::ArrayW<int32_t> const& System::Random::__cordl_internal_get__seedArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____seedArray;
}
constexpr void System::Random::__cordl_internal_set__seedArray(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____seedArray = value;
}
inline void System::Random::setStaticF_t_threadRandom(::System::Random*  value)  {
::cordl_internals::setStaticField<::System::Random*, "t_threadRandom", ::System::Random*>(std::forward<::System::Random*>(value));
}
inline ::System::Random* System::Random::getStaticF_t_threadRandom()  {
return ::cordl_internals::getStaticField<::System::Random*, "t_threadRandom", ::System::Random*>();
}
inline void System::Random::setStaticF_s_globalRandom(::System::Random*  value)  {
::cordl_internals::setStaticField<::System::Random*, "s_globalRandom", ::System::Random*>(std::forward<::System::Random*>(value));
}
inline ::System::Random* System::Random::getStaticF_s_globalRandom()  {
return ::cordl_internals::getStaticField<::System::Random*, "s_globalRandom", ::System::Random*>();
}
inline void System::Random::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Random*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Random::_ctor(int32_t  Seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Random*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Seed);
}
inline double_t System::Random::Sample()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Random*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline int32_t System::Random::InternalSample()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Random*>(),
                        {"InternalSample", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Random::GenerateSeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Random*>(),
                        {"GenerateSeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t System::Random::GenerateGlobalSeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Random*>(),
                        {"GenerateGlobalSeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t System::Random::Next()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Random*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline double_t System::Random::GetSampleForLargeRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Random*>(),
                        {"GetSampleForLargeRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline int32_t System::Random::Next(int32_t  minValue, int32_t  maxValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Random*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, minValue, maxValue);
}
inline int32_t System::Random::Next(int32_t  maxValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Random*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, maxValue);
}
inline double_t System::Random::NextDouble()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Random*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::System::Random* System::Random::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Random*>());
}
inline ::System::Random* System::Random::New_ctor(int32_t  Seed)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Random*>(Seed));
}
// Ctor Parameters []
constexpr ::System::Random::Random()   {
}
