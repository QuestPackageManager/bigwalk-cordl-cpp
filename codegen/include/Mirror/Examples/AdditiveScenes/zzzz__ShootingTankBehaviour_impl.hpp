#pragma once
// IWYU pragma private; include "Mirror/Examples/AdditiveScenes/ShootingTankBehaviour.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Mirror/Examples/AdditiveScenes/zzzz__ShootingTankBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkAnimator_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::*)()>(&::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18156b9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::*)()>(&::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::Update)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18156ba20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour.ShootNearestPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::*)()>(&::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::ShootNearestPlayer)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x18156b650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(),
                        {"ShootNearestPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::*)()>(&::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18156bb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::*)()>(&::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour.get_Networkrotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::*)()>(&::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::get_Networkrotation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180de9ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(),
                        {"get_Networkrotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour.set_Networkrotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::*)(::ByRefConst<::UnityEngine::Quaternion>)>(&::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::set_Networkrotation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18156bb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(),
                        {"set_Networkrotation", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18156b5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(),
                    {::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18156b580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(),
                    {::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Quaternion& Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::__cordl_internal_get_rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr ::UnityEngine::Quaternion const& Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::__cordl_internal_get_rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr void Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::__cordl_internal_set_rotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotation = value;
}
constexpr ::UnityW<::Mirror::NetworkAnimator>& Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::__cordl_internal_get_networkAnimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkAnimator;
}
constexpr ::UnityW<::Mirror::NetworkAnimator> const& Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::__cordl_internal_get_networkAnimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkAnimator;
}
constexpr void Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::__cordl_internal_set_networkAnimator(::UnityW<::Mirror::NetworkAnimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkAnimator = value;
}
constexpr float_t& Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::__cordl_internal_get_turnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSpeed;
}
constexpr float_t const& Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::__cordl_internal_get_turnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSpeed;
}
constexpr void Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::__cordl_internal_set_turnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnSpeed = value;
}
inline void Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::ShootNearestPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(),
                        {"ShootNearestPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::get_Networkrotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(),
                        {"get_Networkrotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::set_Networkrotation(::ByRefConst<::UnityEngine::Quaternion>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(),
                        {"set_Networkrotation", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour* Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::AdditiveScenes::ShootingTankBehaviour::ShootingTankBehaviour()   {
}
