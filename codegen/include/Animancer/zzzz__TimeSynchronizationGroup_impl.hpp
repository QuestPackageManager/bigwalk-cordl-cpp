#pragma once
// IWYU pragma private; include "Animancer/TimeSynchronizationGroup.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Animancer/zzzz__TimeSynchronizationGroup_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Animancer::TimeSynchronizationGroup.get_Animancer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Animancer::AnimancerComponent> (::Animancer::TimeSynchronizationGroup::*)()>(&::Animancer::TimeSynchronizationGroup::get_Animancer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"get_Animancer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::TimeSynchronizationGroup.set_Animancer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::TimeSynchronizationGroup::*)(::Animancer::AnimancerComponent*)>(&::Animancer::TimeSynchronizationGroup::set_Animancer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180316010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"set_Animancer", {}, {::i2c::type_of<::Animancer::AnimancerComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::TimeSynchronizationGroup.get_NormalizedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::Animancer::TimeSynchronizationGroup::*)()>(&::Animancer::TimeSynchronizationGroup::get_NormalizedTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"get_NormalizedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::TimeSynchronizationGroup.set_NormalizedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::TimeSynchronizationGroup::*)(::System::Nullable_1<float_t>)>(&::Animancer::TimeSynchronizationGroup::set_NormalizedTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180316040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"set_NormalizedTime", {}, {::i2c::type_of<::System::Nullable_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::TimeSynchronizationGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::TimeSynchronizationGroup::*)(::Animancer::AnimancerComponent*)>(&::Animancer::TimeSynchronizationGroup::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180315fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::AnimancerComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::TimeSynchronizationGroup.StoreTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::TimeSynchronizationGroup::*)(::System::Object*)>(&::Animancer::TimeSynchronizationGroup::StoreTime)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180315c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"StoreTime", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::TimeSynchronizationGroup.StoreTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::TimeSynchronizationGroup::*)(::System::Object*, ::Animancer::AnimancerState*)>(&::Animancer::TimeSynchronizationGroup::StoreTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180315d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"StoreTime", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::TimeSynchronizationGroup.SyncTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::TimeSynchronizationGroup::*)(::System::Object*)>(&::Animancer::TimeSynchronizationGroup::SyncTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180315f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"SyncTime", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::TimeSynchronizationGroup.SyncTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::TimeSynchronizationGroup::*)(::System::Object*, float_t)>(&::Animancer::TimeSynchronizationGroup::SyncTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180315ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"SyncTime", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::TimeSynchronizationGroup.SyncTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::TimeSynchronizationGroup::*)(::System::Object*, ::Animancer::AnimancerState*)>(&::Animancer::TimeSynchronizationGroup::SyncTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180315f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"SyncTime", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::TimeSynchronizationGroup.SyncTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::TimeSynchronizationGroup::*)(::System::Object*, ::Animancer::AnimancerState*, float_t)>(&::Animancer::TimeSynchronizationGroup::SyncTime)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180315dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"SyncTime", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::TimeSynchronizationGroup::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::TimeSynchronizationGroup::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::TimeSynchronizationGroup::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::System::Nullable_1<float_t>& Animancer::TimeSynchronizationGroup::__cordl_internal_get__NormalizedTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NormalizedTime_k__BackingField;
}
constexpr ::System::Nullable_1<float_t> const& Animancer::TimeSynchronizationGroup::__cordl_internal_get__NormalizedTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NormalizedTime_k__BackingField;
}
constexpr void Animancer::TimeSynchronizationGroup::__cordl_internal_set__NormalizedTime_k__BackingField(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NormalizedTime_k__BackingField = value;
}
inline ::UnityW<::Animancer::AnimancerComponent> Animancer::TimeSynchronizationGroup::get_Animancer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"get_Animancer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Animancer::AnimancerComponent>>(this, ___internal_method);
}
inline void Animancer::TimeSynchronizationGroup::set_Animancer(::Animancer::AnimancerComponent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"set_Animancer", {}, {::i2c::type_of<::Animancer::AnimancerComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<float_t> Animancer::TimeSynchronizationGroup::get_NormalizedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"get_NormalizedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method);
}
inline void Animancer::TimeSynchronizationGroup::set_NormalizedTime(::System::Nullable_1<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"set_NormalizedTime", {}, {::i2c::type_of<::System::Nullable_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::TimeSynchronizationGroup::_ctor(::Animancer::AnimancerComponent*  animancer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::AnimancerComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animancer);
}
inline bool Animancer::TimeSynchronizationGroup::StoreTime(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"StoreTime", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool Animancer::TimeSynchronizationGroup::StoreTime(::System::Object*  key, ::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"StoreTime", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, state);
}
inline bool Animancer::TimeSynchronizationGroup::SyncTime(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"SyncTime", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool Animancer::TimeSynchronizationGroup::SyncTime(::System::Object*  key, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"SyncTime", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, deltaTime);
}
inline bool Animancer::TimeSynchronizationGroup::SyncTime(::System::Object*  key, ::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"SyncTime", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, state);
}
inline bool Animancer::TimeSynchronizationGroup::SyncTime(::System::Object*  key, ::Animancer::AnimancerState*  state, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::TimeSynchronizationGroup*>(),
                        {"SyncTime", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, state, deltaTime);
}
inline ::Animancer::TimeSynchronizationGroup* Animancer::TimeSynchronizationGroup::New_ctor(::Animancer::AnimancerComponent*  animancer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::TimeSynchronizationGroup*>(animancer));
}
// Ctor Parameters []
constexpr ::Animancer::TimeSynchronizationGroup::TimeSynchronizationGroup()   {
}
