#pragma once
// IWYU pragma private; include "GlobalNamespace/GPSTracker.hpp"
#include "TMPro/zzzz__TMP_Text_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GPSTracker_def.hpp"
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GPSTracker.ToNorth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)()>(&::GlobalNamespace::GPSTracker::ToNorth)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803fdec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPSTracker*>(),
                        {"ToNorth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GPSTracker.GetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GPSTracker::GetX)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803fdd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPSTracker*>(),
                        {"GetX", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GPSTracker.GetZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GPSTracker::GetZ)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803fde20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPSTracker*>(),
                        {"GetZ", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GPSTracker.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GPSTracker::*)()>(&::GlobalNamespace::GPSTracker::Update)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1803fdef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPSTracker*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GPSTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GPSTracker::*)()>(&::GlobalNamespace::GPSTracker::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPSTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& GlobalNamespace::GPSTracker::__cordl_internal_get_textFieldXs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textFieldXs;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& GlobalNamespace::GPSTracker::__cordl_internal_get_textFieldXs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textFieldXs;
}
constexpr void GlobalNamespace::GPSTracker::__cordl_internal_set_textFieldXs(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textFieldXs = value;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& GlobalNamespace::GPSTracker::__cordl_internal_get_textFieldZs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textFieldZs;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& GlobalNamespace::GPSTracker::__cordl_internal_get_textFieldZs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textFieldZs;
}
constexpr void GlobalNamespace::GPSTracker::__cordl_internal_set_textFieldZs(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textFieldZs = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::GPSTracker::__cordl_internal_get_sound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::GPSTracker::__cordl_internal_get_sound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sound;
}
constexpr void GlobalNamespace::GPSTracker::__cordl_internal_set_sound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sound = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GPSTracker::__cordl_internal_get_lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GPSTracker::__cordl_internal_get_lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr void GlobalNamespace::GPSTracker::__cordl_internal_set_lastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPosition = value;
}
constexpr int32_t& GlobalNamespace::GPSTracker::__cordl_internal_get__lastX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastX;
}
constexpr int32_t const& GlobalNamespace::GPSTracker::__cordl_internal_get__lastX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastX;
}
constexpr void GlobalNamespace::GPSTracker::__cordl_internal_set__lastX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastX = value;
}
constexpr int32_t& GlobalNamespace::GPSTracker::__cordl_internal_get__lastZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastZ;
}
constexpr int32_t const& GlobalNamespace::GPSTracker::__cordl_internal_get__lastZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastZ;
}
constexpr void GlobalNamespace::GPSTracker::__cordl_internal_set__lastZ(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastZ = value;
}
constexpr bool& GlobalNamespace::GPSTracker::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::GPSTracker::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::GPSTracker::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline ::UnityEngine::Quaternion GlobalNamespace::GPSTracker::ToNorth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPSTracker*>(),
                        {"ToNorth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::GPSTracker::GetX(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPSTracker*>(),
                        {"GetX", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, position);
}
inline int32_t GlobalNamespace::GPSTracker::GetZ(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPSTracker*>(),
                        {"GetZ", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, position);
}
inline void GlobalNamespace::GPSTracker::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPSTracker*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GPSTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPSTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GPSTracker* GlobalNamespace::GPSTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GPSTracker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GPSTracker::GPSTracker()   {
}
