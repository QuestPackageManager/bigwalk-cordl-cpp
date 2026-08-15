#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioCullingJobScheduler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioCullingJobScheduler_def.hpp"
#include "GlobalNamespace/zzzz__CustomCullingGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioCullingJobScheduler.RegisterListenerController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCullingJobScheduler::*)(::GlobalNamespace::CustomCullingGroup*)>(&::GlobalNamespace::AudioCullingJobScheduler::RegisterListenerController)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180470eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullingJobScheduler*>(),
                        {"RegisterListenerController", {}, {::i2c::type_of<::GlobalNamespace::CustomCullingGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCullingJobScheduler.UnregisterListenerController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCullingJobScheduler::*)(::GlobalNamespace::CustomCullingGroup*)>(&::GlobalNamespace::AudioCullingJobScheduler::UnregisterListenerController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180470f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullingJobScheduler*>(),
                        {"UnregisterListenerController", {}, {::i2c::type_of<::GlobalNamespace::CustomCullingGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCullingJobScheduler.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCullingJobScheduler::*)()>(&::GlobalNamespace::AudioCullingJobScheduler::Update)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180470f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullingJobScheduler*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioCullingJobScheduler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioCullingJobScheduler::*)()>(&::GlobalNamespace::AudioCullingJobScheduler::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180471010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullingJobScheduler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CustomCullingGroup*>*& GlobalNamespace::AudioCullingJobScheduler::__cordl_internal_get__cullingGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cullingGroups;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CustomCullingGroup*>* const& GlobalNamespace::AudioCullingJobScheduler::__cordl_internal_get__cullingGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cullingGroups;
}
constexpr void GlobalNamespace::AudioCullingJobScheduler::__cordl_internal_set__cullingGroups(::System::Collections::Generic::List_1<::GlobalNamespace::CustomCullingGroup*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cullingGroups = value;
}
inline void GlobalNamespace::AudioCullingJobScheduler::RegisterListenerController(::GlobalNamespace::CustomCullingGroup*  cullingGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullingJobScheduler*>(),
                        {"RegisterListenerController", {}, {::i2c::type_of<::GlobalNamespace::CustomCullingGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cullingGroup);
}
inline void GlobalNamespace::AudioCullingJobScheduler::UnregisterListenerController(::GlobalNamespace::CustomCullingGroup*  cullingGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullingJobScheduler*>(),
                        {"UnregisterListenerController", {}, {::i2c::type_of<::GlobalNamespace::CustomCullingGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cullingGroup);
}
inline void GlobalNamespace::AudioCullingJobScheduler::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullingJobScheduler*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioCullingJobScheduler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioCullingJobScheduler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioCullingJobScheduler* GlobalNamespace::AudioCullingJobScheduler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioCullingJobScheduler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioCullingJobScheduler::AudioCullingJobScheduler()   {
}
