#pragma once
// IWYU pragma private; include "GlobalNamespace/BadConnectionWarning.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BadConnectionWarning_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BadConnectionWarning.get_hasBadConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BadConnectionWarning::*)()>(&::GlobalNamespace::BadConnectionWarning::get_hasBadConnection)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180347a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BadConnectionWarning*>(),
                        {"get_hasBadConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadConnectionWarning.set_hasBadConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BadConnectionWarning::*)(bool)>(&::GlobalNamespace::BadConnectionWarning::set_hasBadConnection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18041d8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BadConnectionWarning*>(),
                        {"set_hasBadConnection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadConnectionWarning.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BadConnectionWarning::*)()>(&::GlobalNamespace::BadConnectionWarning::Start)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18041d5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BadConnectionWarning*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadConnectionWarning.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BadConnectionWarning::*)()>(&::GlobalNamespace::BadConnectionWarning::Update)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x18041d5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BadConnectionWarning*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadConnectionWarning.CheckForIsEOSLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BadConnectionWarning::*)()>(&::GlobalNamespace::BadConnectionWarning::CheckForIsEOSLobby)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18041d520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BadConnectionWarning*>(),
                        {"CheckForIsEOSLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadConnectionWarning.CanReachInternet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BadConnectionWarning::*)()>(&::GlobalNamespace::BadConnectionWarning::CanReachInternet)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18041d4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BadConnectionWarning*>(),
                        {"CanReachInternet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadConnectionWarning._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BadConnectionWarning::*)()>(&::GlobalNamespace::BadConnectionWarning::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18041d8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BadConnectionWarning*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_warningDisplayObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningDisplayObject;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_warningDisplayObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningDisplayObject;
}
constexpr void GlobalNamespace::BadConnectionWarning::__cordl_internal_set_warningDisplayObject(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___warningDisplayObject = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_warningText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningText;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_warningText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningText;
}
constexpr void GlobalNamespace::BadConnectionWarning::__cordl_internal_set_warningText(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___warningText = value;
}
constexpr ::StringW& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_locKeyOffline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locKeyOffline;
}
constexpr ::StringW const& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_locKeyOffline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locKeyOffline;
}
constexpr void GlobalNamespace::BadConnectionWarning::__cordl_internal_set_locKeyOffline(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locKeyOffline = value;
}
constexpr ::StringW& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_locKeySlow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locKeySlow;
}
constexpr ::StringW const& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_locKeySlow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locKeySlow;
}
constexpr void GlobalNamespace::BadConnectionWarning::__cordl_internal_set_locKeySlow(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locKeySlow = value;
}
constexpr ::StringW& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_locKeyReconnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locKeyReconnection;
}
constexpr ::StringW const& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_locKeyReconnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locKeyReconnection;
}
constexpr void GlobalNamespace::BadConnectionWarning::__cordl_internal_set_locKeyReconnection(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locKeyReconnection = value;
}
constexpr float_t& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_timeoutWarningThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeoutWarningThreshold;
}
constexpr float_t const& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_timeoutWarningThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeoutWarningThreshold;
}
constexpr void GlobalNamespace::BadConnectionWarning::__cordl_internal_set_timeoutWarningThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeoutWarningThreshold = value;
}
constexpr float_t& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_threshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threshold;
}
constexpr float_t const& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_threshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threshold;
}
constexpr void GlobalNamespace::BadConnectionWarning::__cordl_internal_set_threshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___threshold = value;
}
constexpr float_t& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_startPauseDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPauseDuration;
}
constexpr float_t const& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_startPauseDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPauseDuration;
}
constexpr void GlobalNamespace::BadConnectionWarning::__cordl_internal_set_startPauseDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPauseDuration = value;
}
constexpr float_t& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_lastLobbyCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLobbyCheck;
}
constexpr float_t const& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_lastLobbyCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLobbyCheck;
}
constexpr void GlobalNamespace::BadConnectionWarning::__cordl_internal_set_lastLobbyCheck(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastLobbyCheck = value;
}
constexpr bool& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_isInLobby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInLobby;
}
constexpr bool const& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_isInLobby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInLobby;
}
constexpr void GlobalNamespace::BadConnectionWarning::__cordl_internal_set_isInLobby(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInLobby = value;
}
constexpr float_t& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_inLobbySince()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inLobbySince;
}
constexpr float_t const& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_inLobbySince() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inLobbySince;
}
constexpr void GlobalNamespace::BadConnectionWarning::__cordl_internal_set_inLobbySince(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inLobbySince = value;
}
constexpr ::System::Nullable_1<float_t>& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_pauseUntilTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pauseUntilTime;
}
constexpr ::System::Nullable_1<float_t> const& GlobalNamespace::BadConnectionWarning::__cordl_internal_get_pauseUntilTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pauseUntilTime;
}
constexpr void GlobalNamespace::BadConnectionWarning::__cordl_internal_set_pauseUntilTime(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pauseUntilTime = value;
}
constexpr bool& GlobalNamespace::BadConnectionWarning::__cordl_internal_get__hasBadConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasBadConnection;
}
constexpr bool const& GlobalNamespace::BadConnectionWarning::__cordl_internal_get__hasBadConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasBadConnection;
}
constexpr void GlobalNamespace::BadConnectionWarning::__cordl_internal_set__hasBadConnection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasBadConnection = value;
}
inline bool GlobalNamespace::BadConnectionWarning::get_hasBadConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BadConnectionWarning*>(),
                        {"get_hasBadConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BadConnectionWarning::set_hasBadConnection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BadConnectionWarning*>(),
                        {"set_hasBadConnection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BadConnectionWarning::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BadConnectionWarning*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BadConnectionWarning::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BadConnectionWarning*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BadConnectionWarning::CheckForIsEOSLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BadConnectionWarning*>(),
                        {"CheckForIsEOSLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::BadConnectionWarning::CanReachInternet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BadConnectionWarning*>(),
                        {"CanReachInternet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BadConnectionWarning::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BadConnectionWarning*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BadConnectionWarning* GlobalNamespace::BadConnectionWarning::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BadConnectionWarning*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BadConnectionWarning::BadConnectionWarning()   {
}
