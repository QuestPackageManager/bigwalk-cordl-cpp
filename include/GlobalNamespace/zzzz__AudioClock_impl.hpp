#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioClock.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioClock_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioUpdateType_def.hpp"
#include "GlobalNamespace/zzzz__CustomPriorityQueue_2_def.hpp"
#include "GlobalNamespace/zzzz__IAudioBehaviour_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioClock.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioClock::*)()>(&::GlobalNamespace::AudioClock::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClock.get_DSPTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::GlobalNamespace::AudioClock::get_DSPTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180470de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"get_DSPTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClock.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClock::*)()>(&::GlobalNamespace::AudioClock::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClock.AudioUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClock::*)(float_t)>(&::GlobalNamespace::AudioClock::AudioUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180470400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClock.AudioFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClock::*)(float_t)>(&::GlobalNamespace::AudioClock::AudioFixedUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180470330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClock.AudioSlowUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClock::*)(float_t)>(&::GlobalNamespace::AudioClock::AudioSlowUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804703c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClock.AudioLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClock::*)(float_t)>(&::GlobalNamespace::AudioClock::AudioLateUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180470370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClock.FireDSPAlarms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClock::*)(::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*, double_t)>(&::GlobalNamespace::AudioClock::FireDSPAlarms)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180470840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"FireDSPAlarms", {}, {::i2c::type_of<::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClock.FireFrameAlarms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClock::*)()>(&::GlobalNamespace::AudioClock::FireFrameAlarms)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180470a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"FireFrameAlarms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClock.FireASCAlarms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClock::*)()>(&::GlobalNamespace::AudioClock::FireASCAlarms)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x180470440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"FireASCAlarms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClock.AddAlarm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioUpdateType, double_t, ::System::Action_1<double_t>*)>(&::GlobalNamespace::AudioClock::AddAlarm)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180470130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"AddAlarm", {}, {::i2c::type_of<::GlobalNamespace::AudioUpdateType>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClock.AddAlarm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::Action_1<int32_t>*)>(&::GlobalNamespace::AudioClock::AddAlarm)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18046ffb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"AddAlarm", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClock.AddAlarm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioSourceController*, float_t, ::System::Action_1<double_t>*)>(&::GlobalNamespace::AudioClock::AddAlarm)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18046fd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"AddAlarm", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClock::*)()>(&::GlobalNamespace::AudioClock::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180470be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClock._AddAlarm_g___clearRef_25_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,float_t>*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioClock::_AddAlarm_g___clearRef_25_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180470bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"<AddAlarm>g___clearRef|25_0", {}, {::i2c::type_of<::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,float_t>*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AudioClock::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& GlobalNamespace::AudioClock::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void GlobalNamespace::AudioClock::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*& GlobalNamespace::AudioClock::__cordl_internal_get__alarmsUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alarmsUpdate;
}
constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>* const& GlobalNamespace::AudioClock::__cordl_internal_get__alarmsUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alarmsUpdate;
}
constexpr void GlobalNamespace::AudioClock::__cordl_internal_set__alarmsUpdate(::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alarmsUpdate = value;
}
constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*& GlobalNamespace::AudioClock::__cordl_internal_get__alarmsFixedUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alarmsFixedUpdate;
}
constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>* const& GlobalNamespace::AudioClock::__cordl_internal_get__alarmsFixedUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alarmsFixedUpdate;
}
constexpr void GlobalNamespace::AudioClock::__cordl_internal_set__alarmsFixedUpdate(::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alarmsFixedUpdate = value;
}
constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*& GlobalNamespace::AudioClock::__cordl_internal_get__alarmsLateUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alarmsLateUpdate;
}
constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>* const& GlobalNamespace::AudioClock::__cordl_internal_get__alarmsLateUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alarmsLateUpdate;
}
constexpr void GlobalNamespace::AudioClock::__cordl_internal_set__alarmsLateUpdate(::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alarmsLateUpdate = value;
}
constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*& GlobalNamespace::AudioClock::__cordl_internal_get__alarmsSlowUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alarmsSlowUpdate;
}
constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>* const& GlobalNamespace::AudioClock::__cordl_internal_get__alarmsSlowUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alarmsSlowUpdate;
}
constexpr void GlobalNamespace::AudioClock::__cordl_internal_set__alarmsSlowUpdate(::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alarmsSlowUpdate = value;
}
constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<int32_t>*,int32_t>*& GlobalNamespace::AudioClock::__cordl_internal_get__alarmsLateUpdateByFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alarmsLateUpdateByFrame;
}
constexpr ::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<int32_t>*,int32_t>* const& GlobalNamespace::AudioClock::__cordl_internal_get__alarmsLateUpdateByFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alarmsLateUpdateByFrame;
}
constexpr void GlobalNamespace::AudioClock::__cordl_internal_set__alarmsLateUpdateByFrame(::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<int32_t>*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alarmsLateUpdateByFrame = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioSourceController>,::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,float_t>*>*& GlobalNamespace::AudioClock::__cordl_internal_get__ascAlarms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ascAlarms;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioSourceController>,::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,float_t>*>* const& GlobalNamespace::AudioClock::__cordl_internal_get__ascAlarms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ascAlarms;
}
constexpr void GlobalNamespace::AudioClock::__cordl_internal_set__ascAlarms(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioSourceController>,::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,float_t>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ascAlarms = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::AudioClock::__cordl_internal_get__ascsToRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ascsToRemove;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::AudioClock::__cordl_internal_get__ascsToRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ascsToRemove;
}
constexpr void GlobalNamespace::AudioClock::__cordl_internal_set__ascsToRemove(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ascsToRemove = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::AudioClock::__cordl_internal_get__ascsToIterate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ascsToIterate;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::AudioClock::__cordl_internal_get__ascsToIterate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ascsToIterate;
}
constexpr void GlobalNamespace::AudioClock::__cordl_internal_set__ascsToIterate(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ascsToIterate = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Action_1<double_t>*>*& GlobalNamespace::AudioClock::__cordl_internal_get__executionBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____executionBuffer;
}
constexpr ::System::Collections::Generic::List_1<::System::Action_1<double_t>*>* const& GlobalNamespace::AudioClock::__cordl_internal_get__executionBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____executionBuffer;
}
constexpr void GlobalNamespace::AudioClock::__cordl_internal_set__executionBuffer(::System::Collections::Generic::List_1<::System::Action_1<double_t>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____executionBuffer = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Action_1<int32_t>*>*& GlobalNamespace::AudioClock::__cordl_internal_get__executionBufferInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____executionBufferInt;
}
constexpr ::System::Collections::Generic::List_1<::System::Action_1<int32_t>*>* const& GlobalNamespace::AudioClock::__cordl_internal_get__executionBufferInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____executionBufferInt;
}
constexpr void GlobalNamespace::AudioClock::__cordl_internal_set__executionBufferInt(::System::Collections::Generic::List_1<::System::Action_1<int32_t>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____executionBufferInt = value;
}
inline bool GlobalNamespace::AudioClock::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline double_t GlobalNamespace::AudioClock::get_DSPTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"get_DSPTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::AudioClock::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioClock::AudioUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioClock::AudioFixedUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioClock::AudioSlowUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioClock::AudioLateUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioClock::FireDSPAlarms(::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*  queue, double_t  currentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"FireDSPAlarms", {}, {::i2c::type_of<::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,double_t>*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, queue, currentTime);
}
inline void GlobalNamespace::AudioClock::FireFrameAlarms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"FireFrameAlarms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioClock::FireASCAlarms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"FireASCAlarms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioClock::AddAlarm(::GlobalNamespace::AudioUpdateType  updateType, double_t  dspTime, ::System::Action_1<double_t>*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"AddAlarm", {}, {::i2c::type_of<::GlobalNamespace::AudioUpdateType>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, updateType, dspTime, action);
}
inline void GlobalNamespace::AudioClock::AddAlarm(int32_t  frame, ::System::Action_1<int32_t>*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"AddAlarm", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, frame, action);
}
inline void GlobalNamespace::AudioClock::AddAlarm(::GlobalNamespace::AudioSourceController*  asc, float_t  clipTime, ::System::Action_1<double_t>*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"AddAlarm", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action_1<double_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asc, clipTime, action);
}
inline void GlobalNamespace::AudioClock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioClock::_AddAlarm_g___clearRef_25_0(::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,float_t>*  q, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioClock*>(),
                        {"<AddAlarm>g___clearRef|25_0", {}, {::i2c::type_of<::GlobalNamespace::CustomPriorityQueue_2<::System::Action_1<double_t>*,float_t>*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, q, c);
}
inline ::GlobalNamespace::AudioClock* GlobalNamespace::AudioClock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioClock*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr  GlobalNamespace::AudioClock::operator ::GlobalNamespace::IAudioBehaviour*() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* GlobalNamespace::AudioClock::i___GlobalNamespace__IAudioBehaviour() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioClock::AudioClock()   {
}
