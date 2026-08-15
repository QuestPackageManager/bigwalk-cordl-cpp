#pragma once
// IWYU pragma private; include "GlobalNamespace/OfflineMicMeter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OfflineMicMeter_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OfflineMicMeter.get_CurrentClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::GlobalNamespace::OfflineMicMeter::*)()>(&::GlobalNamespace::OfflineMicMeter::get_CurrentClip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180427d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {"get_CurrentClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OfflineMicMeter.StartMicrophone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OfflineMicMeter::*)()>(&::GlobalNamespace::OfflineMicMeter::StartMicrophone)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180427aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {"StartMicrophone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OfflineMicMeter.StopMicrophone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OfflineMicMeter::*)(bool)>(&::GlobalNamespace::OfflineMicMeter::StopMicrophone)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180427b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {"StopMicrophone", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OfflineMicMeter.LevelMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OfflineMicMeter::*)()>(&::GlobalNamespace::OfflineMicMeter::LevelMax)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180427950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {"LevelMax", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OfflineMicMeter.LevelAvg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OfflineMicMeter::*)()>(&::GlobalNamespace::OfflineMicMeter::LevelAvg)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180427800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {"LevelAvg", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OfflineMicMeter.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OfflineMicMeter::*)()>(&::GlobalNamespace::OfflineMicMeter::Update)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180427b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OfflineMicMeter.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OfflineMicMeter::*)()>(&::GlobalNamespace::OfflineMicMeter::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180427a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OfflineMicMeter.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OfflineMicMeter::*)()>(&::GlobalNamespace::OfflineMicMeter::OnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180427a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OfflineMicMeter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OfflineMicMeter::*)()>(&::GlobalNamespace::OfflineMicMeter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::OfflineMicMeter::__cordl_internal_get_amplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amplitude;
}
constexpr float_t const& GlobalNamespace::OfflineMicMeter::__cordl_internal_get_amplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amplitude;
}
constexpr void GlobalNamespace::OfflineMicMeter::__cordl_internal_set_amplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___amplitude = value;
}
constexpr bool& GlobalNamespace::OfflineMicMeter::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::OfflineMicMeter::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::OfflineMicMeter::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::StringW& GlobalNamespace::OfflineMicMeter::__cordl_internal_get_playingDeviceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playingDeviceName;
}
constexpr ::StringW const& GlobalNamespace::OfflineMicMeter::__cordl_internal_get_playingDeviceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playingDeviceName;
}
constexpr void GlobalNamespace::OfflineMicMeter::__cordl_internal_set_playingDeviceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playingDeviceName = value;
}
constexpr float_t& GlobalNamespace::OfflineMicMeter::__cordl_internal_get_maxOnDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxOnDevice;
}
constexpr float_t const& GlobalNamespace::OfflineMicMeter::__cordl_internal_get_maxOnDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxOnDevice;
}
constexpr void GlobalNamespace::OfflineMicMeter::__cordl_internal_set_maxOnDevice(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxOnDevice = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::OfflineMicMeter::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::OfflineMicMeter::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr void GlobalNamespace::OfflineMicMeter::__cordl_internal_set_buffer(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
constexpr bool& GlobalNamespace::OfflineMicMeter::__cordl_internal_get_wasRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasRecording;
}
constexpr bool const& GlobalNamespace::OfflineMicMeter::__cordl_internal_get_wasRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasRecording;
}
constexpr void GlobalNamespace::OfflineMicMeter::__cordl_internal_set_wasRecording(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasRecording = value;
}
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::OfflineMicMeter::get_CurrentClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {"get_CurrentClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void GlobalNamespace::OfflineMicMeter::StartMicrophone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {"StartMicrophone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OfflineMicMeter::StopMicrophone(bool  forceStop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {"StopMicrophone", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceStop);
}
inline float_t GlobalNamespace::OfflineMicMeter::LevelMax()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {"LevelMax", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::OfflineMicMeter::LevelAvg()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {"LevelAvg", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OfflineMicMeter::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OfflineMicMeter::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OfflineMicMeter::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OfflineMicMeter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OfflineMicMeter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OfflineMicMeter* GlobalNamespace::OfflineMicMeter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OfflineMicMeter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OfflineMicMeter::OfflineMicMeter()   {
}
