#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalVoicePlayerMicrophoneCache.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LocalVoicePlayerMicrophoneCache_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayerMicrophoneCache.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoicePlayerMicrophoneCache::*)()>(&::GlobalNamespace::LocalVoicePlayerMicrophoneCache::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d3e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayerMicrophoneCache*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayerMicrophoneCache.GetMicrophonePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LocalVoicePlayerMicrophoneCache::*)()>(&::GlobalNamespace::LocalVoicePlayerMicrophoneCache::GetMicrophonePosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803d3e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayerMicrophoneCache*>(),
                        {"GetMicrophonePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayerMicrophoneCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoicePlayerMicrophoneCache::*)()>(&::GlobalNamespace::LocalVoicePlayerMicrophoneCache::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayerMicrophoneCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LocalVoicePlayerMicrophoneCache::__cordl_internal_get__microphonePositionCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphonePositionCache;
}
constexpr int32_t const& GlobalNamespace::LocalVoicePlayerMicrophoneCache::__cordl_internal_get__microphonePositionCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphonePositionCache;
}
constexpr void GlobalNamespace::LocalVoicePlayerMicrophoneCache::__cordl_internal_set__microphonePositionCache(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____microphonePositionCache = value;
}
constexpr bool& GlobalNamespace::LocalVoicePlayerMicrophoneCache::__cordl_internal_get__wasUpdatedThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasUpdatedThisFrame;
}
constexpr bool const& GlobalNamespace::LocalVoicePlayerMicrophoneCache::__cordl_internal_get__wasUpdatedThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasUpdatedThisFrame;
}
constexpr void GlobalNamespace::LocalVoicePlayerMicrophoneCache::__cordl_internal_set__wasUpdatedThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasUpdatedThisFrame = value;
}
inline void GlobalNamespace::LocalVoicePlayerMicrophoneCache::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayerMicrophoneCache*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LocalVoicePlayerMicrophoneCache::GetMicrophonePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayerMicrophoneCache*>(),
                        {"GetMicrophonePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoicePlayerMicrophoneCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayerMicrophoneCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalVoicePlayerMicrophoneCache* GlobalNamespace::LocalVoicePlayerMicrophoneCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalVoicePlayerMicrophoneCache*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalVoicePlayerMicrophoneCache::LocalVoicePlayerMicrophoneCache()   {
}
