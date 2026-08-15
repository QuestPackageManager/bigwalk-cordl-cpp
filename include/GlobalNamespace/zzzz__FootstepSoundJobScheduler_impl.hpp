#pragma once
// IWYU pragma private; include "GlobalNamespace/FootstepSoundJobScheduler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FootstepSoundJobScheduler_def.hpp"
#include "GlobalNamespace/zzzz__FootstepSound_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FootstepSoundJobScheduler.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSoundJobScheduler::*)()>(&::GlobalNamespace::FootstepSoundJobScheduler::Start)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803d1990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSoundJobScheduler*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSoundJobScheduler.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSoundJobScheduler::*)()>(&::GlobalNamespace::FootstepSoundJobScheduler::Update)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803d19c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSoundJobScheduler*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSoundJobScheduler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSoundJobScheduler::*)()>(&::GlobalNamespace::FootstepSoundJobScheduler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSoundJobScheduler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FootstepSound>& GlobalNamespace::FootstepSoundJobScheduler::__cordl_internal_get_footstepSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___footstepSound;
}
constexpr ::UnityW<::GlobalNamespace::FootstepSound> const& GlobalNamespace::FootstepSoundJobScheduler::__cordl_internal_get_footstepSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___footstepSound;
}
constexpr void GlobalNamespace::FootstepSoundJobScheduler::__cordl_internal_set_footstepSound(::UnityW<::GlobalNamespace::FootstepSound>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___footstepSound = value;
}
inline void GlobalNamespace::FootstepSoundJobScheduler::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSoundJobScheduler*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSoundJobScheduler::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSoundJobScheduler*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSoundJobScheduler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSoundJobScheduler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FootstepSoundJobScheduler* GlobalNamespace::FootstepSoundJobScheduler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FootstepSoundJobScheduler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FootstepSoundJobScheduler::FootstepSoundJobScheduler()   {
}
