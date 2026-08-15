#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioFilterTester.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AudioFilterTester_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioFilterTester.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFilterTester::*)()>(&::GlobalNamespace::AudioFilterTester::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180329e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterTester*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterTester.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFilterTester::*)()>(&::GlobalNamespace::AudioFilterTester::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180329e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterTester*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterTester.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFilterTester::*)()>(&::GlobalNamespace::AudioFilterTester::Play)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x180329ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterTester*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterTester.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFilterTester::*)()>(&::GlobalNamespace::AudioFilterTester::Stop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180329e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterTester*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterTester._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFilterTester::*)()>(&::GlobalNamespace::AudioFilterTester::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18032a180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterTester*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterTester._Play_g___clearRef_8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioFilterTester*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioFilterTester::_Play_g___clearRef_8_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18032a130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterTester*>(),
                        {"<Play>g___clearRef|8_0", {}, {::i2c::type_of<::GlobalNamespace::AudioFilterTester*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::AudioFilterTester::__cordl_internal_get_Asset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asset;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::AudioFilterTester::__cordl_internal_get_Asset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asset;
}
constexpr void GlobalNamespace::AudioFilterTester::__cordl_internal_set_Asset(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Asset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AudioFilterTester::__cordl_internal_get_PositionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AudioFilterTester::__cordl_internal_get_PositionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionOffset;
}
constexpr void GlobalNamespace::AudioFilterTester::__cordl_internal_set_PositionOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PositionOffset = value;
}
constexpr float_t& GlobalNamespace::AudioFilterTester::__cordl_internal_get_Q()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Q;
}
constexpr float_t const& GlobalNamespace::AudioFilterTester::__cordl_internal_get_Q() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Q;
}
constexpr void GlobalNamespace::AudioFilterTester::__cordl_internal_set_Q(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Q = value;
}
constexpr float_t& GlobalNamespace::AudioFilterTester::__cordl_internal_get_Frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Frequency;
}
constexpr float_t const& GlobalNamespace::AudioFilterTester::__cordl_internal_get_Frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Frequency;
}
constexpr void GlobalNamespace::AudioFilterTester::__cordl_internal_set_Frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Frequency = value;
}
constexpr float_t& GlobalNamespace::AudioFilterTester::__cordl_internal_get_Volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr float_t const& GlobalNamespace::AudioFilterTester::__cordl_internal_get_Volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr void GlobalNamespace::AudioFilterTester::__cordl_internal_set_Volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Volume = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::AudioFilterTester::__cordl_internal_get__asc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asc;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::AudioFilterTester::__cordl_internal_get__asc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asc;
}
constexpr void GlobalNamespace::AudioFilterTester::__cordl_internal_set__asc(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asc = value;
}
inline void GlobalNamespace::AudioFilterTester::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterTester*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioFilterTester::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterTester*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioFilterTester::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterTester*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioFilterTester::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterTester*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioFilterTester::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterTester*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioFilterTester::_Play_g___clearRef_8_0(::GlobalNamespace::AudioFilterTester*  t, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterTester*>(),
                        {"<Play>g___clearRef|8_0", {}, {::i2c::type_of<::GlobalNamespace::AudioFilterTester*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, c);
}
inline ::GlobalNamespace::AudioFilterTester* GlobalNamespace::AudioFilterTester::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioFilterTester*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioFilterTester::AudioFilterTester()   {
}
