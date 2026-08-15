#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSpeechless.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSpeechless_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__SpeechlessZone_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerSpeechless.get_speechlessZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SpeechlessZone> (::GlobalNamespace::PlayerSpeechless::*)()>(&::GlobalNamespace::PlayerSpeechless::get_speechlessZone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"get_speechlessZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpeechless.set_speechlessZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpeechless::*)(::GlobalNamespace::SpeechlessZone*)>(&::GlobalNamespace::PlayerSpeechless::set_speechlessZone)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180376000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"set_speechlessZone", {}, {::i2c::type_of<::GlobalNamespace::SpeechlessZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpeechless.set_isInNoVisualZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpeechless::*)(bool)>(&::GlobalNamespace::PlayerSpeechless::set_isInNoVisualZone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180375ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"set_isInNoVisualZone", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpeechless.get_speechlessness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerSpeechless::*)()>(&::GlobalNamespace::PlayerSpeechless::get_speechlessness)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"get_speechlessness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpeechless.set_speechlessness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpeechless::*)(float_t)>(&::GlobalNamespace::PlayerSpeechless::set_speechlessness)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180376170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"set_speechlessness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpeechless.get_speechlessnessAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerSpeechless::*)()>(&::GlobalNamespace::PlayerSpeechless::get_speechlessnessAudio)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"get_speechlessnessAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpeechless.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpeechless::*)()>(&::GlobalNamespace::PlayerSpeechless::Update)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180375ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpeechless.GetDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::SpeechlessZone*, ::UnityEngine::Vector3)>(&::GlobalNamespace::PlayerSpeechless::GetDepth)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180375d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"GetDepth", {}, {::i2c::type_of<::GlobalNamespace::SpeechlessZone*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpeechless.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpeechless::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerSpeechless::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpeechless.RefreshPostProcessing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpeechless::*)()>(&::GlobalNamespace::PlayerSpeechless::RefreshPostProcessing)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180375e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"RefreshPostProcessing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpeechless._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpeechless::*)()>(&::GlobalNamespace::PlayerSpeechless::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SpeechlessZone>& GlobalNamespace::PlayerSpeechless::__cordl_internal_get__speechlessZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speechlessZone;
}
constexpr ::UnityW<::GlobalNamespace::SpeechlessZone> const& GlobalNamespace::PlayerSpeechless::__cordl_internal_get__speechlessZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speechlessZone;
}
constexpr void GlobalNamespace::PlayerSpeechless::__cordl_internal_set__speechlessZone(::UnityW<::GlobalNamespace::SpeechlessZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speechlessZone = value;
}
constexpr bool& GlobalNamespace::PlayerSpeechless::__cordl_internal_get__isInNoVisualZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInNoVisualZone;
}
constexpr bool const& GlobalNamespace::PlayerSpeechless::__cordl_internal_get__isInNoVisualZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInNoVisualZone;
}
constexpr void GlobalNamespace::PlayerSpeechless::__cordl_internal_set__isInNoVisualZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInNoVisualZone = value;
}
constexpr float_t& GlobalNamespace::PlayerSpeechless::__cordl_internal_get__speechlessness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speechlessness;
}
constexpr float_t const& GlobalNamespace::PlayerSpeechless::__cordl_internal_get__speechlessness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speechlessness;
}
constexpr void GlobalNamespace::PlayerSpeechless::__cordl_internal_set__speechlessness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speechlessness = value;
}
constexpr bool& GlobalNamespace::PlayerSpeechless::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerSpeechless::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerSpeechless::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PlayerSpeechless::__cordl_internal_get_logValueChanges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logValueChanges;
}
constexpr bool const& GlobalNamespace::PlayerSpeechless::__cordl_internal_get_logValueChanges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logValueChanges;
}
constexpr void GlobalNamespace::PlayerSpeechless::__cordl_internal_set_logValueChanges(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logValueChanges = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerSpeechless::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerSpeechless::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerSpeechless::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
inline ::UnityW<::GlobalNamespace::SpeechlessZone> GlobalNamespace::PlayerSpeechless::get_speechlessZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"get_speechlessZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SpeechlessZone>>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSpeechless::set_speechlessZone(::GlobalNamespace::SpeechlessZone*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"set_speechlessZone", {}, {::i2c::type_of<::GlobalNamespace::SpeechlessZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerSpeechless::set_isInNoVisualZone(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"set_isInNoVisualZone", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::PlayerSpeechless::get_speechlessness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"get_speechlessness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSpeechless::set_speechlessness(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"set_speechlessness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::PlayerSpeechless::get_speechlessnessAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"get_speechlessnessAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSpeechless::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerSpeechless::GetDepth(::GlobalNamespace::SpeechlessZone*  speechlessZone, ::UnityEngine::Vector3  samplePoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"GetDepth", {}, {::i2c::type_of<::GlobalNamespace::SpeechlessZone*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, speechlessZone, samplePoint);
}
inline void GlobalNamespace::PlayerSpeechless::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerSpeechless::RefreshPostProcessing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {"RefreshPostProcessing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSpeechless::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeechless*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSpeechless* GlobalNamespace::PlayerSpeechless::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerSpeechless*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSpeechless::PlayerSpeechless()   {
}
